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
	iLocal_1942 = 1;
	func_435();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_424())
		{
			func_420();
		}
		if (Global_1696039)
		{
			Global_1696039 = 0;
			func_420();
		}
		if (Global_2405072.f_2672 && Global_2409287 != 0)
		{
			if (Global_2409287 != 6)
			{
				func_420();
			}
		}
		if (func_419() && CAM::IS_SCREEN_FADED_OUT())
		{
			func_420();
		}
		if ((!func_418(PLAYER::PLAYER_ID()) && !func_417(PLAYER::PLAYER_ID())) && !func_416(PLAYER::PLAYER_ID()))
		{
			func_420();
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_34, 6))
		{
			func_420();
		}
		if (func_417(PLAYER::PLAYER_ID()) && func_412() != func_411())
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2425662[func_412()].f_310.f_4, 0) && CAM::IS_SCREEN_FADED_OUT())
			{
				func_420();
			}
		}
		if (func_417(PLAYER::PLAYER_ID()) && func_409() != 0)
		{
			func_420();
		}
		iVar0 = 0;
		while (iVar0 < Local_1038.f_26)
		{
			if ((!func_408() && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_50[iVar0])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iVar0]))
			{
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_116.f_50[iVar0], 1);
			}
			iVar0++;
		}
		func_91();
		if (func_408())
		{
			func_1();
		}
	}
}

void func_1()
{
	func_90();
	func_87();
	func_81();
	iVar0 = 0;
	while (iVar0 < Local_1038.f_26)
	{
		switch (Local_116.f_586[iVar0])
		{
			case 0:
				if (Global_2514396 != iVar0 && (Global_2514396 != -1 || func_417(PLAYER::PLAYER_ID())))
				{
					Local_116.f_25[iVar0] = 1;
					func_80(&(Local_116.f_168[iVar0]));
					func_79(1, iVar0);
				}
				break;
			
			case 1:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iVar0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iVar0])))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iVar0]))
					{
						Local_116.f_45[iVar0] = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(Local_116.f_35[iVar0]);
						if (Local_116.f_45[iVar0] != -1)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), func_78(), func_77(iVar0), 3))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iVar0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), -1424880317))
								{
									Local_116.f_35[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, 1, 0, 1065353216, 0, 1065353216);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), Local_116.f_35[iVar0], func_78(), func_74(iVar0), 2f, -2f, 13, 16, 1148846080, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iVar0]);
								}
							}
							else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iVar0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), -1424880317))
							{
								Local_116.f_35[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, 0, 1, 1065353216, 0, 1065353216);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), Local_116.f_35[iVar0], func_78(), func_77(iVar0), 2f, -2f, 13, 16, 1148846080, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iVar0]);
							}
						}
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_50[iVar0]);
					}
				}
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if ((Local_116.f_117[(iVar0 * 4 + iVar1)] != func_411() && Global_2514396 != iVar0) && (Global_2514396 != -1 || func_417(PLAYER::PLAYER_ID())))
					{
						func_79(2, iVar0);
						Local_116.f_40[iVar0] = iVar1;
						func_73(&(Local_116.f_159[iVar0]), 0, 0);
						return;
					}
					iVar1++;
				}
				break;
			
			case 2:
				if (func_72(&(Local_116.f_159[iVar0])) && func_71(&(Local_116.f_159[iVar0]), 2000, 0))
				{
					Local_116.f_35[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, 1, 0, 1065353216, 0, 1065353216);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), Local_116.f_35[iVar0], func_78(), func_70(iVar0, Local_116.f_40[iVar0]), 2f, -2f, 13, 16, 1148846080, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iVar0]);
					func_69(&(Local_116.f_159[iVar0]));
				}
				func_2(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	iVar3 = 0;
	iVar4 = 0;
	bVar6 = false;
	if (Local_116.f_576[iParam0] > 7 && Local_116.f_576[iParam0] < 12)
	{
		bVar6 = true;
	}
	if ((!func_68(iParam0, bVar6) || Global_2514396 == iParam0) || Local_116[iParam0])
	{
		Local_116[iParam0] = 1;
		func_67(iParam0);
		return;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_50[iParam0]))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
		{
			Local_116.f_10[iParam0] = 0;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]);
		}
		else if (!Local_116.f_10[iParam0])
		{
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_116.f_50[iParam0], 0);
			Local_116.f_10[iParam0] = 1;
		}
	}
	Local_116.f_45[iParam0] = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
	switch (Local_116.f_576[iParam0])
	{
		case 0:
			func_66(1, iParam0);
			break;
		
		case 1:
			bVar0 = true;
			iVar2 = 0;
			while (iVar2 < 4)
			{
				iVar1 = Local_116.f_117[(iParam0 * 4 + iVar2)];
				if (iVar1 != -1)
				{
					if (Local_749[iVar1] != 0 || Local_749[iVar1].f_6 != 0)
					{
						bVar0 = false;
					}
				}
				iVar2++;
			}
			if (bVar0)
			{
				func_65(&(Local_116.f_168[iParam0]));
				func_64(iParam0);
				func_66(2, iParam0);
			}
			break;
		
		case 2:
			bVar0 = true;
			iVar2 = 0;
			while (iVar2 < 4)
			{
				iVar1 = Local_116.f_117[(iParam0 * 4 + iVar2)];
				if (iVar1 != -1)
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_749[iVar1].f_6, 0))
					{
						bVar0 = false;
					}
				}
				iVar2++;
			}
			if (bVar0)
			{
				func_66(3, iParam0);
			}
			break;
		
		case 3:
			if (!func_63(iParam0, 18))
			{
				if (func_53(12, &(Local_116.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 18);
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
				{
					if (Local_116.f_45[iParam0] != -1)
					{
						if (Local_116.f_30[iParam0] == 1)
						{
							if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), func_78(), func_77(iParam0), 3))
							{
								Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_51(iParam0, -1), 2f, -2f, 13, 16, 1148846080, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
							}
						}
						else if (((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 0), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 1), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 2), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 3), 3))
						{
							Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_50(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), func_78(), func_77(iParam0), 3))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317))
							{
								Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_74(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
							}
						}
						else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317))
						{
							Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
						}
					}
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]);
				}
			}
			bVar0 = true;
			iVar3 = 0;
			iVar4 = 0;
			if (!func_72(&(Local_116.f_150[iParam0])))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_116.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						iVar3++;
						if (Local_749[iVar1].f_3 > 0 || Local_749[iVar1].f_5 > 0)
						{
							func_73(&(Local_116.f_150[iParam0]), 0, 0);
						}
						else
						{
							iVar4++;
						}
					}
					iVar2++;
				}
				if (iVar3 == iVar4)
				{
					if (!func_72(&(Local_116.f_591[iParam0])))
					{
						func_73(&(Local_116.f_591[iParam0]), 0, 0);
					}
					else if (func_71(&(Local_116.f_591[iParam0]), 60000, 0))
					{
						func_64(iParam0);
						func_69(&(Local_116.f_591[iParam0]));
					}
					else if (func_71(&(Local_116.f_591[iParam0]), 30000, 0))
					{
						if (!func_63(iParam0, 17))
						{
							if (func_53(8, &(Local_116.f_50[iParam0]), 0, -1))
							{
								func_52(iParam0, 17);
							}
						}
					}
				}
				else
				{
					func_69(&(Local_116.f_591[iParam0]));
				}
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_116.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						if (Local_749[iVar1].f_3 > 0 || Local_749[iVar1].f_5 > 0)
						{
							iVar8++;
						}
						if (!GAMEPLAY::IS_BIT_SET(Local_749[iVar1], 2))
						{
							bVar0 = false;
						}
					}
					iVar2++;
				}
				if (iVar8 > 0)
				{
					if (func_71(&(Local_116.f_150[iParam0]), 30000, 0) || bVar0)
					{
						func_69(&(Local_116.f_150[iParam0]));
						func_64(iParam0);
						func_66(4, iParam0);
					}
					else if (func_71(&(Local_116.f_150[iParam0]), 18000, 0))
					{
						if (!func_63(iParam0, 19))
						{
							if (func_53(13, &(Local_116.f_50[iParam0]), 0, -1))
							{
								func_52(iParam0, 19);
							}
						}
					}
				}
				else
				{
					func_69(&(Local_116.f_150[iParam0]));
				}
			}
			break;
		
		case 4:
			func_64(iParam0);
			if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 11))
			{
				if (func_48(iParam0))
				{
					GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 11);
				}
			}
			else if (func_47(iParam0))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 11);
				func_66(5, iParam0);
			}
			break;
		
		case 5:
			if (!func_63(iParam0, 20))
			{
				if (func_53(21, &(Local_116.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 20);
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
			{
				if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]);
						bVar9 = true;
					}
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)]);
						bVar9 = true;
					}
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]);
						bVar9 = true;
					}
					if (bVar9)
					{
						return;
					}
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 0))
						{
							Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_44(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
							GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 0);
						}
						else if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 8))
						{
							if (Local_116.f_45[iParam0] != -1)
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317))
								{
									Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_43(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 0)]), Local_116.f_35[iParam0], func_45(), "deck_shuffle_card_a", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 1)]), Local_116.f_35[iParam0], func_45(), "deck_shuffle_card_b", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 2)]), Local_116.f_35[iParam0], func_45(), "deck_shuffle_card_c", 1000f, -1000f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
									GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 8);
								}
							}
						}
						else if (Local_116.f_45[iParam0] != -1)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317))
							{
								Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_42(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
								GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
								GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 8);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 0)]), true, 0);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 1)]), true, 0);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 2)]), true, 0);
								func_66(6, iParam0);
							}
							else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1813854677))
							{
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 0)]), true, 0);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 1)]), true, 0);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 2)]), true, 0);
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 11))
			{
				if (func_48(iParam0))
				{
					GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 11);
				}
			}
			else
			{
				Local_116.f_168[iParam0] = 0;
				func_66(7, iParam0);
			}
			break;
		
		case 7:
			Var11 = { func_76(iParam0) };
			Var11.z = (Var11.z + 0.914f);
			switch (Local_116.f_571[iParam0])
			{
				case 0:
					iVar1 = Local_116.f_117[iParam0 * 4];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1].f_2 == iParam0 && (Local_749[iVar1].f_3 > 0 || Local_749[iVar1].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
							{
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 0, 0)]))
								{
									iVar10 = Local_116.f_168[iParam0];
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 0, 0)]), func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 1, 0)]))
								{
									iVar10 = Local_116.f_168[iParam0] + 1;
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 1, 0)]), func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 2, 0)]))
								{
									iVar10 = Local_116.f_168[iParam0] + 2;
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 2, 0)]), func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 0)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 0)]))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 0)]);
										bVar14 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 0)]);
										bVar14 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 0)]);
										bVar14 = true;
									}
									if (bVar14)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_38(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 0)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p01_card_a", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 0)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p01_card_b", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 0)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p01_card_c", 1000f, -1000f, 13);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
											GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_116.f_410[iVar1] == 0)
												{
													func_37(&(Local_116.f_168[iParam0]), &uVar5);
													Local_116.f_410[iVar1].f_1[0] = uVar5;
													func_37(&(Local_116.f_168[iParam0]), &uVar5);
													Local_116.f_410[iVar1].f_1[1] = uVar5;
													func_37(&(Local_116.f_168[iParam0]), &uVar5);
													Local_116.f_410[iVar1].f_1[2] = uVar5;
													Local_116.f_410[iVar1] = 3;
												}
												GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_116.f_410[iVar1] == 0)
											{
												func_37(&(Local_116.f_168[iParam0]), &uVar5);
												Local_116.f_410[iVar1].f_1[0] = uVar5;
												func_37(&(Local_116.f_168[iParam0]), &uVar5);
												Local_116.f_410[iVar1].f_1[1] = uVar5;
												func_37(&(Local_116.f_168[iParam0]), &uVar5);
												Local_116.f_410[iVar1].f_1[2] = uVar5;
												Local_116.f_410[iVar1] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(1, iParam0);
					}
					break;
				
				case 1:
					iVar1 = Local_116.f_117[iParam0 * 4 + 1];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1].f_2 == iParam0 && (Local_749[iVar1].f_3 > 0 || Local_749[iVar1].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
							{
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 0, 1)]))
								{
									iVar10 = Local_116.f_168[iParam0];
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 0, 1)]), func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 1, 1)]))
								{
									iVar10 = Local_116.f_168[iParam0] + 1;
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 1, 1)]), func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 2, 1)]))
								{
									iVar10 = Local_116.f_168[iParam0] + 2;
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 2, 1)]), func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 1)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 1)]))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 1)]);
										bVar15 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 1)]);
										bVar15 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 1)]);
										bVar15 = true;
									}
									if (bVar15)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_35(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 1)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p02_card_a", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 1)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p02_card_b", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 1)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p02_card_c", 1000f, -1000f, 13);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
											GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_116.f_410[iVar1] == 0)
												{
													func_37(&(Local_116.f_168[iParam0]), &uVar5);
													Local_116.f_410[iVar1].f_1[0] = uVar5;
													func_37(&(Local_116.f_168[iParam0]), &uVar5);
													Local_116.f_410[iVar1].f_1[1] = uVar5;
													func_37(&(Local_116.f_168[iParam0]), &uVar5);
													Local_116.f_410[iVar1].f_1[2] = uVar5;
													Local_116.f_410[iVar1] = 3;
												}
												GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_116.f_410[iVar1] == 0)
											{
												func_37(&(Local_116.f_168[iParam0]), &uVar5);
												Local_116.f_410[iVar1].f_1[0] = uVar5;
												func_37(&(Local_116.f_168[iParam0]), &uVar5);
												Local_116.f_410[iVar1].f_1[1] = uVar5;
												func_37(&(Local_116.f_168[iParam0]), &uVar5);
												Local_116.f_410[iVar1].f_1[2] = uVar5;
												Local_116.f_410[iVar1] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(2, iParam0);
					}
					break;
				
				case 2:
					iVar1 = Local_116.f_117[iParam0 * 4 + 2];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1].f_2 == iParam0 && (Local_749[iVar1].f_3 > 0 || Local_749[iVar1].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
							{
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 0, 2)]))
								{
									iVar10 = Local_116.f_168[iParam0];
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 0, 2)]), func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 1, 2)]))
								{
									iVar10 = Local_116.f_168[iParam0] + 1;
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 1, 2)]), func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 2, 2)]))
								{
									iVar10 = Local_116.f_168[iParam0] + 2;
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 2, 2)]), func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 2)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 2)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 2)]))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 2)]);
										bVar16 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 2)]);
										bVar16 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 2)]);
										bVar16 = true;
									}
									if (bVar16)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_34(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 2)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p03_card_a", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 2)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p03_card_b", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 2)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p03_card_c", 1000f, -1000f, 13);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
											GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_116.f_410[iVar1] == 0)
												{
													func_37(&(Local_116.f_168[iParam0]), &uVar5);
													Local_116.f_410[iVar1].f_1[0] = uVar5;
													func_37(&(Local_116.f_168[iParam0]), &uVar5);
													Local_116.f_410[iVar1].f_1[1] = uVar5;
													func_37(&(Local_116.f_168[iParam0]), &uVar5);
													Local_116.f_410[iVar1].f_1[2] = uVar5;
													Local_116.f_410[iVar1] = 3;
												}
												GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_116.f_410[iVar1] == 0)
											{
												func_37(&(Local_116.f_168[iParam0]), &uVar5);
												Local_116.f_410[iVar1].f_1[0] = uVar5;
												func_37(&(Local_116.f_168[iParam0]), &uVar5);
												Local_116.f_410[iVar1].f_1[1] = uVar5;
												func_37(&(Local_116.f_168[iParam0]), &uVar5);
												Local_116.f_410[iVar1].f_1[2] = uVar5;
												Local_116.f_410[iVar1] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(3, iParam0);
					}
					break;
				
				case 3:
					iVar1 = Local_116.f_117[iParam0 * 4 + 3];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1].f_2 == iParam0 && (Local_749[iVar1].f_3 > 0 || Local_749[iVar1].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
							{
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 0, 3)]))
								{
									iVar10 = Local_116.f_168[iParam0];
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 0, 3)]), func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 1, 3)]))
								{
									iVar10 = Local_116.f_168[iParam0] + 1;
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 1, 3)]), func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[func_41(iParam0, 2, 3)]))
								{
									iVar10 = Local_116.f_168[iParam0] + 2;
									STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5)))
									{
										func_39(&(Local_116.f_68[func_41(iParam0, 2, 3)]), func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
									}
									return;
								}
								if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 3)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 3)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 3)]))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 3)]);
										bVar17 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 3)]);
										bVar17 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 3)]);
										bVar17 = true;
									}
									if (bVar17)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_33(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 3)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p04_card_a", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 3)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p04_card_b", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 3)]), Local_116.f_35[iParam0], func_45(), "deck_deal_p04_card_c", 1000f, -1000f, 13);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
											GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_116.f_410[iVar1] == 0)
												{
													func_37(&(Local_116.f_168[iParam0]), &uVar5);
													Local_116.f_410[iVar1].f_1[0] = uVar5;
													func_37(&(Local_116.f_168[iParam0]), &uVar5);
													Local_116.f_410[iVar1].f_1[1] = uVar5;
													func_37(&(Local_116.f_168[iParam0]), &uVar5);
													Local_116.f_410[iVar1].f_1[2] = uVar5;
													Local_116.f_410[iVar1] = 3;
												}
												GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_116.f_410[iVar1] == 0)
											{
												func_37(&(Local_116.f_168[iParam0]), &uVar5);
												Local_116.f_410[iVar1].f_1[0] = uVar5;
												func_37(&(Local_116.f_168[iParam0]), &uVar5);
												Local_116.f_410[iVar1].f_1[1] = uVar5;
												func_37(&(Local_116.f_168[iParam0]), &uVar5);
												Local_116.f_410[iVar1].f_1[2] = uVar5;
												Local_116.f_410[iVar1] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(4, iParam0);
					}
					break;
				
				case 4:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
					{
						if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_55[func_46(iParam0, 0)]))
						{
							iVar10 = Local_116.f_168[iParam0];
							STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5));
							if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5)))
							{
								func_39(&(Local_116.f_55[func_46(iParam0, 0)]), func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
							}
							return;
						}
						if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_55[func_46(iParam0, 1)]))
						{
							iVar10 = Local_116.f_168[iParam0] + 1;
							STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5));
							if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5)))
							{
								func_39(&(Local_116.f_55[func_46(iParam0, 1)]), func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
							}
							return;
						}
						if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_55[func_46(iParam0, 2)]))
						{
							iVar10 = Local_116.f_168[iParam0] + 2;
							STREAMING::REQUEST_MODEL(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5));
							if (STREAMING::HAS_MODEL_LOADED(func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5)))
							{
								func_39(&(Local_116.f_55[func_46(iParam0, 2)]), func_40(Local_116.f_168[iParam0].f_2[iVar10], Local_1038.f_5), Var11, 1, 1, 1, 1, 1, 1, 0);
							}
							return;
						}
						if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]))
						{
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]);
								bVar18 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)]);
								bVar18 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]);
								bVar18 = true;
							}
							if (bVar18)
							{
								return;
							}
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 0))
								{
									Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_32(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 0)]), Local_116.f_35[iParam0], func_45(), "deck_deal_self_card_a", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 1)]), Local_116.f_35[iParam0], func_45(), "deck_deal_self_card_b", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 2)]), Local_116.f_35[iParam0], func_45(), "deck_deal_self_card_c", 1000f, -1000f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
									GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 0);
								}
								else if (Local_116.f_45[iParam0] != -1)
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317))
									{
										bVar7 = true;
										Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
										if (Local_116.f_389[iParam0] == 0)
										{
											func_37(&(Local_116.f_168[iParam0]), &uVar5);
											Local_116.f_389[iParam0].f_1[0] = uVar5;
											func_37(&(Local_116.f_168[iParam0]), &uVar5);
											Local_116.f_389[iParam0].f_1[1] = uVar5;
											func_37(&(Local_116.f_168[iParam0]), &uVar5);
											Local_116.f_389[iParam0].f_1[2] = uVar5;
											Local_116.f_389[iParam0] = 3;
										}
										GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
									}
								}
								else
								{
									bVar7 = true;
									Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
									if (Local_116.f_389[iParam0] == 0)
									{
										func_37(&(Local_116.f_168[iParam0]), &uVar5);
										Local_116.f_389[iParam0].f_1[0] = uVar5;
										func_37(&(Local_116.f_168[iParam0]), &uVar5);
										Local_116.f_389[iParam0].f_1[1] = uVar5;
										func_37(&(Local_116.f_168[iParam0]), &uVar5);
										Local_116.f_389[iParam0].f_1[2] = uVar5;
										Local_116.f_389[iParam0] = 3;
									}
								}
							}
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(0, iParam0);
						func_66(8, iParam0);
					}
					break;
			}
			break;
		
		case 8:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]) && Local_116.f_45[iParam0] != -1)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317))
					{
						Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
						func_64(iParam0);
						func_66(9, iParam0);
					}
				}
			}
			break;
		
		case 9:
			bVar0 = true;
			if (!func_72(&(Local_116.f_150[iParam0])))
			{
				func_73(&(Local_116.f_150[iParam0]), 0, 0);
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_116.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						if ((!GAMEPLAY::IS_BIT_SET(Local_749[iVar1], 1) && !GAMEPLAY::IS_BIT_SET(Local_749[iVar1], 3)) && (Local_749[iVar1].f_3 > 0 || Local_749[iVar1].f_5 > 0))
						{
							if (!func_63(iParam0, 18))
							{
								if (func_53(14, &(Local_116.f_50[iParam0]), 0, -1))
								{
									func_52(iParam0, 18);
								}
							}
							bVar0 = false;
						}
					}
					iVar2++;
				}
				if (bVar0)
				{
					func_69(&(Local_116.f_150[iParam0]));
					func_66(10, iParam0);
				}
				else if (func_71(&(Local_116.f_150[iParam0]), 15000, 0))
				{
					if (!func_63(iParam0, 19))
					{
						if (func_53(9, &(Local_116.f_50[iParam0]), 0, -1))
						{
							func_52(iParam0, 19);
						}
					}
				}
			}
			break;
		
		case 10:
			switch (Local_116.f_581[iParam0])
			{
				case 0:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
					{
						if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]))
						{
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]);
								bVar19 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)]);
								bVar19 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]);
								bVar19 = true;
							}
							if (bVar19)
							{
								return;
							}
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 0))
								{
									Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_30(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_self_card_a", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_self_card_b", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_self_card_c", 1000f, -1000f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
									GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 0);
								}
								else if (Local_116.f_45[iParam0] != -1)
								{
									if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), 2116425869))
									{
										bVar7 = true;
										Local_116.f_5[iParam0] = 1;
										GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
									}
								}
								else
								{
									bVar7 = true;
									Local_116.f_5[iParam0] = 1;
									GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
								}
							}
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						bVar7 = false;
						func_29(1, iParam0);
					}
					break;
				
				case 1:
					iVar1 = Local_116.f_117[iParam0 * 4];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1].f_2 == iParam0 && (Local_749[iVar1].f_3 > 0 || Local_749[iVar1].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
							{
								if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 0)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 0)])) && (GAMEPLAY::IS_BIT_SET(Local_749[iVar1], 1) || GAMEPLAY::IS_BIT_SET(Local_749[iVar1], 3)))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 0)]);
										bVar20 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 0)]);
										bVar20 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 0)]);
										bVar20 = true;
									}
									if (bVar20)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
											if (GAMEPLAY::IS_BIT_SET(Local_749[iVar1], 4))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_28(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p01_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p01_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p01_card_c", 1000f, -1000f, 13);
											}
											else if (GAMEPLAY::IS_BIT_SET(Local_749[iVar1], 1))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_27(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p01_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p01_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p01_card_c", 1000f, -1000f, 13);
											}
											else if (GAMEPLAY::IS_BIT_SET(Local_749[iVar1], 3))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_26(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p01_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p01_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 0)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p01_card_c", 1000f, -1000f, 13);
											}
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
											GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											}
											else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.5f)
											{
												GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 12);
											}
										}
										else
										{
											bVar7 = true;
											GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 12);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(2, iParam0);
					}
					break;
				
				case 2:
					iVar1 = Local_116.f_117[iParam0 * 4 + 1];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1].f_2 == iParam0 && (Local_749[iVar1].f_3 > 0 || Local_749[iVar1].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
							{
								if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 1)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 1)])) && (GAMEPLAY::IS_BIT_SET(Local_749[iVar1], 1) || GAMEPLAY::IS_BIT_SET(Local_749[iVar1], 3)))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 1)]);
										bVar21 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 1)]);
										bVar21 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 1)]);
										bVar21 = true;
									}
									if (bVar21)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
											if (GAMEPLAY::IS_BIT_SET(Local_749[iVar1], 4))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_20(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p02_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p02_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p02_card_c", 1000f, -1000f, 13);
											}
											else if (GAMEPLAY::IS_BIT_SET(Local_749[iVar1], 1))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_19(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p02_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p02_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p02_card_c", 1000f, -1000f, 13);
											}
											else if (GAMEPLAY::IS_BIT_SET(Local_749[iVar1], 3))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_18(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p02_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p02_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 1)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p02_card_c", 1000f, -1000f, 13);
											}
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
											GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											}
											else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.5f)
											{
												GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 13);
											}
										}
										else
										{
											bVar7 = true;
											GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 13);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(3, iParam0);
					}
					break;
				
				case 3:
					iVar1 = Local_116.f_117[iParam0 * 4 + 2];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1].f_2 == iParam0 && (Local_749[iVar1].f_3 > 0 || Local_749[iVar1].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
							{
								if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 2)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 2)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 2)])) && (GAMEPLAY::IS_BIT_SET(Local_749[iVar1], 1) || GAMEPLAY::IS_BIT_SET(Local_749[iVar1], 3)))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 2)]);
										bVar22 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 2)]);
										bVar22 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 2)]);
										bVar22 = true;
									}
									if (bVar22)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
											if (GAMEPLAY::IS_BIT_SET(Local_749[iVar1], 4))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_17(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p03_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p03_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p03_card_c", 1000f, -1000f, 13);
											}
											else if (GAMEPLAY::IS_BIT_SET(Local_749[iVar1], 1))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_16(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p03_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p03_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p03_card_c", 1000f, -1000f, 13);
											}
											else if (GAMEPLAY::IS_BIT_SET(Local_749[iVar1], 3))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_15(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p03_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p03_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 2)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p03_card_c", 1000f, -1000f, 13);
											}
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
											GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											}
											else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.5f)
											{
												GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 14);
											}
										}
										else
										{
											bVar7 = true;
											GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 14);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(4, iParam0);
					}
					break;
				
				case 4:
					iVar1 = Local_116.f_117[iParam0 * 4 + 3];
					if (iVar1 >= 0)
					{
						if (Local_749[iVar1].f_2 == iParam0 && (Local_749[iVar1].f_3 > 0 || Local_749[iVar1].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
							{
								if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 3)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 3)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 3)])) && (GAMEPLAY::IS_BIT_SET(Local_749[iVar1], 1) || GAMEPLAY::IS_BIT_SET(Local_749[iVar1], 3)))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 3)]);
										bVar23 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 3)]);
										bVar23 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 3)]);
										bVar23 = true;
									}
									if (bVar23)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 0))
										{
											Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
											if (GAMEPLAY::IS_BIT_SET(Local_749[iVar1], 4))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_14(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p04_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p04_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_blind_p04_card_c", 1000f, -1000f, 13);
											}
											else if (GAMEPLAY::IS_BIT_SET(Local_749[iVar1], 1))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_13(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p04_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p04_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_played_p04_card_c", 1000f, -1000f, 13);
											}
											else if (GAMEPLAY::IS_BIT_SET(Local_749[iVar1], 3))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_12(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p04_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p04_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 3)]), Local_116.f_35[iParam0], func_45(), "reveal_folded_p04_card_c", 1000f, -1000f, 13);
											}
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
											GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 0);
										}
										else if (Local_116.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											}
											else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.5f)
											{
												GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 15);
											}
										}
										else
										{
											bVar7 = true;
											GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 15);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(0, iParam0);
						func_66(11, iParam0);
					}
					break;
			}
			break;
		
		case 11:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 0))
					{
						Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_8(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
						GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 0);
					}
					else if (GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 0) && !GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 2))
					{
						if (Local_116.f_45[iParam0] != -1)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317))
							{
								Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_44(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
								GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 9);
								GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 2);
							}
						}
					}
					else if (GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 9))
					{
						if (Local_116.f_45[iParam0] != -1)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317))
							{
								Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_42(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
								GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
								GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 9);
								func_64(iParam0);
								func_66(12, iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 12:
			if (!func_63(iParam0, 21))
			{
				if (func_53(1, &(Local_116.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 21);
				}
			}
			Var25.f_1 = 3;
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 3))
				{
					iVar2 = iParam0 * 4;
					iVar24 = Local_116.f_117[iVar2];
					if (iVar24 != func_411() && iVar24 > -1)
					{
						if (Local_116.f_410[iVar24] > 0 || GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 0))
						{
							if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 0)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 0)]))
							{
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 0)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 0)]);
									bVar30 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 0)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 0)]);
									bVar30 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 0)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 0)]);
									bVar30 = true;
								}
								if (bVar30)
								{
									return;
								}
								if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 0))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_7(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 0)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p01_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 0)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p01_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 0)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p01_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
										GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 0);
									}
								}
								else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
								{
									if (Local_116.f_45[iParam0] != -1)
									{
										if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), 2116425869))
										{
											GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 3);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 0)]), false, 0);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 0)]), false, 0);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 0)]), false, 0);
											Local_116.f_410[iVar24] = { Var25 };
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1406739296))
										{
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 0)]), false, 0);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 0)]), false, 0);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 0)]), false, 0);
										}
									}
									else
									{
										GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
										GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 3);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 0)]), false, 0);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 0)]), false, 0);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 0)]), false, 0);
										Local_116.f_410[iVar24] = { Var25 };
									}
								}
							}
							else
							{
								GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
								GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 3);
							}
						}
						else
						{
							GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
							GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 3);
						}
					}
					else
					{
						GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
						GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 3);
					}
				}
				else if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 4))
				{
					iVar2 = iParam0 * 4 + 1;
					iVar24 = Local_116.f_117[iVar2];
					if (iVar24 != func_411() && iVar24 > -1)
					{
						if (Local_116.f_410[iVar24] > 0 || GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 0))
						{
							if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 1)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 1)]))
							{
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 1)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 1)]);
									bVar31 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 1)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 1)]);
									bVar31 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 1)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 1)]);
									bVar31 = true;
								}
								if (bVar31)
								{
									return;
								}
								if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 0))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_6(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 1)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p02_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 1)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p02_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 1)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p02_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
										GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 0);
									}
								}
								else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
								{
									if (Local_116.f_45[iParam0] != -1)
									{
										if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), 2116425869))
										{
											GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 4);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 1)]), false, 0);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 1)]), false, 0);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 1)]), false, 0);
											Local_116.f_410[iVar24] = { Var25 };
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1406739296))
										{
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 1)]), false, 0);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 1)]), false, 0);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 1)]), false, 0);
										}
									}
									else
									{
										GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
										GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 4);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 1)]), false, 0);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 1)]), false, 0);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 1)]), false, 0);
										Local_116.f_410[iVar24] = { Var25 };
									}
								}
							}
							else
							{
								GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
								GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 4);
							}
						}
						else
						{
							GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
							GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 4);
						}
					}
					else
					{
						GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
						GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 4);
					}
				}
				else if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 5))
				{
					iVar2 = iParam0 * 4 + 2;
					iVar24 = Local_116.f_117[iVar2];
					if (iVar24 != func_411() && iVar24 > -1)
					{
						if (Local_116.f_410[iVar24] > 0 || GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 0))
						{
							if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 2)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 2)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 2)]))
							{
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 2)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 2)]);
									bVar32 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 2)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 2)]);
									bVar32 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 2)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 2)]);
									bVar32 = true;
								}
								if (bVar32)
								{
									return;
								}
								if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 0))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_5(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 2)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p03_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 2)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p03_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 2)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p03_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
										GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 0);
									}
								}
								else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
								{
									if (Local_116.f_45[iParam0] != -1)
									{
										if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), 2116425869))
										{
											GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 5);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 2)]), false, 0);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 2)]), false, 0);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 2)]), false, 0);
											Local_116.f_410[iVar24] = { Var25 };
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1406739296))
										{
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 2)]), false, 0);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 2)]), false, 0);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 2)]), false, 0);
										}
									}
									else
									{
										GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
										GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 5);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 2)]), false, 0);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 2)]), false, 0);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 2)]), false, 0);
										Local_116.f_410[iVar24] = { Var25 };
									}
								}
							}
							else
							{
								GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
								GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 5);
							}
						}
						else
						{
							GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
							GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 5);
						}
					}
					else
					{
						GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
						GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 5);
					}
				}
				else if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 6))
				{
					iVar2 = iParam0 * 4 + 3;
					iVar24 = Local_116.f_117[iVar2];
					if (iVar24 != func_411() && iVar24 > -1)
					{
						if (Local_116.f_410[iVar24] > 0 || GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 0))
						{
							if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 3)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 3)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 3)]))
							{
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 3)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, 3)]);
									bVar33 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 3)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, 3)]);
									bVar33 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 3)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, 3)]);
									bVar33 = true;
								}
								if (bVar33)
								{
									return;
								}
								if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 0))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
									{
										Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_4(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 3)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p04_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 3)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p04_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 3)]), Local_116.f_35[iParam0], func_45(), "cards_collect_p04_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
										GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 0);
									}
								}
								else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
								{
									if (Local_116.f_45[iParam0] != -1)
									{
										if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), 2116425869))
										{
											GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
											GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 6);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 3)]), false, 0);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 3)]), false, 0);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 3)]), false, 0);
											Local_116.f_410[iVar24] = { Var25 };
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1406739296))
										{
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 3)]), false, 0);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 3)]), false, 0);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 3)]), false, 0);
										}
									}
									else
									{
										GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
										GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 6);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 0, 3)]), false, 0);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 1, 3)]), false, 0);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(iParam0, 2, 3)]), false, 0);
										Local_116.f_410[iVar24] = { Var25 };
									}
								}
							}
							else
							{
								GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
								GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 6);
							}
						}
						else
						{
							GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
							GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 6);
						}
					}
					else
					{
						GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
						GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 6);
					}
				}
				else if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 7))
				{
					if (Local_116.f_389[iParam0] > 0 || GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 0))
					{
						if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]))
						{
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 0)]);
								bVar34 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 1)]);
								bVar34 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[func_46(iParam0, 2)]);
								bVar34 = true;
							}
							if (bVar34)
							{
								return;
							}
							if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 0))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
								{
									Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_3(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 0)]), Local_116.f_35[iParam0], func_45(), "cards_collect_self_card_a", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 1)]), Local_116.f_35[iParam0], func_45(), "cards_collect_self_card_b", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 2)]), Local_116.f_35[iParam0], func_45(), "cards_collect_self_card_c", 1000f, -1000f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
									GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 0);
								}
							}
							else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
							{
								if (Local_116.f_45[iParam0] != -1)
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317))
									{
										Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
										GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
										GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 7);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 0)]), false, 0);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 1)]), false, 0);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 2)]), false, 0);
										Local_116.f_389[iParam0] = { Var25 };
									}
									else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1406739296))
									{
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 0)]), false, 0);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 1)]), false, 0);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 2)]), false, 0);
									}
								}
								else
								{
									Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
									GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
									GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 7);
									ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 0)]), false, 0);
									ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 1)]), false, 0);
									ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_116.f_55[func_46(iParam0, 2)]), false, 0);
									Local_116.f_389[iParam0] = { Var25 };
								}
							}
						}
						else
						{
							GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
							GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 7);
						}
					}
					else
					{
						GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 0);
						GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 7);
					}
				}
				else if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], 10))
				{
					if (Local_116.f_45[iParam0] != -1)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317))
						{
							if (Local_116.f_30[iParam0] == 1)
							{
								Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_51(iParam0, -1), 2f, -2f, 13, 16, 1148846080, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
							}
							else
							{
								Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
							}
							GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), 10);
						}
					}
				}
				else
				{
					Local_116.f_5[iParam0] = 0;
					Local_116.f_20[iParam0] = 0;
					Local_116.f_25[iParam0]++;
					func_69(&(Local_116.f_150[iParam0]));
					func_66(0, iParam0);
				}
			}
			break;
	}
}

char* func_3(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_self";
	}
	return "cards_collect_self";
}

char* func_4(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p04";
	}
	return "cards_collect_p04";
}

char* func_5(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p03";
	}
	return "cards_collect_p03";
}

char* func_6(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p02";
	}
	return "cards_collect_p02";
}

char* func_7(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p01";
	}
	return "cards_collect_p01";
}

char* func_8(int iParam0)
{
	bVar0 = false;
	iVar1 = func_9(&(Local_116.f_389[iParam0].f_1), 0, 0);
	iVar3 = 0;
	while (iVar3 < 4)
	{
		iVar2 = Local_116.f_117[(iParam0 * 4 + iVar3)];
		if (iVar2 != func_411())
		{
			iVar4 = func_9(&(Local_116.f_410[iVar2].f_1), 0, 0);
			if (iVar4 > iVar1 && (GAMEPLAY::IS_BIT_SET(Local_749[iVar2], 1) || Local_749[iVar2].f_3 <= 0))
			{
				bVar0 = true;
			}
		}
		iVar3++;
	}
	if (Local_116.f_15[iParam0] >= 7)
	{
		if (iVar1 < 12)
		{
			switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "female_dealer_reaction_impartial_var01";
				
				case 1:
					return "female_dealer_reaction_impartial_var02";
				
				case 2:
					return "female_dealer_reaction_impartial_var03";
				
				default:
			}
		}
		else if (bVar0)
		{
			switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "female_dealer_reaction_good_var01";
				
				case 1:
					return "female_dealer_reaction_good_var02";
				
				case 2:
					return "female_dealer_reaction_good_var03";
				
				default:
			}
		}
		else
		{
			switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "female_dealer_reaction_bad_var01";
				
				case 1:
					return "female_dealer_reaction_bad_var02";
				
				case 2:
					return "female_dealer_reaction_bad_var03";
				}
			
			default:
		}
	}
	else if (iVar1 < 12)
	{
		switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_impartial_var_01";
			
			case 1:
				return "reaction_impartial_var_02";
			
			case 2:
				return "reaction_impartial_var_03";
			
			case 3:
				return "reaction_impartial_var_04";
			
			default:
		}
	}
	else if (bVar0)
	{
		switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3))
		{
			case 0:
				return "reaction_good_var_01";
			
			case 1:
				return "reaction_good_var_02";
			
			case 2:
				return "reaction_good_var_03";
			
			default:
		}
	}
	else
	{
		switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

int func_9(var uParam0, bool bParam1, bool bParam2)
{
	if ((func_11((*uParam0)[0]) != func_11((*uParam0)[1]) && func_11((*uParam0)[0]) != func_11((*uParam0)[2])) && func_11((*uParam0)[1]) != func_11((*uParam0)[2]))
	{
		bVar0 = false;
		iVar1 = ((func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + func_11((*uParam0)[2]));
		if (iVar1 == 19)
		{
			if ((((func_11((*uParam0)[0]) == 14 || func_11((*uParam0)[0]) == 2) || func_11((*uParam0)[0]) == 3) && ((func_11((*uParam0)[1]) == 14 || func_11((*uParam0)[1]) == 2) || func_11((*uParam0)[1]) == 3)) && ((func_11((*uParam0)[2]) == 14 || func_11((*uParam0)[2]) == 2) || func_11((*uParam0)[2]) == 3))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 9)
		{
			if ((((func_11((*uParam0)[0]) == 2 || func_11((*uParam0)[0]) == 3) || func_11((*uParam0)[0]) == 4) && ((func_11((*uParam0)[1]) == 2 || func_11((*uParam0)[1]) == 3) || func_11((*uParam0)[1]) == 4)) && ((func_11((*uParam0)[2]) == 2 || func_11((*uParam0)[2]) == 3) || func_11((*uParam0)[2]) == 4))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 12)
		{
			if ((((func_11((*uParam0)[0]) == 3 || func_11((*uParam0)[0]) == 4) || func_11((*uParam0)[0]) == 5) && ((func_11((*uParam0)[1]) == 3 || func_11((*uParam0)[1]) == 4) || func_11((*uParam0)[1]) == 5)) && ((func_11((*uParam0)[2]) == 3 || func_11((*uParam0)[2]) == 4) || func_11((*uParam0)[2]) == 5))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 15)
		{
			if ((((func_11((*uParam0)[0]) == 4 || func_11((*uParam0)[0]) == 5) || func_11((*uParam0)[0]) == 6) && ((func_11((*uParam0)[1]) == 4 || func_11((*uParam0)[1]) == 5) || func_11((*uParam0)[1]) == 6)) && ((func_11((*uParam0)[2]) == 4 || func_11((*uParam0)[2]) == 5) || func_11((*uParam0)[2]) == 6))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 18)
		{
			if ((((func_11((*uParam0)[0]) == 5 || func_11((*uParam0)[0]) == 6) || func_11((*uParam0)[0]) == 7) && ((func_11((*uParam0)[1]) == 5 || func_11((*uParam0)[1]) == 6) || func_11((*uParam0)[1]) == 7)) && ((func_11((*uParam0)[2]) == 5 || func_11((*uParam0)[2]) == 6) || func_11((*uParam0)[2]) == 7))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 21)
		{
			if ((((func_11((*uParam0)[0]) == 6 || func_11((*uParam0)[0]) == 7) || func_11((*uParam0)[0]) == 8) && ((func_11((*uParam0)[1]) == 6 || func_11((*uParam0)[1]) == 7) || func_11((*uParam0)[1]) == 8)) && ((func_11((*uParam0)[2]) == 6 || func_11((*uParam0)[2]) == 7) || func_11((*uParam0)[2]) == 8))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 24)
		{
			if ((((func_11((*uParam0)[0]) == 7 || func_11((*uParam0)[0]) == 8) || func_11((*uParam0)[0]) == 9) && ((func_11((*uParam0)[1]) == 7 || func_11((*uParam0)[1]) == 8) || func_11((*uParam0)[1]) == 9)) && ((func_11((*uParam0)[2]) == 7 || func_11((*uParam0)[2]) == 8) || func_11((*uParam0)[2]) == 9))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 27)
		{
			if ((((func_11((*uParam0)[0]) == 8 || func_11((*uParam0)[0]) == 9) || func_11((*uParam0)[0]) == 10) && ((func_11((*uParam0)[1]) == 8 || func_11((*uParam0)[1]) == 9) || func_11((*uParam0)[1]) == 10)) && ((func_11((*uParam0)[2]) == 8 || func_11((*uParam0)[2]) == 9) || func_11((*uParam0)[2]) == 10))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 30)
		{
			if ((((func_11((*uParam0)[0]) == 9 || func_11((*uParam0)[0]) == 10) || func_11((*uParam0)[0]) == 11) && ((func_11((*uParam0)[1]) == 9 || func_11((*uParam0)[1]) == 10) || func_11((*uParam0)[1]) == 11)) && ((func_11((*uParam0)[2]) == 9 || func_11((*uParam0)[2]) == 10) || func_11((*uParam0)[2]) == 11))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 33)
		{
			if ((((func_11((*uParam0)[0]) == 10 || func_11((*uParam0)[0]) == 11) || func_11((*uParam0)[0]) == 12) && ((func_11((*uParam0)[1]) == 10 || func_11((*uParam0)[1]) == 11) || func_11((*uParam0)[1]) == 12)) && ((func_11((*uParam0)[2]) == 10 || func_11((*uParam0)[2]) == 11) || func_11((*uParam0)[2]) == 12))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 36)
		{
			if ((((func_11((*uParam0)[0]) == 11 || func_11((*uParam0)[0]) == 12) || func_11((*uParam0)[0]) == 13) && ((func_11((*uParam0)[1]) == 11 || func_11((*uParam0)[1]) == 12) || func_11((*uParam0)[1]) == 13)) && ((func_11((*uParam0)[2]) == 11 || func_11((*uParam0)[2]) == 12) || func_11((*uParam0)[2]) == 13))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 39)
		{
			if ((((func_11((*uParam0)[0]) == 12 || func_11((*uParam0)[0]) == 13) || func_11((*uParam0)[0]) == 14) && ((func_11((*uParam0)[1]) == 12 || func_11((*uParam0)[1]) == 13) || func_11((*uParam0)[1]) == 14)) && ((func_11((*uParam0)[2]) == 12 || func_11((*uParam0)[2]) == 13) || func_11((*uParam0)[2]) == 14))
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			if (iVar1 == 19)
			{
				iVar1 = 6;
			}
			if (func_10((*uParam0)[0]) == func_10((*uParam0)[1]) && func_10((*uParam0)[0]) == func_10((*uParam0)[2]))
			{
				return iVar1 + 500;
			}
			return iVar1 + 300;
		}
	}
	iVar2 = 0;
	if (func_11((*uParam0)[0]) == func_11((*uParam0)[1]) && func_11((*uParam0)[0]) != func_11((*uParam0)[2]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + 100;
		}
		else
		{
			return func_11((*uParam0)[2]);
		}
	}
	else if (func_11((*uParam0)[1]) == func_11((*uParam0)[2]) && func_11((*uParam0)[1]) != func_11((*uParam0)[0]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[1]) + func_11((*uParam0)[2])) + 100;
		}
		else
		{
			return func_11((*uParam0)[0]);
		}
	}
	else if (func_11((*uParam0)[2]) == func_11((*uParam0)[0]) && func_11((*uParam0)[2]) != func_11((*uParam0)[1]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[0]) + func_11((*uParam0)[2])) + 100;
		}
		else
		{
			return func_11((*uParam0)[1]);
		}
	}
	else if (func_11((*uParam0)[0]) == func_11((*uParam0)[1]) && func_11((*uParam0)[0]) == func_11((*uParam0)[2]))
	{
		return ((func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + func_11((*uParam0)[2])) + 400;
	}
	else if (func_10((*uParam0)[0]) == func_10((*uParam0)[1]) && func_10((*uParam0)[0]) == func_10((*uParam0)[2]))
	{
		iVar2 = 200;
	}
	if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]) && func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
		}
		return (func_11((*uParam0)[0]) + iVar2);
	}
	else if (func_11((*uParam0)[1]) > func_11((*uParam0)[0]) && func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
		}
		return (func_11((*uParam0)[1]) + iVar2);
	}
	else if (func_11((*uParam0)[2]) > func_11((*uParam0)[0]) && func_11((*uParam0)[2]) > func_11((*uParam0)[1]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]))
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]))
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
		}
		return (func_11((*uParam0)[2]) + iVar2);
	}
	return 0;
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
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
			return 0;
		
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			return 1;
		
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
			return 2;
		
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
			return 3;
		
		default:
	}
	return 3;
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 15:
		case 28:
		case 41:
			return 2;
		
		case 3:
		case 16:
		case 29:
		case 42:
			return 3;
		
		case 4:
		case 17:
		case 30:
		case 43:
			return 4;
		
		case 5:
		case 18:
		case 31:
		case 44:
			return 5;
		
		case 6:
		case 19:
		case 32:
		case 45:
			return 6;
		
		case 7:
		case 20:
		case 33:
		case 46:
			return 7;
		
		case 8:
		case 21:
		case 34:
		case 47:
			return 8;
		
		case 9:
		case 22:
		case 35:
		case 48:
			return 9;
		
		case 10:
		case 23:
		case 36:
		case 49:
			return 10;
		
		case 11:
		case 24:
		case 37:
		case 50:
			return 11;
		
		case 12:
		case 25:
		case 38:
		case 51:
			return 12;
		
		case 13:
		case 26:
		case 39:
		case 52:
			return 13;
		
		case 1:
		case 14:
		case 27:
		case 40:
			return 14;
		
		default:
	}
	return 0;
}

char* func_12(int iParam0)
{
	if (Local_116.f_15[iParam0] > 7)
	{
		return "female_reveal_folded_p04";
	}
	return "reveal_folded_p04";
}

char* func_13(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p04";
	}
	return "reveal_played_p04";
}

char* func_14(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p04";
	}
	return "reveal_blind_p04";
}

char* func_15(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p03";
	}
	return "reveal_folded_p03";
}

char* func_16(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p03";
	}
	return "reveal_played_p03";
}

char* func_17(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p03";
	}
	return "reveal_blind_p03";
}

char* func_18(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p02";
	}
	return "reveal_folded_p02";
}

char* func_19(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p02";
	}
	return "reveal_played_p02";
}

char* func_20(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p02";
	}
	return "reveal_blind_p02";
}

int func_21(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	if (iParam0 < 0 || iParam0 >= 4)
	{
		return 1;
	}
	if (!func_24(iParam0, iParam1) && !func_22(iParam1))
	{
		return func_53(11, &(Local_116.f_50[iParam0]), 0, -1);
	}
	return 1;
}

int func_22(int iParam0)
{
	if (Local_749[iParam0].f_5 > 0)
	{
		iVar0 = func_9(&(Local_116.f_410[iParam0].f_1), 0, 0);
		if (func_23(iVar0) > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_23(int iParam0)
{
	if (iParam0 > 500)
	{
		return 40;
	}
	else if (iParam0 > 400)
	{
		return 30;
	}
	else if (iParam0 > 300)
	{
		return 6;
	}
	else if (iParam0 > 200)
	{
		return 4;
	}
	else if (iParam0 > 100)
	{
		return 1;
	}
	return 0;
}

int func_24(int iParam0, int iParam1)
{
	if (Local_749[iParam1].f_3 > 0 && GAMEPLAY::IS_BIT_SET(Local_749[iParam1], 1))
	{
		iVar0 = func_9(&(Local_116.f_410[iParam1].f_1), 0, 0);
		iVar1 = func_9(&(Local_116.f_389[iParam0].f_1), 0, 0);
		if (!func_25(iVar1))
		{
			return 1;
		}
		if (iVar0 > iVar1)
		{
			return 1;
		}
		if (iVar0 == iVar1)
		{
			iVar0 = func_9(&(Local_116.f_410[iParam1].f_1), 1, 0);
			iVar1 = func_9(&(Local_116.f_389[iParam0].f_1), 1, 0);
			if (iVar0 > iVar1)
			{
				return 1;
			}
			if (iVar0 == iVar1)
			{
				iVar0 = func_9(&(Local_116.f_410[iParam1].f_1), 0, 1);
				iVar1 = func_9(&(Local_116.f_389[iParam0].f_1), 0, 1);
				if (iVar0 > iVar1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
{
	if (iParam0 >= 12)
	{
		return 1;
	}
	return 0;
}

char* func_26(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p01";
	}
	return "reveal_folded_p01";
}

char* func_27(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p01";
	}
	return "reveal_played_p01";
}

char* func_28(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p01";
	}
	return "reveal_blind_p01";
}

void func_29(int iParam0, int iParam1)
{
	Local_116.f_581[iParam1] = iParam0;
}

char* func_30(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_reveal_self";
	}
	return "reveal_self";
}

char* func_31(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_put_down";
	}
	return "deck_put_down";
}

char* func_32(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_self";
	}
	return "deck_deal_self";
}

char* func_33(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p04";
	}
	return "deck_deal_p04";
}

char* func_34(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p03";
	}
	return "deck_deal_p03";
}

char* func_35(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p02";
	}
	return "deck_deal_p02";
}

void func_36(int iParam0, int iParam1)
{
	Local_116.f_571[iParam1] = iParam0;
}

int func_37(var uParam0, var uParam1)
{
	if (*uParam0 >= uParam0->f_1)
	{
		return 0;
	}
	*uParam1 = uParam0->f_2[*uParam0];
	*uParam0++;
	return 1;
}

char* func_38(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p01";
	}
	return "deck_deal_p01";
}

int func_39(var uParam0, int iParam1, struct<3> Param2, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_REGISTER(NETWORK::NET_TO_OBJ(*uParam0), iParam8);
		if (bParam10)
		{
			NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(NETWORK::NET_TO_OBJ(*uParam0), 1);
		}
		if (bParam11)
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), false, 0);
		}
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_40(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_club_char_a_a");
			
			case 2:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_club_char_02a");
			
			case 3:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_club_char_03a");
			
			case 4:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_club_char_04a");
			
			case 5:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_club_char_05a");
			
			case 6:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_club_char_06a");
			
			case 7:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_club_char_07a");
			
			case 8:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_club_char_08a");
			
			case 9:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_club_char_09a");
			
			case 10:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_club_char_10a");
			
			case 11:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_club_char_j_a");
			
			case 12:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_club_char_q_a");
			
			case 13:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_club_char_k_a");
			
			case 14:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_dia_char_a_a");
			
			case 15:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_dia_char_02a");
			
			case 16:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_dia_char_03a");
			
			case 17:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_dia_char_04a");
			
			case 18:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_dia_char_05a");
			
			case 19:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_dia_char_06a");
			
			case 20:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_dia_char_07a");
			
			case 21:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_dia_char_08a");
			
			case 22:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_dia_char_09a");
			
			case 23:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_dia_char_10a");
			
			case 24:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_dia_char_j_a");
			
			case 25:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_dia_char_q_a");
			
			case 26:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_dia_char_k_a");
			
			case 27:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_hrt_char_a_a");
			
			case 28:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_hrt_char_02a");
			
			case 29:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_hrt_char_03a");
			
			case 30:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_hrt_char_04a");
			
			case 31:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_hrt_char_05a");
			
			case 32:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_hrt_char_06a");
			
			case 33:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_hrt_char_07a");
			
			case 34:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_hrt_char_08a");
			
			case 35:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_hrt_char_09a");
			
			case 36:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_hrt_char_10a");
			
			case 37:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_hrt_char_j_a");
			
			case 38:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_hrt_char_q_a");
			
			case 39:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_hrt_char_k_a");
			
			case 40:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_spd_char_a_a");
			
			case 41:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_spd_char_02a");
			
			case 42:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_spd_char_03a");
			
			case 43:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_spd_char_04a");
			
			case 44:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_spd_char_05a");
			
			case 45:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_spd_char_06a");
			
			case 46:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_spd_char_07a");
			
			case 47:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_spd_char_08a");
			
			case 48:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_spd_char_09a");
			
			case 49:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_spd_char_10a");
			
			case 50:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_spd_char_j_a");
			
			case 51:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_spd_char_q_a");
			
			case 52:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_vw_spd_char_k_a");
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_club_ace");
			
			case 2:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_club_02");
			
			case 3:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_club_03");
			
			case 4:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_club_04");
			
			case 5:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_club_05");
			
			case 6:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_club_06");
			
			case 7:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_club_07");
			
			case 8:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_club_08");
			
			case 9:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_club_09");
			
			case 10:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_club_10");
			
			case 11:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_club_jack");
			
			case 12:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_club_queen");
			
			case 13:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_club_king");
			
			case 14:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_dia_ace");
			
			case 15:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_dia_02");
			
			case 16:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_dia_03");
			
			case 17:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_dia_04");
			
			case 18:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_dia_05");
			
			case 19:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_dia_06");
			
			case 20:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_dia_07");
			
			case 21:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_dia_08");
			
			case 22:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_dia_09");
			
			case 23:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_dia_10");
			
			case 24:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_dia_jack");
			
			case 25:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_dia_queen");
			
			case 26:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_dia_king");
			
			case 27:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_hrt_ace");
			
			case 28:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_hrt_02");
			
			case 29:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_hrt_03");
			
			case 30:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_hrt_04");
			
			case 31:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_hrt_05");
			
			case 32:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_hrt_06");
			
			case 33:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_hrt_07");
			
			case 34:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_hrt_08");
			
			case 35:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_hrt_09");
			
			case 36:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_hrt_10");
			
			case 37:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_hrt_jack");
			
			case 38:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_hrt_queen");
			
			case 39:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_hrt_king");
			
			case 40:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_spd_ace");
			
			case 41:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_spd_02");
			
			case 42:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_spd_03");
			
			case 43:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_spd_04");
			
			case 44:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_spd_05");
			
			case 45:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_spd_06");
			
			case 46:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_spd_07");
			
			case 47:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_spd_08");
			
			case 48:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_spd_09");
			
			case 49:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_spd_10");
			
			case 50:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_spd_jack");
			
			case 51:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_spd_queen");
			
			case 52:
				return GAMEPLAY::GET_HASH_KEY("vw_prop_cas_card_spd_king");
			}
		
		default:
	}
	return 0;
}

int func_41(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0 * 3 * 4 + iParam2 * 3) + iParam1);
}

char* func_42(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_idle";
	}
	return "deck_idle";
}

char* func_43(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_shuffle";
	}
	return "deck_shuffle";
}

char* func_44(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_deck_pick_up";
	}
	return "deck_pick_up";
}

char* func_45()
{
	return "anim_casino_b@amb@casino@games@threecardpoker@dealer";
}

int func_46(int iParam0, int iParam1)
{
	return (iParam0 * 3 + iParam1);
}

int func_47(int iParam0)
{
	Var3 = { func_76(iParam0) };
	Var3.z = (Var3.z + 0.914f);
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar0 = func_46(iParam0, iVar6);
		iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 53);
		iVar1 = func_40(iVar2, Local_1038.f_5);
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_55[iVar0]))
		{
			STREAMING::REQUEST_MODEL(iVar1);
			if (!STREAMING::HAS_MODEL_LOADED(iVar1) || !func_39(&(Local_116.f_55[iVar0]), iVar1, Var3, 1, 1, 1, 1, 1, 1, 1))
			{
				return 0;
			}
		}
		iVar6++;
	}
	return 1;
}

int func_48(int iParam0)
{
	bVar0 = false;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar1 = func_41(iParam0, iVar3, iVar2);
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_68[iVar1]))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[iVar1]))
				{
					func_49(&(Local_116.f_68[iVar1]));
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[iVar1]);
					bVar0 = true;
				}
			}
			iVar3++;
		}
		iVar2++;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		iVar1 = func_46(iParam0, iVar4);
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_116.f_55[iVar1]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_55[iVar1]))
			{
				func_49(&(Local_116.f_55[iVar1]));
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_55[iVar1]);
				bVar0 = true;
			}
		}
		iVar4++;
	}
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

void func_49(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&uVar0);
	}
}

char* func_50(int iParam0)
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 0), 3))
	{
		iVar0 = 0;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 1), 3))
	{
		iVar0 = 1;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 2), 3))
	{
		iVar0 = 2;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), func_78(), func_51(iParam0, 3), 3))
	{
		iVar0 = 3;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != iVar0 && Local_116.f_117[(iParam0 * 4 + iVar2)] != func_411())
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (Local_116.f_15[iParam0] >= 7)
	{
		switch (iVar1)
		{
			case 0:
				return "female_acknowledge_p01";
			
			case 1:
				return "female_acknowledge_p02";
			
			case 2:
				return "female_acknowledge_p03";
			
			case 3:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				return "acknowledge_p01";
			
			case 1:
				return "acknowledge_p02";
			
			case 2:
				return "acknowledge_p03";
			
			case 3:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

char* func_51(int iParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_116.f_117[(iParam0 * 4 + iVar1)] != func_411())
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iParam1 >= 0)
	{
		iVar0 = iParam1;
	}
	if (Local_116.f_15[iParam0] >= 7)
	{
		switch (iVar0)
		{
			case 0:
				return "female_idle_single_p01";
			
			case 1:
				return "female_idle_single_p02";
			
			case 2:
				return "female_idle_single_p03";
			
			case 3:
				return "female_idle_single_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return "idle_single_p01";
			
			case 1:
				return "idle_single_p02";
			
			case 2:
				return "idle_single_p03";
			
			case 3:
				return "idle_single_p04";
			}
		
		default:
	}
	return "";
}

void func_52(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	GAMEPLAY::SET_BIT(&(Local_116.f_20[iParam0]), iParam1);
}

int func_53(int iParam0, var uParam1, int iParam2, int iParam3)
{
	StringCopy(&cVar0, func_55(iParam0, iParam3), 64);
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 0;
	}
	uVar16 = NETWORK::NET_TO_PED(*uParam1);
	if (ENTITY::IS_ENTITY_DEAD(uVar16, 0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uVar16))
	{
		return 0;
	}
	if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(uVar16))
	{
		return 0;
	}
	uVar17 = func_54(7);
	AUDIO::_PLAY_AMBIENT_SPEECH1(uVar16, &cVar0, uVar17, 1);
	return 1;
}

int func_54(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

char* func_55(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 1:
			return "MINIGAME_DEALER_ANOTHER_GO";
		
		case 3:
			return "MINIGAME_DEALER_REJOIN_TABLE";
		
		case 2:
			return func_56(uParam1);
		
		case 4:
			return "MINIGAME_DEALER_LEAVE_GOOD_GAME";
		
		case 5:
			return "MINIGAME_DEALER_LEAVE_BAD_GAME";
		
		case 6:
			return "MINIGAME_DEALER_LEAVE_NEUTRAL_GAME";
		
		case 7:
			return "MINIGAME_DEALER_REFUSE_BETS";
		
		case 9:
			return "MINIGAME_DEALER_COMMENT_SLOW";
		
		case 21:
			return "MINIGAME_DEALER_CLOSED_BETS";
		
		case 8:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		
		case 10:
			return "MINIGAME_DEALER_BUSTS";
		
		case 11:
			return "MINIGAME_DEALER_WINS";
		
		case 12:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 13:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		
		case 14:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 15:
			return "";
		
		case 16:
			return "";
		
		case 17:
			return "";
		
		case 18:
			return "";
		
		case 19:
			return "";
		
		case 20:
			return "";
		
		default:
	}
	return "";
}

char* func_56(var uParam0)
{
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(uParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (!func_62(iVar1, 1, 1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
	if (func_60(iVar2))
	{
		return "MINIGAME_DEALER_GREET_DRUNK";
	}
	if (!func_58(&iVar1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	if (func_57(iVar1))
	{
		return "MINIGAME_DEALER_GREET_FEMALE";
	}
	return "MINIGAME_DEALER_GREET_MALE";
}

int func_57(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == -1667301416)
	{
		return 1;
	}
	return 0;
}

bool func_58(int iParam0)
{
	iVar0 = Local_749[*iParam0].f_2;
	return func_59(iVar0, Local_1038.f_26);
}

int func_59(int iParam0, int iParam1)
{
	if ((iParam0 == 2 || iParam0 == 3) || iParam1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_61(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_61(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42383[iVar0] == -1)
		{
			if (iParam0 == Global_42383[iVar0].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_62(int iParam0, bool bParam1, bool bParam2)
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

bool func_63(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Local_116.f_20[iParam0], iParam1);
}

void func_64(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 16);
	GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 17);
	GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 18);
	GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 19);
	GAMEPLAY::CLEAR_BIT(&(Local_116.f_20[iParam0]), 21);
}

void func_65(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 52;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_1)
		{
			iVar0 = unk_0xF2D49816A804D134(0, uParam0->f_1);
			uVar2 = uParam0->f_2[iVar1];
			uParam0->f_2[iVar1] = uParam0->f_2[iVar0];
			uParam0->f_2[iVar0] = uVar2;
			iVar1++;
		}
		iVar3++;
	}
}

void func_66(int iParam0, int iParam1)
{
	Local_116.f_576[iParam1] = iParam0;
}

void func_67(int iParam0)
{
	Local_116[iParam0] = 1;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0])))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), func_78(), func_77(iParam0), 3))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]))
			{
				Local_116.f_45[iParam0] = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
				if (Local_116.f_45[iParam0] == -1 || (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_116.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), -1424880317)))
				{
					Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_50[iParam0]);
			}
			return;
		}
	}
	if (func_48(iParam0))
	{
		Local_116.f_20[iParam0] = 0;
		Var0.f_1 = 3;
		Local_116.f_389[iParam0] = { Var0 };
		Local_116.f_5[iParam0] = 0;
		func_69(&(Local_116.f_150[iParam0]));
		func_79(1, iParam0);
		func_66(0, iParam0);
		func_36(0, iParam0);
		func_29(0, iParam0);
		Local_116.f_25[iParam0]++;
		Local_116[iParam0] = 0;
	}
}

int func_68(int iParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (bParam1)
		{
			if (Local_116.f_117[(iParam0 * 4 + iVar1)] != func_411() && Local_116.f_410[Local_116.f_117[(iParam0 * 4 + iVar1)]] > 0)
			{
				iVar0++;
			}
			else
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, iVar1)]))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, iVar1)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, iVar1)]);
					}
					else
					{
						func_49(&(Local_116.f_68[func_41(iParam0, 0, iVar1)]));
					}
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, iVar1)]))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, iVar1)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, iVar1)]);
					}
					else
					{
						func_49(&(Local_116.f_68[func_41(iParam0, 1, iVar1)]));
					}
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, iVar1)]))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, iVar1)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, iVar1)]);
					}
					else
					{
						func_49(&(Local_116.f_68[func_41(iParam0, 2, iVar1)]));
					}
				}
			}
		}
		else if (Local_116.f_117[(iParam0 * 4 + iVar1)] != func_411())
		{
			iVar0++;
		}
		else
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, iVar1)]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, iVar1)]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 0, iVar1)]);
				}
				else
				{
					func_49(&(Local_116.f_68[func_41(iParam0, 0, iVar1)]));
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, iVar1)]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, iVar1)]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 1, iVar1)]);
				}
				else
				{
					func_49(&(Local_116.f_68[func_41(iParam0, 1, iVar1)]));
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, iVar1)]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, iVar1)]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(iParam0, 2, iVar1)]);
				}
				else
				{
					func_49(&(Local_116.f_68[func_41(iParam0, 2, iVar1)]));
				}
			}
		}
		iVar1++;
	}
	if (Local_116.f_30[iParam0] != iVar0)
	{
		Local_116.f_30[iParam0] = iVar0;
	}
	if (iVar0 > 0)
	{
		return 1;
	}
	return 0;
}

void func_69(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_70(int iParam0, int iParam1)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_acknowledge_p01";
			
			case 1:
				return "female_acknowledge_p02";
			
			case 2:
				return "female_acknowledge_p03";
			
			case 3:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "acknowledge_p01";
			
			case 1:
				return "acknowledge_p02";
			
			case 2:
				return "acknowledge_p03";
			
			case 3:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

int func_71(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_73(uParam0, bParam2, 0);
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

bool func_72(var uParam0)
{
	return uParam0->f_1;
}

void func_73(var uParam0, bool bParam1, bool bParam2)
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

char* func_74(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "female_idle_var_01";
			
			case 1:
				return "female_idle_var_02";
			
			case 2:
				return "female_idle_var_03";
			
			case 3:
				return "female_idle_var_04";
			
			case 4:
				return "female_idle_var_05";
			
			default:
		}
	}
	else
	{
		switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "idle_var_01";
			
			case 1:
				return "idle_var_02";
			
			case 2:
				return "idle_var_03";
			
			case 3:
				return "idle_var_04";
			
			case 4:
				return "idle_var_05";
			}
		
		default:
	}
	return "";
}

float func_75(int iParam0)
{
	if (Local_1038.f_26 == 1)
	{
		return -122f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return -135f;
			
			case 1:
				return 45f;
			
			case 2:
				return -45f;
			
			case 3:
				return -45f;
			}
		
		default:
	}
	return 0f;
}

Vector3 func_76(int iParam0)
{
	if (Local_1038.f_26 == 1)
	{
		return 967.33f, 32.0191f, 115.1742f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1143.338f, 264.2453f, -52.8409f;
			
			case 1:
				return 1146.329f, 261.2543f, -52.8409f;
			
			case 2:
				return 1133.74f, 266.6947f, -52.0409f;
			
			case 3:
				return 1148.74f, 251.6947f, -52.0409f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_77(int iParam0)
{
	if (Local_116.f_15[iParam0] >= 7)
	{
		return "female_idle";
	}
	return "idle";
}

char* func_78()
{
	return "anim_casino_b@amb@casino@games@shared@dealer@";
}

void func_79(int iParam0, int iParam1)
{
	Local_116.f_586[iParam1] = iParam0;
}

void func_80(var uParam0)
{
	iVar4 = 52;
	iVar5 = 0;
	while (iVar5 < 52)
	{
		iVar3 = unk_0xF2D49816A804D134(0, iVar4);
		iVar6 = 0;
		while (iVar6 < 52)
		{
			iVar8 = (iVar6 / 32);
			iVar9 = (iVar6 % 32);
			if (iVar7 == iVar3 && !GAMEPLAY::IS_BIT_SET(uVar0[iVar8], iVar9))
			{
				GAMEPLAY::SET_BIT(&(uVar0[iVar8]), iVar9);
				uParam0->f_2[iVar5] = iVar6 + 1;
			}
			else
			{
				if (!GAMEPLAY::IS_BIT_SET(uVar0[iVar8], iVar9))
				{
					iVar7++;
				}
				iVar6++;
			}
		}
		iVar7 = 0;
		iVar4 = (iVar4 - 1);
		iVar5++;
	}
	uParam0->f_1 = 52;
}

void func_81()
{
	if (!func_85(PLAYER::PLAYER_ID()))
	{
		iVar0 = iLocal_1971;
		if (Global_2514396 != iVar0 && (Global_2514396 != -1 || func_417(PLAYER::PLAYER_ID())))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iVar0]))
			{
				func_82(iVar0);
			}
		}
		else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iVar0]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_50[iVar0]))
			{
				func_49(&(Local_116.f_50[iVar0]));
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_50[iVar0]);
			}
		}
	}
	iLocal_1971++;
	if (iLocal_1971 >= Local_1038.f_26)
	{
		iLocal_1971 = 0;
	}
}

void func_82(int iParam0)
{
	iVar0 = 337826907;
	if (Local_116.f_15[iParam0] >= 7)
	{
		iVar0 = -1131233579;
	}
	STREAMING::REQUEST_MODEL(iVar0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return;
	}
	STREAMING::REQUEST_ANIM_DICT(func_78());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_78()))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]))
	{
		if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
		{
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::_0xAAA553E7DD28A457(1);
			}
			iVar1 = PED::CREATE_PED(26, iVar0, func_76(iParam0), func_75(iParam0), 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, 0);
			PED::SET_PED_AS_ENEMY(iVar1, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, 1);
			PED::SET_PED_RESET_FLAG(iVar1, 249, 1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 185, 1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 108, 1);
			NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(iVar1, 1);
			unk_0x352E2B5CF420BF3B(iVar1, 1);
			PED::SET_PED_CAN_EVASIVE_DIVE(iVar1, 0);
			PED::_0x2F3C3D9F50681DE4(iVar1, 1);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iVar1, 0);
			PED::SET_PED_CONFIG_FLAG(iVar1, 208, 1);
			PED::SET_PED_CAN_RAGDOLL(iVar1, 0);
			func_84(Local_116.f_15[iParam0], &iVar1);
			func_83(Local_116.f_15[iParam0], &iVar1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, func_76(iParam0), 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iVar1, func_75(iParam0));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				Local_116.f_50[iParam0] = NETWORK::PED_TO_NET(iVar1);
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iParam0]))
				{
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_116.f_50[iParam0], 0);
					Local_116.f_10[iParam0] = 1;
					Local_116.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_116.f_50[iParam0]), Local_116.f_35[iParam0], func_78(), func_77(iParam0), 1000f, -2f, 13, 16, 1148846080, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_116.f_35[iParam0]);
					STREAMING::REMOVE_ANIM_DICT(func_78());
				}
			}
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::_0xAAA553E7DD28A457(0);
			}
		}
	}
}

void func_83(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			AUDIO::_0x7CDC8C3B89F661B3(*iParam1, GAMEPLAY::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 1:
			AUDIO::_0x7CDC8C3B89F661B3(*iParam1, GAMEPLAY::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 2:
			AUDIO::_0x7CDC8C3B89F661B3(*iParam1, GAMEPLAY::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_02"));
			break;
		
		case 3:
			AUDIO::_0x7CDC8C3B89F661B3(*iParam1, GAMEPLAY::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 4:
			AUDIO::_0x7CDC8C3B89F661B3(*iParam1, GAMEPLAY::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 5:
			AUDIO::_0x7CDC8C3B89F661B3(*iParam1, GAMEPLAY::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_02"));
			break;
		
		case 6:
			AUDIO::_0x7CDC8C3B89F661B3(*iParam1, GAMEPLAY::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 7:
			AUDIO::_0x7CDC8C3B89F661B3(*iParam1, GAMEPLAY::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 8:
			AUDIO::_0x7CDC8C3B89F661B3(*iParam1, GAMEPLAY::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 9:
			AUDIO::_0x7CDC8C3B89F661B3(*iParam1, GAMEPLAY::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 10:
			AUDIO::_0x7CDC8C3B89F661B3(*iParam1, GAMEPLAY::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 11:
			AUDIO::_0x7CDC8C3B89F661B3(*iParam1, GAMEPLAY::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_01"));
			break;
		
		case 12:
			AUDIO::_0x7CDC8C3B89F661B3(*iParam1, GAMEPLAY::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_02"));
			break;
		
		case 13:
			AUDIO::_0x7CDC8C3B89F661B3(*iParam1, GAMEPLAY::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_01"));
			break;
	}
}

void func_84(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 1:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 2:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 3:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 4:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 5:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 6:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 7:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 8:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 9:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 2, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 10:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 3, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 11:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(*iParam1, 1, 0, 0, 0);
			break;
		
		case 12:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 13:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(*iParam1, 1, 0, 0, 0);
			break;
	}
}

int func_85(int iParam0)
{
	if (iParam0 != func_411() && func_62(iParam0, 1, 1))
	{
		if (func_86(iParam0) && !func_416(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_86(int iParam0)
{
	if (iParam0 != func_411() && func_62(iParam0, 1, 1))
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310, 3);
	}
	return 0;
}

void func_87()
{
	Var0.f_1 = 3;
	bVar5 = false;
	iVar6 = iLocal_1970;
	if (Local_749[iVar6].f_2 == -1)
	{
		Local_116.f_410[iVar6] = { Var0 };
	}
	if (Local_749[iVar6].f_7 == 0)
	{
		if (Local_116.f_600[iVar6] != 0)
		{
			Local_116.f_600[iVar6] = 0;
		}
	}
	if (!bVar5)
	{
		if (func_88(iVar6))
		{
			bVar5 = true;
		}
	}
	iLocal_1970++;
	if (iLocal_1970 >= 32)
	{
		iLocal_1970 = 0;
	}
}

int func_88(int iParam0)
{
	if (!func_408())
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (!func_62(iVar1, 1, 1))
	{
		return 0;
	}
	iVar2 = Local_749[iParam0].f_7.f_1;
	if (iVar2 < 0 || iVar2 >= 4)
	{
		return 0;
	}
	if (Local_749[iParam0].f_7 == 1)
	{
		if (func_53(2, &(Local_116.f_50[iVar2]), 0, iParam0))
		{
			func_89(iParam0, 1);
		}
		return 1;
	}
	if (Local_749[iParam0].f_7 == 2)
	{
		if (func_53(3, &(Local_116.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 2);
		}
		return 1;
	}
	if (Local_749[iParam0].f_7 == 4)
	{
		if (func_53(4, &(Local_116.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 4);
		}
		return 1;
	}
	if (Local_749[iParam0].f_7 == 5)
	{
		if (func_53(5, &(Local_116.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 5);
		}
		return 1;
	}
	if (Local_749[iParam0].f_7 == 6)
	{
		if (func_53(6, &(Local_116.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 6);
		}
		return 1;
	}
	if (Local_749[iParam0].f_7 == 7)
	{
		if (func_53(7, &(Local_116.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 7);
		}
		return 1;
	}
	return 0;
}

void func_89(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	GAMEPLAY::SET_BIT(&(Local_116.f_600[iParam0]), iVar0);
}

void func_90()
{
	iVar0 = iLocal_1969;
	if (Local_116.f_117[iVar0] != func_411())
	{
		iVar1 = Local_116.f_117[iVar0];
		if (((!func_62(Local_116.f_117[iVar0], 1, 1) || Local_749[iVar1].f_1 == -1) || Local_749[iVar1].f_1 != iVar0) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_116.f_117[iVar0]))
		{
			Local_116.f_117[iVar0] = func_411();
			if (Local_116.f_600[iVar0] != 0)
			{
				Local_116.f_600[iVar0] = 0;
			}
		}
	}
	if (func_62(iVar0, 1, 1) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		if (Local_749[iVar0].f_1 > -1 && Local_749[iVar0].f_1 < 32)
		{
			if (Local_116.f_117[Local_749[iVar0].f_1] == func_411())
			{
				if (func_62(PLAYER::INT_TO_PLAYERINDEX(iVar0), 1, 1))
				{
					Local_116.f_117[Local_749[iVar0].f_1] = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				}
			}
		}
	}
	iLocal_1969++;
	if (iLocal_1969 >= 32)
	{
		iLocal_1969 = 0;
	}
}

void func_91()
{
	if (!Local_1038.f_5)
	{
		if (func_417(PLAYER::PLAYER_ID()) && func_412() != func_411())
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2425662[func_412()].f_310.f_4, 4))
			{
				Local_1038.f_5 = 1;
				func_407();
				iLocal_1964 = 1;
			}
		}
	}
	else if (iLocal_1964)
	{
		if (func_406())
		{
			iLocal_1964 = 0;
		}
	}
	func_401();
	Local_1038.f_19 = func_398();
	func_388();
	func_384();
	func_381();
	if (Local_1038.f_798 > 2)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(2, 210, 1);
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 210);
		CONTROLS::DISABLE_CONTROL_ACTION(2, 26, 1);
		if (CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 210))
		{
		}
		if (func_380(Local_1038.f_18) >= 0 && GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_76(func_380(Local_1038.f_18)), 1) > 5f)
		{
			func_375(0);
		}
	}
	if (Local_1038.f_798 > 5)
	{
		UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
		UI::_0x25F87B30C382FCA7();
		UI::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
		func_373(1);
		func_372(1, 0);
	}
	if (Local_1038.f_798 > 6)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(2, 0, 1);
		if (CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 0))
		{
			if (CAM::_0xEE778F8C7E1142E2(0) == 0)
			{
				CAM::_0x2A2173E46DAECD12(0, 4);
			}
			else if (CAM::_0xEE778F8C7E1142E2(0) == 4)
			{
				CAM::_0x2A2173E46DAECD12(0, 0);
			}
		}
		unk_0x9F97DA93681F87EA();
	}
	if (Local_1038.f_798 > 7)
	{
		func_368(&(Local_749[PLAYER::PLAYER_ID()]));
	}
	if (func_367())
	{
		bLocal_1966 = true;
	}
	else if (bLocal_1966)
	{
		func_366(&uLocal_1967, 0, 0);
		bLocal_1966 = false;
	}
	else if (func_72(&uLocal_1967) && func_71(&uLocal_1967, 500, 0))
	{
		func_69(&uLocal_1967);
	}
	switch (Local_1038.f_798)
	{
		case 0:
			if (func_365())
			{
				Local_1038.f_796 = "idle_cardgames";
				Local_1038.f_22 = 0;
				Local_749[PLAYER::PLAYER_ID()] = 0;
				Local_749[PLAYER::PLAYER_ID()].f_6 = 0;
				Local_749[PLAYER::PLAYER_ID()].f_1 = -1;
				Local_749[PLAYER::PLAYER_ID()].f_2 = -1;
				func_364(PLAYER::PLAYER_ID());
				func_363(1);
			}
			break;
		
		case 1:
			switch (func_380(Local_1038.f_18))
			{
				case 0:
				case 1:
					bVar0 = false;
					Local_1038.f_16 = 5000;
					Local_1038.f_17 = 10;
					Local_1038.f_27 = 500;
					Local_1038.f_28 = 10;
					break;
				
				case 2:
				case 3:
					bVar0 = true;
					Local_1038.f_16 = 50000;
					Local_1038.f_17 = 1000;
					Local_1038.f_27 = 5000;
					Local_1038.f_28 = 1000;
					break;
			}
			if (Local_1038.f_26 == 1)
			{
				bVar0 = true;
				Local_1038.f_16 = 50000;
				Local_1038.f_17 = 1000;
				Local_1038.f_27 = 5000;
				Local_1038.f_28 = 1000;
			}
			if (((((((((((((((((((((((!Global_262145.f_26165 && !(Global_262145.f_26167 && !bVar0)) && !(Global_262145.f_26166 && bVar0)) && ((func_362(1581559923) || func_362(272405600)) || func_417(PLAYER::PLAYER_ID()))) && func_360(PLAYER::PLAYER_PED_ID(), func_361(Local_1038.f_18), 1.5f)) && func_355(PLAYER::PLAYER_PED_ID(), func_359(Local_1038.f_18), 40f)) && Local_116.f_410[PLAYER::PLAYER_ID()] == 0) && !GAMEPLAY::IS_BIT_SET(Global_1676377.f_4, 2)) && !Global_2405072.f_2672) && Global_2514396 != func_380(Local_1038.f_18)) && (Global_2514396 != -1 || func_417(PLAYER::PLAYER_ID()))) && func_354()) && !func_348()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && func_345(PLAYER::PLAYER_PED_ID()) <= 9) && !Global_2405072.f_2672) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !func_344()) && !func_343()) && !func_341()) && !Global_2460715.f_12) && Global_1676371 != 31) && !func_340())
			{
				func_363(2);
			}
			else
			{
				Local_1038.f_18++;
				if (Local_1038.f_18 >= Local_1038.f_26 * 4)
				{
					Local_1038.f_18 = 0;
				}
			}
			break;
		
		case 2:
			func_339();
			func_364(PLAYER::PLAYER_ID());
			if (((((((((((((((((((((func_362(1581559923) || func_362(272405600)) || func_417(PLAYER::PLAYER_ID())) && func_360(PLAYER::PLAYER_PED_ID(), func_361(Local_1038.f_18), 1.5f)) && func_355(PLAYER::PLAYER_PED_ID(), func_359(Local_1038.f_18), 40f)) && Local_116.f_410[PLAYER::PLAYER_ID()] == 0) && Global_2514396 != func_380(Local_1038.f_18)) && (Global_2514396 != -1 || func_417(PLAYER::PLAYER_ID()))) && func_354()) && !func_348()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && func_345(PLAYER::PLAYER_PED_ID()) <= 9) && !Global_2405072.f_2672) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !func_344()) && !func_343()) && !func_341()) && !Global_2460715.f_12) && Global_1676371 != 31) && !Local_116[func_380(Local_1038.f_18)]) && !func_340())
			{
				if ((((((func_62(PLAYER::PLAYER_ID(), 1, 1) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !func_338()) && !func_337()) && !UI::IS_WARNING_MESSAGE_ACTIVE()) && !bLocal_1966) && !func_72(&uLocal_1967))
				{
					if (func_336(2, &uVar1))
					{
						if (!func_335("TCP_NA"))
						{
							func_334("TCP_NA");
						}
					}
					else if (Local_116.f_117[Local_1038.f_18] != func_411())
					{
						if (!func_335("TCP_USED"))
						{
							func_334("TCP_USED");
						}
					}
					else if (func_333())
					{
						if (func_329() == 2)
						{
							if (!func_335("CAS_MG_CTIME"))
							{
								func_334("CAS_MG_CTIME");
							}
						}
						else if (!func_335("CAS_MG_CBAN"))
						{
							func_334("CAS_MG_CBAN");
						}
					}
					else if ((!func_328(PLAYER::PLAYER_ID()) && (func_380(Local_1038.f_18) == 2 || func_380(Local_1038.f_18) == 3)) && !(func_327(1) && func_328(func_326())))
					{
						if (!func_335("CAS_MG_SUITE2"))
						{
							func_334("CAS_MG_SUITE2");
						}
					}
					else if (!func_325() && !(func_327(1) && func_324(func_326())))
					{
						if (!func_322("CAS_MG_MEMB2", func_323(1)))
						{
							func_321("CAS_MG_MEMB2", func_323(1));
						}
						else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 52))
						{
							UI::CLEAR_HELP(1);
							func_320();
							func_363(3);
						}
					}
					else if (Local_1038.f_19 <= 0)
					{
						if (func_417(PLAYER::PLAYER_ID()))
						{
							if (!func_335("CAS_MG_NOCHIPS7"))
							{
								func_334("CAS_MG_NOCHIPS7");
							}
						}
						else if (!func_335("CAS_MG_NOCHIPS3"))
						{
							func_334("CAS_MG_NOCHIPS3");
						}
					}
					else if (Local_1038.f_19 < Local_1038.f_28)
					{
						if (func_417(PLAYER::PLAYER_ID()))
						{
							if (!func_335("CAS_MG_LOWCHIPS7"))
							{
								func_334("CAS_MG_LOWCHIPS7");
							}
						}
						else if (!func_335("CAS_MG_LOWCHIPS3"))
						{
							func_334("CAS_MG_LOWCHIPS3");
						}
					}
					else if (Local_1038.f_31 == -1)
					{
						if (func_319())
						{
							UI::CLEAR_HELP(1);
						}
						if (((!func_328(PLAYER::PLAYER_ID()) && (func_380(Local_1038.f_18) == 2 || func_380(Local_1038.f_18) == 3)) && !(func_327(1) && func_328(func_326()))) || (!func_325() && (func_327(1) && func_324(func_326()))))
						{
							if (func_316(func_326()) == 1)
							{
								Local_1038.f_25 = 1;
								func_315(&(Local_1038.f_31), 4, "TCP_PLAY_A", 0, 0, 0, 0);
							}
							else if (func_314(func_326()))
							{
								Local_1038.f_25 = 2;
								func_315(&(Local_1038.f_31), 4, "TCP_PLAY_B", 0, 0, 0, 0);
							}
							else
							{
								Local_1038.f_25 = 3;
								func_315(&(Local_1038.f_31), 4, "TCP_PLAY_C", 0, 0, 0, 0);
							}
						}
						else
						{
							Local_1038.f_25 = 0;
							func_315(&(Local_1038.f_31), 4, "TCP_PLAY", 0, 0, 0, 0);
						}
					}
					else if (func_313(Local_1038.f_31, 1))
					{
						func_311(&(Local_1038.f_31));
						Local_1038.f_31 = -1;
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, 1);
						func_310();
						func_300(PLAYER::PLAYER_ID(), 0, 1048832, 0);
						if (CAM::_0xEE778F8C7E1142E2(0) == 4 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
						func_363(4);
					}
				}
				else
				{
					if (func_319())
					{
						UI::CLEAR_HELP(1);
					}
					if (Local_1038.f_31 != -1)
					{
						func_311(&(Local_1038.f_31));
						Local_1038.f_31 = -1;
					}
					Local_1038.f_18 = 0;
					func_363(1);
				}
			}
			else
			{
				if (func_319())
				{
					UI::CLEAR_HELP(1);
				}
				if (Local_1038.f_31 != -1)
				{
					func_311(&(Local_1038.f_31));
					Local_1038.f_31 = -1;
				}
				Local_1038.f_18 = 0;
				func_363(1);
			}
			break;
		
		case 3:
			if (!func_299())
			{
				func_363(2);
			}
			break;
		
		case 4:
			func_373(1);
			sVar2 = "CasinoUI_Cards_Three";
			if ((func_380(Local_1038.f_18) == 2 || func_380(Local_1038.f_18) == 3) || func_417(PLAYER::PLAYER_ID()))
			{
				sVar2 = "CasinoUI_Cards_Three_High";
			}
			if (GAMEPLAY::IS_BIT_SET(Global_1676377.f_5, 22))
			{
				func_366(&(Local_1038.f_792), 0, 0);
				func_298(Local_1038.f_18);
				if (CAM::_0xEE778F8C7E1142E2(0) == 4)
				{
					func_300(PLAYER::PLAYER_ID(), 0, 0, 0);
				}
				else
				{
					func_300(PLAYER::PLAYER_ID(), 0, 256, 0);
				}
				func_363(5);
			}
			else
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar2, 0);
				if (func_296(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar2))
				{
					if (!iLocal_1965)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 1);
						func_295(0, 0);
						func_293(1, sVar2, sVar2);
						func_292("TCP_TITLE");
						func_291(-1, 1, 1);
						func_290("TCP_DIS", 0, 0);
						func_289("TCP_DIS1");
						func_289("TCP_DIS2");
						func_289("TCP_DIS3");
						func_288(202, "TCP_EXIT", -1);
						func_288(201, "TCP_CONT", -1);
						iLocal_1965 = 1;
					}
					func_261(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
					func_258(1, -1);
					GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar2);
					iLocal_1965 = 0;
					func_249();
				}
				else if (CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 201))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
					func_258(1, -1);
					GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar2);
					iLocal_1965 = 0;
					GAMEPLAY::SET_BIT(&(Global_1676377.f_5), 22);
					func_366(&(Local_1038.f_792), 0, 0);
					func_298(Local_1038.f_18);
					if (CAM::_0xEE778F8C7E1142E2(0) == 4)
					{
						func_300(PLAYER::PLAYER_ID(), 0, 0, 0);
					}
					else
					{
						func_300(PLAYER::PLAYER_ID(), 0, 256, 0);
					}
					func_363(5);
				}
			}
			break;
		
		case 5:
			if ((((func_248(Local_1038.f_18) && !func_337()) && !func_367()) && func_354()) && !func_348())
			{
				func_69(&(Local_1038.f_792));
				GAMEPLAY::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_310.f_4), 3);
				func_239(2);
				func_363(6);
			}
			else
			{
				if (func_337())
				{
					func_249();
				}
				if (func_367())
				{
					func_249();
				}
				if (func_238(Local_1038.f_18))
				{
					func_249();
				}
				if (func_237())
				{
					func_249();
				}
				if (!func_354())
				{
					func_249();
				}
				if (func_348())
				{
					func_249();
				}
			}
			break;
		
		case 6:
			if (!func_337() && !func_367())
			{
				if (func_236())
				{
					if (CAM::_0xEE778F8C7E1142E2(0) == 1 || CAM::_0xEE778F8C7E1142E2(0) == 2)
					{
						CAM::_0x2A2173E46DAECD12(0, 0);
					}
					fVar3 = func_234(PLAYER::PLAYER_PED_ID(), func_235(Local_1038.f_18, 0), 1);
					fVar4 = func_234(PLAYER::PLAYER_PED_ID(), func_235(Local_1038.f_18, 1), 1);
					fVar5 = func_234(PLAYER::PLAYER_PED_ID(), func_235(Local_1038.f_18, 2), 1);
					if (fVar4 < fVar5 && fVar4 < fVar3)
					{
						Local_1038.f_21 = 1;
					}
					else if (fVar5 < fVar4 && fVar5 < fVar3)
					{
						Local_1038.f_21 = 2;
					}
					else
					{
						Local_1038.f_21 = 0;
					}
					AI::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), func_235(Local_1038.f_18, Local_1038.f_21), 1f, 5000, func_233(Local_1038.f_18, Local_1038.f_21), 0.01f);
					func_363(7);
				}
			}
			else
			{
				func_249();
			}
			break;
		
		case 7:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 0)
			{
				Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_1038.f_18), func_232(Local_1038.f_18), 2, 1, 0, 1065353216, 0, 1065353216);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_231(), func_230(Local_1038.f_21), 2f, -2f, 13, 16, 2f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
				Local_749[PLAYER::PLAYER_ID()].f_7.f_1 = Local_749[PLAYER::PLAYER_ID()].f_2;
				func_363(8);
			}
			break;
		
		case 8:
			unk_0x79C0E43EB9B944E2(-1938411241);
			Local_1038.f_30 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(Local_1038.f_24);
			if (func_229())
			{
				func_228(&(Local_749[PLAYER::PLAYER_ID()]), 2);
			}
			else
			{
				func_228(&(Local_749[PLAYER::PLAYER_ID()]), 1);
			}
			if (Local_1038.f_30 != -1)
			{
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1038.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 2038294702)) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1424880317))
				{
					func_300(PLAYER::PLAYER_ID(), 0, 256, 0);
					Local_1924 = { Var6 };
					if (func_417(PLAYER::PLAYER_ID()))
					{
						Local_1924 = 1695074466;
					}
					else if (Local_749[PLAYER::PLAYER_ID()].f_2 == 2 || Local_749[PLAYER::PLAYER_ID()].f_2 == 3)
					{
						Local_1924 = 1952785842;
					}
					else
					{
						Local_1924 = -1125105727;
					}
					Local_1924.f_1 = Local_749[PLAYER::PLAYER_ID()].f_2;
					Local_1924.f_6 = 1;
					if (func_328(PLAYER::PLAYER_ID()))
					{
						Local_1924.f_15 = 1983458449;
					}
					else if (func_325())
					{
						Local_1924.f_15 = 1334658487;
					}
					else if (func_327(1) && (func_328(func_326()) || func_226(PLAYER::PLAYER_ID())))
					{
						Local_1924.f_15 = 980726932;
					}
					else
					{
						Local_1924.f_15 = 939907746;
					}
					func_366(&uLocal_1899, 0, 0);
					func_225();
					Local_1038.f_32 = func_398();
					func_363(9);
				}
			}
			break;
		
		case 9:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
			{
				AUDIO::START_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
			}
			unk_0x79C0E43EB9B944E2(-1938411241);
			func_95();
			break;
		
		case 10:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
			{
				AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
			}
			if (AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1785177548) == 1)
			{
				func_228(&(Local_749[PLAYER::PLAYER_ID()]), func_94());
				Var22 = { CONTROLS::GET_CONTROL_NORMAL(2, 218), CONTROLS::GET_CONTROL_NORMAL(2, 219), 0f };
				Local_1038.f_30 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(Local_1038.f_24);
				if (Local_1038.f_7)
				{
					if (Local_1038.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1038.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1424880317)))
					{
						Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_1038.f_18), func_232(Local_1038.f_18), 2, 0, 0, 1065353216, 0, 1065353216);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_231(), func_93(Local_1038.f_18), 2f, -2f, 13, 16, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
						Local_1038.f_7 = 0;
					}
				}
				else if (Local_1038.f_30 != -1 && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1038.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1424880317)) || (SYSTEM::VMAG(Var22) >= 0.24f && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 2116425869))))
				{
					AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_300(PLAYER::PLAYER_ID(), 1, 0, 0);
					STREAMING::REMOVE_ANIM_DICT(func_45());
					STREAMING::REMOVE_ANIM_DICT(func_78());
					STREAMING::REMOVE_ANIM_DICT(func_92());
					STREAMING::REMOVE_ANIM_DICT(func_231());
					func_407();
					GAMEPLAY::CLEAR_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_310.f_4), 3);
					func_339();
					func_363(2);
				}
			}
			else
			{
				AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_300(PLAYER::PLAYER_ID(), 1, 0, 0);
				STREAMING::REMOVE_ANIM_DICT(func_45());
				STREAMING::REMOVE_ANIM_DICT(func_78());
				STREAMING::REMOVE_ANIM_DICT(func_92());
				STREAMING::REMOVE_ANIM_DICT(func_231());
				GAMEPLAY::CLEAR_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_310.f_4), 3);
				func_339();
				func_363(2);
			}
			break;
	}
}

char* func_92()
{
	return "anim_casino_b@amb@casino@games@threecardpoker@player";
}

char* func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
		case 5:
		case 8:
		case 9:
		case 12:
		case 13:
			return "sit_exit_left";
		
		default:
	}
	return "sit_exit_left";
}

int func_94()
{
	iVar0 = func_398();
	iVar1 = (iVar0 - Local_1038.f_32);
	if (iVar1 < 0)
	{
		return 5;
	}
	if (iVar1 > 0)
	{
		return 4;
	}
	return 6;
}

void func_95()
{
	if (Local_749[PLAYER::PLAYER_ID()].f_2 >= 0)
	{
		if (func_224(Local_749[PLAYER::PLAYER_ID()].f_2))
		{
			func_223("TCP_ERROR", -1);
			return;
		}
	}
	func_210();
	if (func_408())
	{
		Local_1924.f_10 = 1;
	}
	Local_1924.f_11 = func_208();
	if ((((((((CONTROLS::IS_CONTROL_JUST_PRESSED(2, 202) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) && !func_337()) && !UI::IS_WARNING_MESSAGE_ACTIVE()) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_92(), "cards_pickup", 3)) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 0)) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 3)) && !Local_1038.f_1) && !func_207())
	{
		Local_1901.f_4 = 847129329;
		Local_1924.f_2 = 847129329;
		Local_1901.f_22 = 847129329;
		Local_1901.f_7 = func_398();
		Local_1901.f_17 = func_206(&uLocal_1897, 0, 0);
		Local_1901.f_18 = func_408();
		Local_1901.f_19 = func_208();
		if (Local_749[PLAYER::PLAYER_ID()].f_2 > -1)
		{
			Local_1901.f_9 = Local_116.f_30[Local_749[PLAYER::PLAYER_ID()].f_2];
		}
		if ((Local_1038.f_797 > 1 || Local_749[PLAYER::PLAYER_ID()].f_3 != 0) || Local_749[PLAYER::PLAYER_ID()].f_5 != 0)
		{
			if (Global_262145.f_26036)
			{
				unk_0xF740FB339D471C35(&Local_1901);
			}
		}
		if (Local_749[PLAYER::PLAYER_ID()].f_3 > 0 && !Local_1038.f_2)
		{
			func_205(Local_749[PLAYER::PLAYER_ID()].f_3);
		}
		if (Local_749[PLAYER::PLAYER_ID()].f_5 > 0 && !Local_1038.f_6)
		{
			func_205(Local_749[PLAYER::PLAYER_ID()].f_5);
		}
		if (Local_749[PLAYER::PLAYER_ID()].f_4 > 0 && !Local_1038.f_3)
		{
			func_205(Local_749[PLAYER::PLAYER_ID()].f_4);
		}
		func_375(1);
		UI::CLEAR_HELP(1);
		return;
	}
	if (((Global_2514396 == Local_749[PLAYER::PLAYER_ID()].f_2 || Global_2460715.f_12) || Global_1676371 == 31) || !func_203())
	{
		Local_1901.f_7 = func_398();
		Local_1901.f_17 = func_206(&uLocal_1897, 0, 0);
		Local_1901.f_18 = func_408();
		Local_1901.f_19 = func_208();
		if (Local_749[PLAYER::PLAYER_ID()].f_2 > -1)
		{
			Local_1901.f_9 = Local_116.f_30[Local_749[PLAYER::PLAYER_ID()].f_2];
		}
		if (Global_262145.f_26036)
		{
			unk_0xF740FB339D471C35(&Local_1901);
		}
		func_375(1);
		UI::CLEAR_HELP(1);
		return;
	}
	if (Local_1038.f_24 > -1)
	{
		Local_1038.f_30 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(Local_1038.f_24);
		if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_92(), "cards_idle", 3)) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 0)) && !Local_1038.f_1)
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_231(), "idle_cardgames", 3))
			{
				if (Local_1038.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1038.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1424880317)))
				{
					Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_749[PLAYER::PLAYER_ID()].f_1), func_232(Local_749[PLAYER::PLAYER_ID()].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_231(), "idle_cardgames", 2f, -2f, 13, 16, 1148846080, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
					Local_1038.f_796 = "idle_cardgames";
				}
			}
			else if (Local_1038.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1038.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1424880317)))
			{
				Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_749[PLAYER::PLAYER_ID()].f_1), func_232(Local_749[PLAYER::PLAYER_ID()].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_231(), func_202(0), 2f, -2f, 13, 16, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
			}
		}
	}
	if (Local_749[PLAYER::PLAYER_ID()].f_2 >= 0)
	{
		func_200(&(Local_1038.f_90));
		if (!GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 0) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 3))
		{
			func_199(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 202, 1), "TCP_EXIT", &(Local_1038.f_90), 0);
			if (((((Local_1038.f_797 == 3 && Local_749[PLAYER::PLAYER_ID()].f_3 > 0) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 2)) && !GAMEPLAY::IS_BIT_SET(Local_749[PLAYER::PLAYER_ID()], 1)) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 1)) && !GAMEPLAY::IS_BIT_SET(Local_749[PLAYER::PLAYER_ID()], 3))
			{
				func_199(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 201, 1), "TCP_PLAY_HAND", &(Local_1038.f_90), 0);
				func_199(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 203, 1), "TCP_FOLD_HAND", &(Local_1038.f_90), 0);
			}
			if (Local_116.f_576[Local_749[PLAYER::PLAYER_ID()].f_2] == 3 && ((Local_1038.f_19 >= Local_1038.f_28 || Local_749[PLAYER::PLAYER_ID()].f_3 != 0) || Local_749[PLAYER::PLAYER_ID()].f_5 != 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_749[PLAYER::PLAYER_ID()], 0) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 0))
				{
					if (Local_1038.f_19 >= Local_1038.f_17 * 2)
					{
						func_199(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 201, 1), "TCP_PLACE", &(Local_1038.f_90), 0);
					}
					func_199(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 203, 1), "TCP_DECLINEA", &(Local_1038.f_90), 0);
					if (Local_1038.f_19 >= Local_1038.f_17 * 2)
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 8))
						{
							func_199(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 204, 1), "TCP_BET_MAX", &(Local_1038.f_90), 0);
						}
						func_198(2, 7, "TCP_BET_NUM", &(Local_1038.f_90));
					}
				}
				else if ((!GAMEPLAY::IS_BIT_SET(Local_749[PLAYER::PLAYER_ID()], 2) && Local_1038.f_19 >= (Local_749[PLAYER::PLAYER_ID()].f_3 + Local_1038.f_28)) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 0))
				{
					func_199(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 201, 1), "TCP_PLACE_PP", &(Local_1038.f_90), 0);
					func_199(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 203, 1), "TCP_DECLINE", &(Local_1038.f_90), 0);
					if (!GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 8))
					{
						func_199(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 204, 1), "TCP_BET_MAX", &(Local_1038.f_90), 0);
					}
					func_198(2, 7, "TCP_BET_NUM", &(Local_1038.f_90));
				}
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 0))
		{
			func_199(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 202, 1), "IB_BACK", &(Local_1038.f_90), 0);
			func_198(2, 8, "IB_TAB", &(Local_1038.f_90));
		}
		else if (GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 3))
		{
			func_199(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 202, 1), "IB_BACK", &(Local_1038.f_90), 0);
		}
		if (Local_116.f_576[Local_749[PLAYER::PLAYER_ID()].f_2] < 12)
		{
			if (Local_116.f_389[Local_749[PLAYER::PLAYER_ID()].f_2] > 0)
			{
				func_199(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 208, 1), "TCP_DLR", &(Local_1038.f_90), 0);
			}
			if (Local_116.f_410[PLAYER::PLAYER_ID()] > 0)
			{
				if (GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 4) || GAMEPLAY::IS_BIT_SET(Local_116.f_20[Local_749[PLAYER::PLAYER_ID()].f_2], func_197(Local_749[PLAYER::PLAYER_ID()].f_1)))
				{
					func_199(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 207, 1), "TCP_CARDS", &(Local_1038.f_90), 0);
				}
				else if (((((Local_749[PLAYER::PLAYER_ID()].f_3 > 0 && Local_1038.f_797 == 3) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 2)) && !GAMEPLAY::IS_BIT_SET(Local_749[PLAYER::PLAYER_ID()], 1)) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 1)) && !GAMEPLAY::IS_BIT_SET(Local_749[PLAYER::PLAYER_ID()], 3))
				{
					func_199(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 207, 1), "TCP_PICK_UP", &(Local_1038.f_90), 0);
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 0) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 3))
		{
			func_199(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 210, 1), "TCP_RULESb", &(Local_1038.f_90), 0);
			func_199(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 209, 1), "TCP_HANDSb", &(Local_1038.f_90), 0);
		}
		Var1 = { func_196() };
		func_195(&(Local_1038.f_90), 1f);
		func_187(&(Local_1038.f_89), &Var1, &(Local_1038.f_90), func_194(&(Local_1038.f_90)));
		func_186(1);
	}
	func_181();
	func_162();
	switch (Local_1038.f_797)
	{
		case 0:
			if (Local_116.f_576[Local_749[PLAYER::PLAYER_ID()].f_2] == 3)
			{
				if ((Local_1038.f_15 > (Local_1038.f_19 / 2) || Local_1038.f_15 < Local_1038.f_17) || Local_1038.f_15 > Local_1038.f_16)
				{
					Local_1038.f_15 = Local_1038.f_17;
				}
				if ((((Local_1038.f_23 > Local_1038.f_19 || Local_1038.f_23 > Local_1038.f_27) || Local_1038.f_23 < Local_1038.f_28) || Local_1038.f_23 > (Local_1038.f_19 - Local_749[PLAYER::PLAYER_ID()].f_3)) || Local_1038.f_23 > Local_1038.f_19)
				{
					Local_1038.f_23 = Local_1038.f_28;
				}
				Var10.f_1 = 3;
				Local_1038.f_854 = { Var10 };
				Local_1901 = { Var15 };
				Local_1901.f_10 = 1;
				Local_1901 = -941885798;
				Local_1901.f_11 = func_328(PLAYER::PLAYER_ID());
				if (func_328(PLAYER::PLAYER_ID()))
				{
					Local_1901.f_20 = 1983458449;
				}
				else if (func_325())
				{
					Local_1901.f_20 = 1334658487;
				}
				else if (func_327(1) && (func_328(func_326()) || func_226(PLAYER::PLAYER_ID())))
				{
					Local_1901.f_20 = 980726932;
				}
				else
				{
					Local_1901.f_20 = 939907746;
				}
				if (func_417(PLAYER::PLAYER_ID()))
				{
					Local_1901.f_1 = 1695074466;
				}
				else if (Local_749[PLAYER::PLAYER_ID()].f_2 == 2 || Local_749[PLAYER::PLAYER_ID()].f_2 == 3)
				{
					Local_1901.f_1 = 1952785842;
				}
				else
				{
					Local_1901.f_1 = -1125105727;
				}
				func_366(&uLocal_1897, 0, 0);
				Local_1901.f_3 = Local_116.f_25[Local_749[PLAYER::PLAYER_ID()].f_2];
				Local_1901.f_2 = Local_749[PLAYER::PLAYER_ID()].f_2;
				func_161(1);
			}
			break;
		
		case 1:
			if ((!func_325() && !(func_327(1) && func_324(func_326()))) || ((!func_328(PLAYER::PLAYER_ID()) && (func_380(Local_1038.f_18) == 2 || func_380(Local_1038.f_18) == 3)) && !(func_327(1) && func_328(func_326()))))
			{
				if (Local_749[PLAYER::PLAYER_ID()].f_2 > -1)
				{
					Local_1901.f_9 = Local_116.f_30[Local_749[PLAYER::PLAYER_ID()].f_2];
				}
				Local_1924.f_2 = 939907746;
				Local_1901.f_4 = 939907746;
				Local_1901.f_7 = func_398();
				Local_1901.f_17 = func_206(&uLocal_1897, 0, 0);
				Local_1901.f_18 = func_408();
				Local_1901.f_19 = func_208();
				if (Global_262145.f_26036)
				{
					unk_0xF740FB339D471C35(&Local_1901);
				}
				func_375(1);
				UI::CLEAR_HELP(1);
				if (Local_1038.f_25 == 1)
				{
					func_223("IT_MEMBOc", -1);
				}
				else if (Local_1038.f_25 == 2)
				{
					func_223("IT_MEMBOa", -1);
				}
				else if (Local_1038.f_25 == 3)
				{
					func_223("IT_MEMBOb", -1);
				}
				return;
			}
			if ((((Local_1038.f_19 < Local_1038.f_28 && Local_749[PLAYER::PLAYER_ID()].f_3 == 0) && Local_749[PLAYER::PLAYER_ID()].f_5 == 0) && Local_749[PLAYER::PLAYER_ID()].f_4 == 0) && !Local_1038.f_1)
			{
				Local_1901.f_4 = -1275559872;
				Local_1924.f_2 = -1275559872;
				Local_1901.f_7 = func_398();
				Local_1901.f_17 = func_206(&uLocal_1897, 0, 0);
				Local_1901.f_18 = func_408();
				Local_1901.f_19 = func_208();
				if (Local_749[PLAYER::PLAYER_ID()].f_2 > -1)
				{
					Local_1901.f_9 = Local_116.f_30[Local_749[PLAYER::PLAYER_ID()].f_2];
				}
				if (Global_262145.f_26036)
				{
					unk_0xF740FB339D471C35(&Local_1901);
				}
				func_375(1);
				UI::CLEAR_HELP(1);
				if (func_417(PLAYER::PLAYER_ID()))
				{
					if (Local_1038.f_19 <= 0)
					{
						func_223("CAS_MG_NOCHIPS7", -1);
					}
					else
					{
						func_223("CAS_MG_LOWCHIPS7", -1);
					}
				}
				else if (Local_1038.f_19 <= 0)
				{
					func_223("CAS_MG_NOCHIPS3", -1);
				}
				else
				{
					func_223("CAS_MG_LOWCHIPS3", -1);
				}
				return;
			}
			if (func_333())
			{
				switch (func_329())
				{
					case 0:
						Local_1901.f_4 = 1982714739;
						break;
					
					case 1:
						Local_1901.f_4 = -633175758;
						break;
					
					case 2:
						Local_1901.f_4 = -1625999354;
						break;
				}
				switch (func_329())
				{
					case 0:
						Local_1924.f_2 = 1982714739;
						break;
					
					case 1:
						Local_1924.f_2 = -633175758;
						break;
					
					case 2:
						Local_1924.f_2 = -1625999354;
						break;
				}
				Local_1901.f_7 = func_398();
				Local_1901.f_17 = func_206(&uLocal_1897, 0, 0);
				Local_1901.f_18 = func_408();
				Local_1901.f_19 = func_208();
				if (Local_749[PLAYER::PLAYER_ID()].f_2 > -1)
				{
					Local_1901.f_9 = Local_116.f_30[Local_749[PLAYER::PLAYER_ID()].f_2];
				}
				if (Global_262145.f_26036)
				{
					unk_0xF740FB339D471C35(&Local_1901);
				}
				func_375(1);
				UI::CLEAR_HELP(1);
				if (func_329() == 2)
				{
					func_223("CAS_MG_CTIME", -1);
				}
				else
				{
					func_223("CAS_MG_CBAN", -1);
				}
				return;
			}
			if (((!GAMEPLAY::IS_BIT_SET(Local_749[PLAYER::PLAYER_ID()], 0) && !GAMEPLAY::IS_BIT_SET(Local_749[PLAYER::PLAYER_ID()], 2)) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 0)) && (!func_354() || func_348()))
			{
				Local_1901.f_7 = func_398();
				Local_1901.f_17 = func_206(&uLocal_1897, 0, 0);
				Local_1901.f_18 = func_408();
				Local_1901.f_19 = func_208();
				if (Local_749[PLAYER::PLAYER_ID()].f_2 > -1)
				{
					Local_1901.f_9 = Local_116.f_30[Local_749[PLAYER::PLAYER_ID()].f_2];
				}
				if (Global_262145.f_26036)
				{
					unk_0xF740FB339D471C35(&Local_1901);
				}
				func_375(1);
				UI::CLEAR_HELP(1);
				return;
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_749[PLAYER::PLAYER_ID()], 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 0))
				{
					if ((((((!GAMEPLAY::IS_BIT_SET(Local_1038.f_29, 1) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) && !CONTROLS::IS_CONTROL_JUST_PRESSED(2, 204)) && !func_337()) && !UI::IS_WARNING_MESSAGE_ACTIVE()) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 0)) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 3))
					{
						bVar39 = CONTROLS::IS_CONTROL_PRESSED(2, 188);
						bVar40 = CONTROLS::IS_CONTROL_PRESSED(2, 187);
						if (bVar40 || ((((((bVar39 && !CONTROLS::IS_CONTROL_JUST_PRESSED(2, 204)) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) && !func_337()) && !UI::IS_WARNING_MESSAGE_ACTIVE()) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 0)) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 3)))
						{
							func_73(&(Local_1038.f_790), 0, 0);
							GAMEPLAY::SET_BIT(&(Local_1038.f_29), 1);
						}
					}
					else if (func_71(&(Local_1038.f_790), 100, 0))
					{
						func_69(&(Local_1038.f_790));
						GAMEPLAY::CLEAR_BIT(&(Local_1038.f_29), 1);
					}
					if ((((((((CONTROLS::IS_CONTROL_JUST_PRESSED(2, 204) && !bVar40) && !bVar39) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) && !func_337()) && !UI::IS_WARNING_MESSAGE_ACTIVE()) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 0)) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 3)) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 8))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", 1);
						bVar38 = true;
					}
					if (bVar38)
					{
						while (bVar38)
						{
							if (Local_1038.f_15 >= 10000)
							{
								iVar41 = 5000;
							}
							else if (Local_1038.f_15 >= 5000)
							{
								iVar41 = 1000;
							}
							else if (Local_1038.f_15 >= 500)
							{
								iVar41 = 500;
							}
							else if (Local_1038.f_15 >= 100)
							{
								iVar41 = 50;
							}
							else
							{
								iVar41 = 10;
							}
							if (Local_1038.f_15 > (Local_1038.f_19 / 2))
							{
								Local_1038.f_15 = (Local_1038.f_15 - iVar41);
							}
							if (Local_1038.f_15 < Local_1038.f_17)
							{
								Local_1038.f_15 = Local_1038.f_17;
							}
							if (Local_1038.f_15 > Local_1038.f_16)
							{
								Local_1038.f_15 = Local_1038.f_16;
							}
							Local_1038.f_15 = (Local_1038.f_15 + iVar41);
							if (Local_1038.f_15 > (Local_1038.f_19 / 2))
							{
								bVar38 = false;
								Local_1038.f_15 = (Local_1038.f_15 - iVar41);
							}
							if (Local_1038.f_15 < Local_1038.f_17)
							{
								Local_1038.f_15 = Local_1038.f_17;
							}
							if (Local_1038.f_15 > Local_1038.f_16)
							{
								bVar38 = false;
								Local_1038.f_15 = Local_1038.f_16;
							}
						}
					}
					else
					{
						if (Local_1038.f_15 >= 10000)
						{
							iVar41 = 5000;
						}
						else if (Local_1038.f_15 >= 5000)
						{
							iVar41 = 1000;
						}
						else if (Local_1038.f_15 >= 500)
						{
							iVar41 = 500;
						}
						else if (Local_1038.f_15 >= 100)
						{
							iVar41 = 50;
						}
						else
						{
							iVar41 = 10;
						}
						if (Local_1038.f_15 > (Local_1038.f_19 / 2))
						{
							Local_1038.f_15 = (Local_1038.f_15 - iVar41);
						}
						if (Local_1038.f_15 < Local_1038.f_17)
						{
							Local_1038.f_15 = Local_1038.f_17;
						}
						if (Local_1038.f_15 > Local_1038.f_16)
						{
							Local_1038.f_15 = Local_1038.f_16;
						}
						iVar42 = Local_1038.f_15;
						if (bVar39)
						{
							Local_1038.f_15 = (Local_1038.f_15 + iVar41);
							if (Local_1038.f_15 > (Local_1038.f_19 / 2))
							{
								Local_1038.f_15 = (Local_1038.f_15 - iVar41);
							}
							if (Local_1038.f_15 < Local_1038.f_17)
							{
								Local_1038.f_15 = Local_1038.f_17;
							}
							if (Local_1038.f_15 > Local_1038.f_16)
							{
								Local_1038.f_15 = Local_1038.f_16;
							}
							if (Local_1038.f_15 == iVar42)
							{
								if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 188) || !GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 10))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 1);
									GAMEPLAY::SET_BIT(&(Local_1038.f_22), 10);
								}
							}
							else
							{
								GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 10);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", 1);
							}
						}
						if (bVar40)
						{
							if (Local_1038.f_15 <= 100)
							{
								iVar41 = 10;
							}
							else if (Local_1038.f_15 <= 500)
							{
								iVar41 = 50;
							}
							else if (Local_1038.f_15 <= 5000)
							{
								iVar41 = 500;
							}
							else if (Local_1038.f_15 <= 10000)
							{
								iVar41 = 1000;
							}
							else
							{
								iVar41 = 5000;
							}
							Local_1038.f_15 = (Local_1038.f_15 - iVar41);
							if (Local_1038.f_15 < Local_1038.f_17)
							{
								Local_1038.f_15 = Local_1038.f_17;
							}
							if (Local_1038.f_15 == iVar42)
							{
								if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 187) || !GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 10))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 1);
									GAMEPLAY::SET_BIT(&(Local_1038.f_22), 10);
								}
							}
							else
							{
								GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 10);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_DOWN", "dlc_vw_table_games_frontend_sounds", 1);
							}
						}
					}
					if ((Local_1038.f_15 == Local_1038.f_16 || (Local_1038.f_15 + iVar41) > Local_1038.f_16) || (Local_1038.f_15 + iVar41) > (Local_1038.f_19 / 2))
					{
						GAMEPLAY::SET_BIT(&(Local_1038.f_22), 8);
					}
					else
					{
						GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 8);
					}
					GAMEPLAY::SET_BIT(&(Local_1038.f_29), 0);
					iVar0 = (30 - (func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0) / 1000));
					if (iVar0 > 0 || !func_72(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2])))
					{
						if ((((!NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && !func_337()) && !UI::IS_WARNING_MESSAGE_ACTIVE()) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 0)) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 3))
						{
							if (((CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) && !CONTROLS::IS_CONTROL_PRESSED(2, 203)) && Local_1038.f_15 >= Local_1038.f_17) && Local_1038.f_19 >= Local_1038.f_17 * 2)
							{
								GAMEPLAY::SET_BIT(&(Local_1038.f_22), 0);
								Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_749[PLAYER::PLAYER_ID()].f_1), func_232(Local_749[PLAYER::PLAYER_ID()].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
								if (func_160(Local_1038.f_15))
								{
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "bet_ante_large", 2f, -2f, 13, 16, 1148846080, 0);
								}
								else
								{
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "bet_ante", 2f, -2f, 13, 16, 1148846080, 0);
								}
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
							}
							else if ((CONTROLS::IS_CONTROL_JUST_PRESSED(2, 203) && !CONTROLS::IS_CONTROL_PRESSED(2, 201)) || Local_1038.f_19 < Local_1038.f_28)
							{
								Local_1038.f_19 = func_398();
								if ((((Local_1038.f_23 > Local_1038.f_19 || Local_1038.f_23 > Local_1038.f_27) || Local_1038.f_23 < Local_1038.f_28) || Local_1038.f_23 > (Local_1038.f_19 - Local_749[PLAYER::PLAYER_ID()].f_3)) || Local_1038.f_23 > Local_1038.f_19)
								{
									Local_1038.f_23 = Local_1038.f_28;
								}
								GAMEPLAY::SET_BIT(&(Local_749[PLAYER::PLAYER_ID()]), 0);
							}
						}
						if (func_72(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2])) && (30000 - func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0)) >= 0)
						{
							if (func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0) <= 24000)
							{
								func_159((30000 - func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								func_159((30000 - func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (Local_1038.f_19 < Local_1038.f_17 * 2)
						{
							if (((!func_335("TCP_LOW") && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
							{
								func_158("TCP_LOW");
							}
						}
						else if (((!func_335("TCP_PLACE_ANTE") && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
						{
							func_158("TCP_PLACE_ANTE");
						}
					}
				}
				else
				{
					if (((!func_335("TCP_PLACE_ANTE") && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
					{
						func_158("TCP_PLACE_ANTE");
					}
					if (func_72(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2])) && (30000 - func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0)) >= 0)
					{
						if (func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0) <= 24000)
						{
							func_159((30000 - func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_159((30000 - func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
					if (Local_1038.f_30 != -1 && !GAMEPLAY::IS_BIT_SET(Local_749[PLAYER::PLAYER_ID()], 0))
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1038.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1424880317)) && Local_749[PLAYER::PLAYER_ID()].f_3 > 0)
						{
							GAMEPLAY::SET_BIT(&(Local_749[PLAYER::PLAYER_ID()]), 0);
							GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 0);
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1503712844) && Local_749[PLAYER::PLAYER_ID()].f_3 <= 0)
						{
							Local_1038.f_1 = 1;
						}
						if (Local_1038.f_1)
						{
							if (func_155(Local_1038.f_15, &(Local_1038.f_14), 2, Local_1038))
							{
								if (Local_1038.f_14 == 3)
								{
									Local_1038.f_1 = 0;
									GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 0);
									Local_1038.f_14 = 0;
								}
								else
								{
									Local_749[PLAYER::PLAYER_ID()].f_3 = Local_1038.f_15;
									if (Local_1038.f_15 >= 10000)
									{
										iVar43 = 5000;
									}
									else if (Local_1038.f_15 >= 5000)
									{
										iVar43 = 1000;
									}
									else if (Local_1038.f_15 >= 500)
									{
										iVar43 = 500;
									}
									else if (Local_1038.f_15 >= 100)
									{
										iVar43 = 50;
									}
									else
									{
										iVar43 = 10;
									}
									if ((Local_1038.f_15 == Local_1038.f_16 || (Local_1038.f_15 + iVar43) > Local_1038.f_16) || (Local_1038.f_15 + iVar43) > (Local_1038.f_19 / 2))
									{
										Local_1901.f_5 = 1;
									}
									Local_1901.f_6 = (Local_1901.f_6 - Local_1038.f_15);
									Local_1924.f_3 = (Local_1924.f_3 - Local_1038.f_15);
									Local_1924.f_7 = (Local_1924.f_7 + Local_1038.f_15);
									Local_1901.f_12 = (Local_1901.f_12 + Local_1038.f_15);
									Local_1038.f_19 = func_398();
									if ((((Local_1038.f_23 > Local_1038.f_19 || Local_1038.f_23 > Local_1038.f_27) || Local_1038.f_23 < Local_1038.f_28) || Local_1038.f_23 > (Local_1038.f_19 - Local_749[PLAYER::PLAYER_ID()].f_3)) || Local_1038.f_23 > Local_1038.f_19)
									{
										Local_1038.f_23 = Local_1038.f_28;
									}
									Local_1038.f_1 = 0;
								}
							}
						}
					}
				}
				func_151(Local_1038.f_15, "TCP_BET2", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
			}
			else if (!GAMEPLAY::IS_BIT_SET(Local_749[PLAYER::PLAYER_ID()], 2))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 0))
				{
					if ((((((!GAMEPLAY::IS_BIT_SET(Local_1038.f_29, 1) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) && !func_337()) && !UI::IS_WARNING_MESSAGE_ACTIVE()) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 0)) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 3)) && !CONTROLS::IS_CONTROL_JUST_PRESSED(2, 204))
					{
						bVar44 = CONTROLS::IS_CONTROL_PRESSED(2, 188);
						bVar45 = CONTROLS::IS_CONTROL_PRESSED(2, 187);
						if (bVar45 || ((((((bVar44 && !CONTROLS::IS_CONTROL_JUST_PRESSED(2, 204)) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) && !func_337()) && !UI::IS_WARNING_MESSAGE_ACTIVE()) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 0)) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 3)))
						{
							func_73(&(Local_1038.f_790), 0, 0);
							GAMEPLAY::SET_BIT(&(Local_1038.f_29), 1);
						}
					}
					else if (func_71(&(Local_1038.f_790), 100, 0))
					{
						func_69(&(Local_1038.f_790));
						GAMEPLAY::CLEAR_BIT(&(Local_1038.f_29), 1);
					}
					if ((((((((CONTROLS::IS_CONTROL_JUST_PRESSED(2, 204) && !bVar45) && !bVar44) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) && !func_337()) && !UI::IS_WARNING_MESSAGE_ACTIVE()) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 0)) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 3)) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 8))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", 1);
						bVar38 = true;
					}
					if (bVar38)
					{
						while (bVar38)
						{
							if (Local_1038.f_23 >= 10000)
							{
								iVar46 = 5000;
							}
							else if (Local_1038.f_23 >= 5000)
							{
								iVar46 = 1000;
							}
							else if (Local_1038.f_23 >= 500)
							{
								iVar46 = 500;
							}
							else if (Local_1038.f_23 >= 100)
							{
								iVar46 = 50;
							}
							else
							{
								iVar46 = 10;
							}
							if (Local_1038.f_23 > Local_1038.f_19)
							{
								Local_1038.f_23 = (Local_1038.f_23 - iVar46);
							}
							if (Local_1038.f_23 > Local_1038.f_27)
							{
								Local_1038.f_23 = Local_1038.f_27;
							}
							if (Local_1038.f_23 < Local_1038.f_28)
							{
								Local_1038.f_23 = Local_1038.f_28;
							}
							if (Local_1038.f_23 > (Local_1038.f_19 - Local_749[PLAYER::PLAYER_ID()].f_3))
							{
								Local_1038.f_23 = (Local_1038.f_23 - iVar46);
							}
							Local_1038.f_23 = (Local_1038.f_23 + iVar46);
							if (Local_1038.f_23 > Local_1038.f_19)
							{
								bVar38 = false;
								Local_1038.f_23 = (Local_1038.f_23 - iVar46);
							}
							if (Local_1038.f_23 > Local_1038.f_27)
							{
								bVar38 = false;
								Local_1038.f_23 = Local_1038.f_27;
							}
							if (Local_1038.f_23 < Local_1038.f_28)
							{
								Local_1038.f_23 = Local_1038.f_28;
							}
							if (Local_1038.f_23 > (Local_1038.f_19 - Local_749[PLAYER::PLAYER_ID()].f_3))
							{
								bVar38 = false;
								Local_1038.f_23 = (Local_1038.f_23 - iVar46);
							}
						}
					}
					else
					{
						if (Local_1038.f_23 >= 10000)
						{
							iVar46 = 5000;
						}
						else if (Local_1038.f_23 >= 5000)
						{
							iVar46 = 1000;
						}
						else if (Local_1038.f_23 >= 500)
						{
							iVar46 = 500;
						}
						else if (Local_1038.f_23 >= 100)
						{
							iVar46 = 50;
						}
						else
						{
							iVar46 = 10;
						}
						if (Local_1038.f_23 > Local_1038.f_19)
						{
							Local_1038.f_23 = (Local_1038.f_23 - iVar46);
						}
						if (Local_1038.f_23 > Local_1038.f_27)
						{
							Local_1038.f_23 = Local_1038.f_27;
						}
						if (Local_1038.f_23 < Local_1038.f_28)
						{
							Local_1038.f_23 = Local_1038.f_28;
						}
						if (Local_1038.f_23 > (Local_1038.f_19 - Local_749[PLAYER::PLAYER_ID()].f_3))
						{
							Local_1038.f_23 = (Local_1038.f_23 - iVar46);
						}
						iVar47 = Local_1038.f_23;
						if (bVar44)
						{
							Local_1038.f_23 = (Local_1038.f_23 + iVar46);
							if (Local_1038.f_23 > Local_1038.f_19)
							{
								Local_1038.f_23 = (Local_1038.f_23 - iVar46);
							}
							if (Local_1038.f_23 > Local_1038.f_27)
							{
								Local_1038.f_23 = Local_1038.f_27;
							}
							if (Local_1038.f_23 < Local_1038.f_28)
							{
								Local_1038.f_23 = Local_1038.f_28;
							}
							if (Local_1038.f_23 > (Local_1038.f_19 - Local_749[PLAYER::PLAYER_ID()].f_3))
							{
								Local_1038.f_23 = (Local_1038.f_23 - iVar46);
							}
							if (Local_1038.f_23 == iVar47)
							{
								if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 188) || !GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 10))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 1);
									GAMEPLAY::SET_BIT(&(Local_1038.f_22), 10);
								}
							}
							else
							{
								GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 10);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", 1);
							}
						}
						if (bVar45)
						{
							if (Local_1038.f_23 <= 100)
							{
								iVar46 = 10;
							}
							else if (Local_1038.f_23 <= 500)
							{
								iVar46 = 50;
							}
							else if (Local_1038.f_23 <= 5000)
							{
								iVar46 = 500;
							}
							else if (Local_1038.f_23 <= 10000)
							{
								iVar46 = 1000;
							}
							else
							{
								iVar46 = 5000;
							}
							Local_1038.f_23 = (Local_1038.f_23 - iVar46);
							if (Local_1038.f_23 < Local_1038.f_28)
							{
								Local_1038.f_23 = Local_1038.f_28;
							}
							if (Local_1038.f_23 == iVar47)
							{
								if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 187) || !GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 10))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 1);
									GAMEPLAY::SET_BIT(&(Local_1038.f_22), 10);
								}
							}
							else
							{
								GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 10);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_DOWN", "dlc_vw_table_games_frontend_sounds", 1);
							}
						}
					}
					if ((Local_1038.f_23 == Local_1038.f_27 || (Local_1038.f_23 + iVar46) > Local_1038.f_27) || (Local_1038.f_23 + iVar46) > (Local_1038.f_19 - Local_749[PLAYER::PLAYER_ID()].f_3))
					{
						GAMEPLAY::SET_BIT(&(Local_1038.f_22), 8);
					}
					else
					{
						GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 8);
					}
					GAMEPLAY::SET_BIT(&(Local_1038.f_29), 0);
					iVar0 = (30 - (func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0) / 1000));
					if (iVar0 > 0 || !func_72(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2])))
					{
						if ((((!NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && !func_337()) && !UI::IS_WARNING_MESSAGE_ACTIVE()) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 0)) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 3))
						{
							if (((((CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) && !CONTROLS::IS_CONTROL_PRESSED(2, 203)) && !CONTROLS::IS_CONTROL_PRESSED(2, 204)) && Local_1038.f_23 >= Local_1038.f_28) && Local_1038.f_23 <= Local_1038.f_19) && Local_1038.f_19 >= (Local_749[PLAYER::PLAYER_ID()].f_3 + Local_1038.f_28))
							{
								GAMEPLAY::SET_BIT(&(Local_1038.f_22), 0);
								Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_749[PLAYER::PLAYER_ID()].f_1), func_232(Local_749[PLAYER::PLAYER_ID()].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
								if (func_160(Local_1038.f_23))
								{
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "bet_plus_large", 2f, -2f, 13, 16, 1148846080, 0);
								}
								else
								{
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "bet_plus", 2f, -2f, 13, 16, 1148846080, 0);
								}
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
							}
							else if (((CONTROLS::IS_CONTROL_JUST_PRESSED(2, 203) && !CONTROLS::IS_CONTROL_PRESSED(2, 201)) && !CONTROLS::IS_CONTROL_PRESSED(2, 204)) || Local_1038.f_19 < (Local_749[PLAYER::PLAYER_ID()].f_3 + Local_1038.f_28))
							{
								if (Local_749[PLAYER::PLAYER_ID()].f_3 > 0)
								{
									GAMEPLAY::SET_BIT(&(Local_749[PLAYER::PLAYER_ID()]), 2);
								}
								else
								{
									Local_1901.f_4 = 847129329;
									Local_1924.f_2 = 847129329;
									Local_1901.f_7 = func_398();
									Local_1901.f_17 = func_206(&uLocal_1897, 0, 0);
									Local_1901.f_18 = func_408();
									Local_1901.f_19 = func_208();
									if (Local_749[PLAYER::PLAYER_ID()].f_2 > -1)
									{
										Local_1901.f_9 = Local_116.f_30[Local_749[PLAYER::PLAYER_ID()].f_2];
									}
									if (Global_262145.f_26036)
									{
										unk_0xF740FB339D471C35(&Local_1901);
									}
									func_375(1);
									UI::CLEAR_HELP(1);
									return;
								}
							}
						}
						if (func_72(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2])) && (30000 - func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0)) >= 0)
						{
							if (func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0) <= 24000)
							{
								func_159((30000 - func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								func_159((30000 - func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (((!func_335("TCP_PLACE_PAIR") && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
						{
							func_158("TCP_PLACE_PAIR");
						}
					}
				}
				else
				{
					if (((!func_335("TCP_PLACE_PAIR") && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
					{
						func_158("TCP_PLACE_PAIR");
					}
					if (func_72(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2])) && (30000 - func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0)) >= 0)
					{
						if (func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0) <= 24000)
						{
							func_159((30000 - func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_159((30000 - func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
					if (Local_1038.f_30 != -1 && !GAMEPLAY::IS_BIT_SET(Local_749[PLAYER::PLAYER_ID()], 2))
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1038.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1424880317)) && Local_749[PLAYER::PLAYER_ID()].f_5 > 0)
						{
							GAMEPLAY::SET_BIT(&(Local_749[PLAYER::PLAYER_ID()]), 2);
							GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 0);
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1503712844) && Local_749[PLAYER::PLAYER_ID()].f_5 <= 0)
						{
							Local_1038.f_1 = 1;
						}
						if (Local_1038.f_1)
						{
							if (func_155(Local_1038.f_23, &(Local_1038.f_14), 2, Local_1038))
							{
								if (Local_1038.f_14 == 3)
								{
									Local_1038.f_1 = 0;
									GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 0);
									Local_1038.f_14 = 0;
								}
								else
								{
									Local_749[PLAYER::PLAYER_ID()].f_5 = Local_1038.f_23;
									if (Local_1038.f_23 >= 10000)
									{
										iVar48 = 5000;
									}
									else if (Local_1038.f_23 >= 5000)
									{
										iVar48 = 1000;
									}
									else if (Local_1038.f_23 >= 500)
									{
										iVar48 = 500;
									}
									else if (Local_1038.f_23 >= 100)
									{
										iVar48 = 50;
									}
									else
									{
										iVar48 = 10;
									}
									if ((Local_1038.f_23 == Local_1038.f_27 || (Local_1038.f_23 + iVar48) > Local_1038.f_27) || (Local_1038.f_23 + iVar48) > (Local_1038.f_19 - Local_749[PLAYER::PLAYER_ID()].f_3))
									{
										Local_1901.f_5 = 1;
									}
									Local_1901.f_6 = (Local_1901.f_6 - Local_1038.f_23);
									Local_1924.f_3 = (Local_1924.f_3 - Local_1038.f_23);
									Local_1924.f_8 = (Local_1924.f_8 + Local_1038.f_23);
									Local_1901.f_13 = (Local_1901.f_13 + Local_1038.f_23);
									Local_1038.f_19 = func_398();
									Local_1038.f_1 = 0;
								}
							}
						}
					}
				}
				func_151(Local_1038.f_23, "TCP_BET3", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				bVar49 = true;
				iVar50 = 0;
				while (iVar50 < 4)
				{
					iVar51 = Local_116.f_117[(Local_749[PLAYER::PLAYER_ID()].f_2 * 4 + iVar50)];
					if (iVar51 != -1)
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_749[iVar51], 2))
						{
							bVar49 = false;
						}
					}
					iVar50++;
				}
				if ((((!func_335("TCP_WAIT") && !bVar49) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
				{
					func_158("TCP_WAIT");
				}
				if (func_72(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2])) && (30000 - func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0)) >= 0)
				{
					if (func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0) <= 24000)
					{
						func_159((30000 - func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						func_159((30000 - func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					}
				}
			}
			if ((Local_116.f_576[Local_749[PLAYER::PLAYER_ID()].f_2] > 3 && !GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 0)) && !Local_1038.f_1)
			{
				if (GAMEPLAY::IS_BIT_SET(Local_1038.f_29, 0))
				{
					UI::CLEAR_HELP(1);
					Local_1924.f_12++;
					if (Local_749[PLAYER::PLAYER_ID()].f_3 <= 0 && Local_749[PLAYER::PLAYER_ID()].f_5 <= 0)
					{
						GAMEPLAY::SET_BIT(&(Local_749[PLAYER::PLAYER_ID()]), 5);
					}
					func_161(2);
				}
				else
				{
					bVar52 = true;
					iVar53 = 0;
					while (iVar53 < 4)
					{
						iVar54 = Local_116.f_117[(Local_749[PLAYER::PLAYER_ID()].f_2 * 4 + iVar53)];
						if (iVar54 != -1)
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_749[iVar54], 2))
							{
								bVar52 = false;
							}
						}
						iVar53++;
					}
					if ((((!func_335("TCP_WAIT") && !bVar52) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
					{
						func_158("TCP_WAIT");
					}
					if (func_72(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2])) && (30000 - func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0)) >= 0)
					{
						if (func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0) <= 24000)
						{
							func_159((30000 - func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_159((30000 - func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
				}
			}
			break;
		
		case 2:
			if (Local_749[PLAYER::PLAYER_ID()].f_2 >= 0)
			{
				if (Local_116.f_389[Local_749[PLAYER::PLAYER_ID()].f_2] == 3)
				{
					if (Local_749[PLAYER::PLAYER_ID()].f_3 > 0)
					{
						GAMEPLAY::SET_BIT(&(Local_1038.f_22), 6);
					}
					GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 0);
					func_161(3);
				}
			}
			break;
		
		case 3:
			if (Local_749[PLAYER::PLAYER_ID()].f_3 <= 0 && Local_749[PLAYER::PLAYER_ID()].f_5 <= 0)
			{
				GAMEPLAY::SET_BIT(&(Local_749[PLAYER::PLAYER_ID()]), 3);
				if (!GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 4))
				{
					GAMEPLAY::SET_BIT(&(Local_749[PLAYER::PLAYER_ID()]), 4);
				}
				func_161(4);
				return;
			}
			if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 0, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 1, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 2, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 0, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 0, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]);
					bVar55 = true;
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 1, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 1, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]);
					bVar55 = true;
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 2, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 2, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]);
					bVar55 = true;
				}
				if (bVar55)
				{
					return;
				}
				if ((((((!GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 0) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 4)) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 2)) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 1)) && !GAMEPLAY::IS_BIT_SET(Local_749[PLAYER::PLAYER_ID()], 1)) && !GAMEPLAY::IS_BIT_SET(Local_749[PLAYER::PLAYER_ID()], 3)) && Local_749[PLAYER::PLAYER_ID()].f_3 > 0)
				{
					if ((!NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && !func_337()) && !UI::IS_WARNING_MESSAGE_ACTIVE())
					{
						if ((CONTROLS::IS_CONTROL_JUST_PRESSED(2, 207) && !CONTROLS::IS_CONTROL_PRESSED(2, 203)) && !CONTROLS::IS_CONTROL_PRESSED(2, 201))
						{
							Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_749[PLAYER::PLAYER_ID()].f_1), func_232(Local_749[PLAYER::PLAYER_ID()].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "cards_pickup", 2f, -2f, 13, 16, 1148846080, 0);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 0, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_pickup_card_a", 1000f, -1000f, 13);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 1, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_pickup_card_b", 1000f, -1000f, 13);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 2, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_pickup_card_c", 1000f, -1000f, 13);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
							GAMEPLAY::SET_BIT(&(Local_1038.f_22), 7);
							GAMEPLAY::SET_BIT(&(Local_1038.f_22), 0);
						}
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 0))
				{
					if (Local_749[PLAYER::PLAYER_ID()].f_3 > 0)
					{
						iVar0 = (30 - (func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0) / 1000));
						if (iVar0 > 0)
						{
							if (func_72(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2])) && (30000 - func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0)) >= 0)
							{
								if (func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0) <= 24000)
								{
									func_159((30000 - func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
								}
								else
								{
									func_159((30000 - func_206(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
							if (((!func_335("TCP_PLACE_PLAY") && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
							{
								func_158("TCP_PLACE_PLAY");
							}
							if ((((!NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && !func_337()) && !UI::IS_WARNING_MESSAGE_ACTIVE()) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 0)) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 3))
							{
								if ((CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) && !CONTROLS::IS_CONTROL_PRESSED(2, 203)) && (!CONTROLS::IS_CONTROL_PRESSED(2, 207) || GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 4)))
								{
									if (GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 4))
									{
										Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_749[PLAYER::PLAYER_ID()].f_1), func_232(Local_749[PLAYER::PLAYER_ID()].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "cards_play", 2f, -2f, 13, 16, 1148846080, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 0, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_play_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 1, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_play_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 2, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_play_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
									}
									GAMEPLAY::SET_BIT(&(Local_1038.f_22), 0);
									GAMEPLAY::SET_BIT(&(Local_1038.f_22), 2);
								}
								else if ((CONTROLS::IS_CONTROL_JUST_PRESSED(2, 203) && !CONTROLS::IS_CONTROL_PRESSED(2, 201)) && (!CONTROLS::IS_CONTROL_PRESSED(2, 207) || GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 4)))
								{
									if (GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 4))
									{
										Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_749[PLAYER::PLAYER_ID()].f_1), func_232(Local_749[PLAYER::PLAYER_ID()].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1148846080, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 0, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 1, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 2, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
									}
									GAMEPLAY::SET_BIT(&(Local_1038.f_22), 0);
									GAMEPLAY::SET_BIT(&(Local_1038.f_22), 1);
								}
							}
						}
						else if (func_72(&(Local_116.f_150[Local_749[PLAYER::PLAYER_ID()].f_2])))
						{
							if (GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 4))
							{
								Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_749[PLAYER::PLAYER_ID()].f_1), func_232(Local_749[PLAYER::PLAYER_ID()].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1148846080, 0);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 0, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 1, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 2, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
							}
							GAMEPLAY::SET_BIT(&(Local_1038.f_22), 0);
							GAMEPLAY::SET_BIT(&(Local_1038.f_22), 1);
						}
					}
					else
					{
						GAMEPLAY::SET_BIT(&(Local_749[PLAYER::PLAYER_ID()]), 3);
						if (!GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 4))
						{
							GAMEPLAY::SET_BIT(&(Local_749[PLAYER::PLAYER_ID()]), 4);
						}
						func_161(4);
						return;
					}
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 2))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 3))
					{
						if ((Local_1038.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1038.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1424880317))) || !GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 4))
						{
							Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_749[PLAYER::PLAYER_ID()].f_1), func_232(Local_749[PLAYER::PLAYER_ID()].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
							if (func_160(Local_749[PLAYER::PLAYER_ID()].f_3))
							{
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "cards_bet_large", 2f, -2f, 13, 16, 1148846080, 0);
							}
							else
							{
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "cards_bet", 2f, -2f, 13, 16, 1148846080, 0);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
							GAMEPLAY::SET_BIT(&(Local_1038.f_22), 3);
						}
					}
					else if (Local_1038.f_30 != -1)
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1038.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1424880317)) && Local_749[PLAYER::PLAYER_ID()].f_4 > 0)
						{
							Local_1038.f_796 = "idle_cardgames";
							Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_749[PLAYER::PLAYER_ID()].f_1), func_232(Local_749[PLAYER::PLAYER_ID()].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_231(), Local_1038.f_796, 2f, -2f, 13, 16, 1148846080, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
							GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 0);
							GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 1);
							GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 2);
							GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 3);
							GAMEPLAY::SET_BIT(&(Local_749[PLAYER::PLAYER_ID()]), 1);
							if (!GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 4))
							{
								GAMEPLAY::SET_BIT(&(Local_749[PLAYER::PLAYER_ID()]), 4);
							}
							func_161(4);
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1503712844) && Local_749[PLAYER::PLAYER_ID()].f_4 <= 0)
						{
							Local_1038.f_1 = 1;
						}
						if (Local_1038.f_1)
						{
							if (func_155(Local_749[PLAYER::PLAYER_ID()].f_3, &(Local_1038.f_14), 2, Local_1038))
							{
								if (Local_1038.f_14 == 3)
								{
									Local_1038.f_1 = 0;
									GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 0);
									GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 1);
									GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 2);
									GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 3);
									if (GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 4))
									{
										Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_749[PLAYER::PLAYER_ID()].f_1), func_232(Local_749[PLAYER::PLAYER_ID()].f_1), 2, 0, 1, 1065353216, 0, 1065353216);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "cards_idle", 1000f, -1000f, 13, 16, 1148846080, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 0, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_idle_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 1, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_idle_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 2, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_idle_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
									}
									Local_1038.f_14 = 0;
								}
								else
								{
									Local_749[PLAYER::PLAYER_ID()].f_4 = Local_749[PLAYER::PLAYER_ID()].f_3;
									Local_1901.f_6 = (Local_1901.f_6 - Local_749[PLAYER::PLAYER_ID()].f_3);
									Local_1924.f_3 = (Local_1924.f_3 - Local_749[PLAYER::PLAYER_ID()].f_3);
									Local_1038.f_19 = func_398();
									Local_1038.f_1 = 0;
								}
							}
						}
					}
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 1))
				{
					if ((Local_1038.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1038.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1424880317))) || !GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 4))
					{
						Local_1038.f_796 = "idle_cardgames";
						Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_749[PLAYER::PLAYER_ID()].f_1), func_232(Local_749[PLAYER::PLAYER_ID()].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_231(), Local_1038.f_796, 2f, -2f, 13, 16, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
						GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 0);
						GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 1);
						GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 2);
						GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 3);
						GAMEPLAY::SET_BIT(&(Local_749[PLAYER::PLAYER_ID()]), 3);
						if (!GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 4))
						{
							GAMEPLAY::SET_BIT(&(Local_749[PLAYER::PLAYER_ID()]), 4);
						}
						func_161(4);
					}
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 7) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_92(), "cards_pickup", 3))
				{
					if (Local_1038.f_30 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1038.f_30) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1424880317)))
					{
						Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_749[PLAYER::PLAYER_ID()].f_1), func_232(Local_749[PLAYER::PLAYER_ID()].f_1), 2, 0, 1, 1065353216, 0, 1065353216);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "cards_idle", 2f, -2f, 13, 16, 1148846080, 0);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 0, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_idle_card_a", 1000f, -1000f, 13);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 1, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_idle_card_b", 1000f, -1000f, 13);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 2, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_idle_card_c", 1000f, -1000f, 13);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
						GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 0);
						GAMEPLAY::CLEAR_BIT(&(Local_1038.f_22), 7);
						GAMEPLAY::SET_BIT(&(Local_1038.f_22), 4);
					}
				}
				if (Local_749[PLAYER::PLAYER_ID()].f_3 > 0)
				{
					func_151(Local_749[PLAYER::PLAYER_ID()].f_3, "TCP_BET4", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			break;
		
		case 4:
			if (Local_749[PLAYER::PLAYER_ID()].f_2 >= 0)
			{
				bVar56 = true;
				iVar57 = 0;
				while (iVar57 < 4)
				{
					iVar58 = Local_116.f_117[(Local_749[PLAYER::PLAYER_ID()].f_2 * 4 + iVar57)];
					if (iVar58 != -1)
					{
						if ((!GAMEPLAY::IS_BIT_SET(Local_749[iVar58], 1) && !GAMEPLAY::IS_BIT_SET(Local_749[iVar58], 3)) && (Local_749[iVar58].f_3 > 0 || Local_749[iVar58].f_5 > 0))
						{
							bVar56 = false;
						}
					}
					iVar57++;
				}
				if (Local_116.f_576[Local_749[PLAYER::PLAYER_ID()].f_2] == 9 && !bVar56)
				{
					if (((!func_335("TCP_WAIT") && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
					{
						func_158("TCP_WAIT");
					}
				}
				else if (func_335("TCP_WAIT") || func_335("TCP_PLACE_PLAY"))
				{
					UI::CLEAR_HELP(1);
				}
				if (Local_116.f_576[Local_749[PLAYER::PLAYER_ID()].f_2] == 1)
				{
					if (GAMEPLAY::IS_BIT_SET(Local_749[PLAYER::PLAYER_ID()], 5))
					{
						bVar59 = true;
					}
					if (Local_1038.f_31 != -1)
					{
						func_311(&(Local_1038.f_31));
						Local_1038.f_31 = -1;
					}
					Local_1038.f_2 = 0;
					Local_1038.f_3 = 0;
					Local_1038.f_4 = 0;
					Local_1038.f_6 = 0;
					Local_1038.f_22 = 0;
					Local_749[PLAYER::PLAYER_ID()] = 0;
					Local_749[PLAYER::PLAYER_ID()].f_6 = 0;
					Local_749[PLAYER::PLAYER_ID()].f_3 = 0;
					Local_749[PLAYER::PLAYER_ID()].f_5 = 0;
					Local_749[PLAYER::PLAYER_ID()].f_4 = 0;
					func_161(0);
					Local_1901.f_7 = func_398();
					Local_1901.f_17 = func_206(&uLocal_1897, 0, 0);
					Local_1901.f_18 = func_408();
					Local_1901.f_19 = func_208();
					if (Local_749[PLAYER::PLAYER_ID()].f_2 > -1)
					{
						Local_1901.f_9 = Local_116.f_30[Local_749[PLAYER::PLAYER_ID()].f_2];
					}
					if (!func_354() || func_348())
					{
						if (Global_262145.f_26036 && !bVar59)
						{
							unk_0xF740FB339D471C35(&Local_1901);
						}
						func_375(1);
						UI::CLEAR_HELP(1);
						return;
					}
					if (func_333())
					{
						switch (func_329())
						{
							case 0:
								Local_1901.f_4 = 1982714739;
								break;
							
							case 1:
								Local_1901.f_4 = -633175758;
								break;
							
							case 2:
								Local_1901.f_4 = -1625999354;
								break;
						}
						switch (func_329())
						{
							case 0:
								Local_1924.f_2 = 1982714739;
								break;
							
							case 1:
								Local_1924.f_2 = -633175758;
								break;
							
							case 2:
								Local_1924.f_2 = -1625999354;
								break;
						}
						if (Global_262145.f_26036 && !bVar59)
						{
							unk_0xF740FB339D471C35(&Local_1901);
						}
						func_375(1);
						UI::CLEAR_HELP(1);
						if (func_329() == 2)
						{
							func_223("CAS_MG_CTIME", -1);
						}
						else
						{
							func_223("CAS_MG_CBAN", -1);
						}
						return;
					}
					if (Global_262145.f_26036 && !bVar59)
					{
						unk_0xF740FB339D471C35(&Local_1901);
					}
					return;
				}
				if ((Local_116.f_5[Local_749[PLAYER::PLAYER_ID()].f_2] && Local_116.f_410[PLAYER::PLAYER_ID()] > 0) && GAMEPLAY::IS_BIT_SET(Local_116.f_20[Local_749[PLAYER::PLAYER_ID()].f_2], func_197(Local_749[PLAYER::PLAYER_ID()].f_1)))
				{
					iVar61 = func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID()].f_2].f_1), 0, 0);
					iVar62 = func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0);
					if (func_25(iVar61))
					{
						bVar60 = true;
					}
					if (iVar62 > 500)
					{
						Local_1901.f_22 = 745220304;
					}
					else if (iVar62 > 400)
					{
						Local_1901.f_22 = 588481795;
					}
					else if (iVar62 > 300)
					{
						Local_1901.f_22 = 313822186;
					}
					else if (iVar62 > 200)
					{
						Local_1901.f_22 = -310009958;
					}
					else if (iVar62 > 100)
					{
						Local_1901.f_22 = 378531009;
					}
					else
					{
						Local_1901.f_22 = 201584577;
					}
					if (((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6)
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 5))
						{
							Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_749[PLAYER::PLAYER_ID()].f_1), func_232(Local_749[PLAYER::PLAYER_ID()].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
							sVar63 = func_150(Local_1901.f_6);
							if ((Local_1038.f_26 == 1 || func_380(Local_1038.f_18) == 2) || func_380(Local_1038.f_18) == 3)
							{
								if (((Local_1038.f_15 >= 35000 && iVar62 > iVar61) && iVar62 > 300) || (Local_1038.f_23 >= 3500 && iVar62 > 300))
								{
									sVar63 = func_149();
								}
								else if (((Local_1038.f_15 >= 35000 && iVar62 > 300) && iVar62 < iVar61) && !(Local_1038.f_23 >= 3500 && iVar62 > 300))
								{
									sVar63 = func_147();
								}
							}
							else if (((Local_1038.f_15 >= 4500 && iVar62 > iVar61) && iVar62 > 300) || (Local_1038.f_23 >= 450 && iVar62 > 300))
							{
								sVar63 = func_149();
							}
							else if (((Local_1038.f_15 >= 4500 && iVar62 > 300) && iVar62 < iVar61) && !(Local_1038.f_23 >= 450 && iVar62 > 300))
							{
								sVar63 = func_147();
							}
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_231(), sVar63, 2f, -2f, 13, 16, 1148846080, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
							GAMEPLAY::SET_BIT(&(Local_1038.f_22), 5);
						}
						if (Local_1901.f_14 > 0)
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 9))
							{
								if (func_102(Local_1901.f_14, &(Local_1038.f_14), 2))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_WIN_CHIPS", "dlc_vw_table_games_frontend_sounds", 1);
									GAMEPLAY::SET_BIT(&(Local_1038.f_22), 9);
									if (func_418(PLAYER::PLAYER_ID()) && iVar62 > 500)
									{
										GAMEPLAY::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_840), 11);
									}
								}
							}
						}
					}
					if (Local_749[PLAYER::PLAYER_ID()].f_3 > 0)
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_749[PLAYER::PLAYER_ID()], 3))
						{
							if (!bVar60)
							{
								if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
								{
									if (!func_100("TCP_WIN_NP", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 0), Local_1901.f_14))
									{
										func_99("TCP_WIN_NP", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 0), Local_1901.f_14);
									}
								}
								if (!Local_1038.f_2)
								{
									Local_1038.f_2 = 1;
									Local_1924.f_3 = (Local_1924.f_3 + Local_749[PLAYER::PLAYER_ID()].f_3 * 2);
									Local_1901.f_6 = (Local_1901.f_6 + Local_749[PLAYER::PLAYER_ID()].f_3 * 2);
									Local_1901.f_14 = (Local_1901.f_14 + Local_749[PLAYER::PLAYER_ID()].f_3 * 2);
								}
								if (!Local_1038.f_3)
								{
									Local_1038.f_3 = 1;
									Local_1924.f_3 = (Local_1924.f_3 + Local_749[PLAYER::PLAYER_ID()].f_4);
									Local_1901.f_6 = (Local_1901.f_6 + Local_749[PLAYER::PLAYER_ID()].f_4);
									Local_1924.f_13++;
									Local_1901.f_15 = 1;
									Local_1901.f_14 = (Local_1901.f_14 + Local_749[PLAYER::PLAYER_ID()].f_4);
									Local_1901.f_4 = -562306862;
								}
							}
							else if (iVar62 > iVar61)
							{
								if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
								{
									if (iVar62 > 500 && iVar61 > 500)
									{
										bVar64 = true;
									}
									if ((iVar62 > 400 && iVar61 > 400) && (iVar62 < 500 && iVar61 < 500))
									{
										bVar64 = true;
									}
									if ((iVar62 > 300 && iVar61 > 300) && (iVar62 < 400 && iVar61 < 400))
									{
										bVar64 = true;
									}
									if ((iVar62 > 200 && iVar61 > 200) && (iVar62 < 300 && iVar61 < 300))
									{
										bVar64 = true;
									}
									if ((iVar62 > 100 && iVar61 > 100) && (iVar62 < 200 && iVar61 < 200))
									{
										bVar64 = true;
									}
									if (bVar64)
									{
										if (!func_100("TCP_WIN2", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 1), Local_1901.f_14))
										{
											func_99("TCP_WIN2", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 1), Local_1901.f_14);
										}
									}
									else if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 0), Local_1901.f_14))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 0), Local_1901.f_14);
									}
								}
								if (!Local_1038.f_2)
								{
									Local_1038.f_2 = 1;
									Local_1924.f_3 = (Local_1924.f_3 + Local_749[PLAYER::PLAYER_ID()].f_3 * 2);
									Local_1901.f_6 = (Local_1901.f_6 + Local_749[PLAYER::PLAYER_ID()].f_3 * 2);
									Local_1901.f_14 = (Local_1901.f_14 + Local_749[PLAYER::PLAYER_ID()].f_3 * 2);
								}
								if (!Local_1038.f_3)
								{
									Local_1038.f_3 = 1;
									Local_1924.f_3 = (Local_1924.f_3 + Local_749[PLAYER::PLAYER_ID()].f_4 * 2);
									Local_1901.f_6 = (Local_1901.f_6 + Local_749[PLAYER::PLAYER_ID()].f_4 * 2);
									Local_1901.f_14 = (Local_1901.f_14 + Local_749[PLAYER::PLAYER_ID()].f_4 * 2);
									Local_1924.f_13++;
									Local_1901.f_15 = 1;
									Local_1901.f_4 = -562306862;
								}
							}
							else if (iVar62 == iVar61)
							{
								iVar61 = func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID()].f_2].f_1), 1, 0);
								iVar62 = func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 1, 0);
								if (iVar62 == iVar61)
								{
									iVar61 = func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID()].f_2].f_1), 0, 1);
									iVar62 = func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 1);
									if (iVar62 > iVar61)
									{
										if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
										{
											if (!func_100("TCP_WIN2", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 1), Local_1901.f_14))
											{
												func_99("TCP_WIN2", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 1), Local_1901.f_14);
											}
										}
										if (!Local_1038.f_2)
										{
											Local_1038.f_2 = 1;
											Local_1924.f_3 = (Local_1924.f_3 + Local_749[PLAYER::PLAYER_ID()].f_3 * 2);
											Local_1901.f_6 = (Local_1901.f_6 + Local_749[PLAYER::PLAYER_ID()].f_3 * 2);
											Local_1901.f_14 = (Local_1901.f_14 + Local_749[PLAYER::PLAYER_ID()].f_3 * 2);
										}
										if (!Local_1038.f_3)
										{
											Local_1038.f_3 = 1;
											Local_1924.f_3 = (Local_1924.f_3 + Local_749[PLAYER::PLAYER_ID()].f_4 * 2);
											Local_1901.f_6 = (Local_1901.f_6 + Local_749[PLAYER::PLAYER_ID()].f_4 * 2);
											Local_1901.f_14 = (Local_1901.f_14 + Local_749[PLAYER::PLAYER_ID()].f_4 * 2);
											Local_1924.f_13++;
											Local_1901.f_15 = 1;
											Local_1901.f_4 = -562306862;
										}
									}
									else if (iVar62 == iVar61)
									{
										if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
										{
											if (!func_335("TCP_LOSE_PUSH"))
											{
												func_158("TCP_LOSE_PUSH");
											}
										}
										if (!Local_1038.f_2)
										{
											Local_1038.f_2 = 1;
											Local_1924.f_3 = (Local_1924.f_3 + Local_749[PLAYER::PLAYER_ID()].f_3);
											Local_1901.f_6 = (Local_1901.f_6 + Local_749[PLAYER::PLAYER_ID()].f_3);
											Local_1901.f_14 = (Local_1901.f_14 + Local_749[PLAYER::PLAYER_ID()].f_3);
											func_205(Local_749[PLAYER::PLAYER_ID()].f_3);
										}
										if (!Local_1038.f_3)
										{
											Local_1038.f_3 = 1;
											Local_1924.f_3 = (Local_1924.f_3 + Local_749[PLAYER::PLAYER_ID()].f_4);
											Local_1901.f_6 = (Local_1901.f_6 + Local_749[PLAYER::PLAYER_ID()].f_4);
											Local_1901.f_14 = (Local_1901.f_14 + Local_749[PLAYER::PLAYER_ID()].f_4);
											Local_1924.f_13++;
											Local_1901.f_15 = 1;
											Local_1901.f_4 = -562306862;
										}
										Local_1038.f_2 = 1;
									}
									else
									{
										if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
										{
											if (Local_1901.f_14 > 0)
											{
												if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 1), Local_1901.f_14))
												{
													func_99("TCP_WIN", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 1), Local_1901.f_14);
												}
											}
											else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID()].f_2].f_1), 0, 0), 1)))
											{
												func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID()].f_2].f_1), 0, 0), 1));
											}
										}
										Local_1901.f_4 = -1851302466;
										if (!Local_1038.f_3)
										{
											func_205((Local_749[PLAYER::PLAYER_ID()].f_4 + Local_749[PLAYER::PLAYER_ID()].f_3));
											Local_1038.f_3 = 1;
											Local_1924.f_14++;
										}
										Local_1038.f_2 = 1;
									}
								}
								else if (iVar62 > iVar61)
								{
									if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
									{
										if (!func_100("TCP_WIN2", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 1), Local_1901.f_14))
										{
											func_99("TCP_WIN2", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 1), Local_1901.f_14);
										}
									}
									if (!Local_1038.f_2)
									{
										Local_1038.f_2 = 1;
										Local_1924.f_3 = (Local_1924.f_3 + Local_749[PLAYER::PLAYER_ID()].f_3 * 2);
										Local_1901.f_6 = (Local_1901.f_6 + Local_749[PLAYER::PLAYER_ID()].f_3 * 2);
										Local_1901.f_14 = (Local_1901.f_14 + Local_749[PLAYER::PLAYER_ID()].f_3 * 2);
									}
									if (!Local_1038.f_3)
									{
										Local_1038.f_3 = 1;
										Local_1924.f_3 = (Local_1924.f_3 + Local_749[PLAYER::PLAYER_ID()].f_4 * 2);
										Local_1901.f_6 = (Local_1901.f_6 + Local_749[PLAYER::PLAYER_ID()].f_4 * 2);
										Local_1924.f_13++;
										Local_1901.f_15 = 1;
										Local_1901.f_14 = (Local_1901.f_14 + Local_749[PLAYER::PLAYER_ID()].f_4 * 2);
										Local_1901.f_4 = -562306862;
									}
								}
								else
								{
									if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
									{
										if (Local_1901.f_14 > 0)
										{
											if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 1), Local_1901.f_14))
											{
												func_99("TCP_WIN", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 1), Local_1901.f_14);
											}
										}
										else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID()].f_2].f_1), 0, 0), 1)))
										{
											func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID()].f_2].f_1), 0, 0), 1));
										}
									}
									Local_1901.f_4 = -1851302466;
									if (!Local_1038.f_3)
									{
										func_205((Local_749[PLAYER::PLAYER_ID()].f_4 + Local_749[PLAYER::PLAYER_ID()].f_3));
										Local_1038.f_3 = 1;
										Local_1924.f_14++;
									}
									Local_1038.f_2 = 1;
								}
							}
							else
							{
								if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
								{
									if (iVar62 > 500 && iVar61 > 500)
									{
										bVar65 = true;
									}
									if ((iVar62 > 400 && iVar61 > 400) && (iVar62 < 500 && iVar61 < 500))
									{
										bVar65 = true;
									}
									if ((iVar62 > 300 && iVar61 > 300) && (iVar62 < 400 && iVar61 < 400))
									{
										bVar65 = true;
									}
									if ((iVar62 > 200 && iVar61 > 200) && (iVar62 < 300 && iVar61 < 300))
									{
										bVar65 = true;
									}
									if ((iVar62 > 100 && iVar61 > 100) && (iVar62 < 200 && iVar61 < 200))
									{
										bVar65 = true;
									}
									if (bVar65)
									{
										if (Local_1901.f_14 > 0)
										{
											if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 1), Local_1901.f_14))
											{
												func_99("TCP_WIN", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 1), Local_1901.f_14);
											}
										}
										else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID()].f_2].f_1), 0, 0), 1)))
										{
											func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID()].f_2].f_1), 0, 0), 1));
										}
									}
									else if (Local_1901.f_14 > 0)
									{
										if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 0), Local_1901.f_14))
										{
											func_99("TCP_WIN", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 0), Local_1901.f_14);
										}
									}
									else if (!func_98("TCP_LOSE_PLAY", func_101(func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID()].f_2].f_1), 0, 0), 0)))
									{
										func_97("TCP_LOSE_PLAY", func_101(func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID()].f_2].f_1), 0, 0), 0));
									}
								}
								Local_1901.f_4 = -1851302466;
								if (!Local_1038.f_3)
								{
									func_205((Local_749[PLAYER::PLAYER_ID()].f_4 + Local_749[PLAYER::PLAYER_ID()].f_3));
									Local_1038.f_3 = 1;
									Local_1924.f_14++;
								}
								Local_1038.f_2 = 1;
							}
							iVar62 = func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0);
							if (!Local_1038.f_4)
							{
								if (func_96(iVar62) > 0)
								{
									Local_1924.f_3 = (Local_1924.f_3 + (Local_749[PLAYER::PLAYER_ID()].f_3 * func_96(iVar62)));
									Local_1901.f_6 = (Local_1901.f_6 + (Local_749[PLAYER::PLAYER_ID()].f_3 * func_96(iVar62)));
									Local_1924.f_13++;
									Local_1901.f_15 = 1;
									Local_1901.f_14 = (Local_1901.f_14 + (Local_749[PLAYER::PLAYER_ID()].f_3 * func_96(iVar62)));
								}
								Local_1038.f_4 = 1;
							}
						}
						else
						{
							if (Local_749[PLAYER::PLAYER_ID()].f_3 >= 0)
							{
								Local_1901.f_4 = 686661968;
							}
							if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
							{
								if (Local_1901.f_14 > 0)
								{
									if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 0), Local_1901.f_14))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 0), Local_1901.f_14);
									}
								}
								else if (!func_98("TCP_LOSE_FOLD", func_101(func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID()].f_2].f_1), 0, 0), 0)))
								{
									func_97("TCP_LOSE_FOLD", func_101(func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID()].f_2].f_1), 0, 0), 0));
								}
							}
							if (!Local_1038.f_3)
							{
								func_205(Local_749[PLAYER::PLAYER_ID()].f_3);
								Local_1038.f_3 = 1;
								Local_1924.f_14++;
							}
							Local_1038.f_4 = 1;
							Local_1038.f_2 = 1;
						}
					}
					else
					{
						Local_1038.f_2 = 1;
						Local_1038.f_3 = 1;
						Local_1038.f_4 = 1;
					}
					iVar62 = func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0);
					if (Local_749[PLAYER::PLAYER_ID()].f_5 > 0)
					{
						Local_1901.f_21 = 1;
						if (func_23(iVar62) > 0)
						{
							if (Local_749[PLAYER::PLAYER_ID()].f_3 <= 0)
							{
								if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
								{
									if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 0), Local_1901.f_14))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 0), Local_1901.f_14);
									}
								}
							}
							if (!Local_1038.f_6)
							{
								Local_1038.f_6 = 1;
								Local_1924.f_3 = (Local_1924.f_3 + (Local_749[PLAYER::PLAYER_ID()].f_5 + (Local_749[PLAYER::PLAYER_ID()].f_5 * func_23(iVar62))));
								Local_1901.f_6 = (Local_1901.f_6 + (Local_749[PLAYER::PLAYER_ID()].f_5 + (Local_749[PLAYER::PLAYER_ID()].f_5 * func_23(iVar62))));
								Local_1924.f_13++;
								Local_1901.f_15 = 1;
								Local_1901.f_14 = (Local_1901.f_14 + (Local_749[PLAYER::PLAYER_ID()].f_5 + (Local_749[PLAYER::PLAYER_ID()].f_5 * func_23(iVar62))));
								Local_1901.f_4 = -562306862;
							}
						}
						else
						{
							if (Local_749[PLAYER::PLAYER_ID()].f_3 <= 0)
							{
								Local_1901.f_4 = -1851302466;
								if ((((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && !bLocal_1947) && !bLocal_1948) && !bLocal_1943)
								{
									if (!func_98("TCP_LOSE_PP", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 0)))
									{
										func_97("TCP_LOSE_PP", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 0));
									}
								}
							}
							if (!Local_1038.f_6)
							{
								func_205(Local_749[PLAYER::PLAYER_ID()].f_5);
								Local_1038.f_6 = 1;
								if (Local_749[PLAYER::PLAYER_ID()].f_3 <= 0)
								{
									Local_1924.f_14++;
								}
							}
						}
					}
					else
					{
						Local_1038.f_6 = 1;
					}
				}
				else
				{
					if (!Local_116.f_5[Local_749[PLAYER::PLAYER_ID()].f_2])
					{
					}
					if (Local_116.f_410[PLAYER::PLAYER_ID()] <= 0)
					{
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_116.f_20[Local_749[PLAYER::PLAYER_ID()].f_2], func_197(Local_749[PLAYER::PLAYER_ID()].f_1)))
					{
					}
					if (((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6)
					{
						if (Local_116.f_410[PLAYER::PLAYER_ID()] <= 0)
						{
							Local_749[PLAYER::PLAYER_ID()].f_3 = 0;
							Local_749[PLAYER::PLAYER_ID()].f_5 = 0;
							Local_749[PLAYER::PLAYER_ID()].f_4 = 0;
						}
					}
				}
			}
			break;
	}
}

int func_96(int iParam0)
{
	if (iParam0 > 500)
	{
		return 5;
	}
	else if (iParam0 > 400)
	{
		return 4;
	}
	else if (iParam0 > 300)
	{
		return 1;
	}
	return 0;
}

void func_97(char* sParam0, var uParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 0, -1);
}

bool func_98(char* sParam0, var uParam1)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_99(char* sParam0, var uParam1, int iParam2)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 0, -1);
}

bool func_100(char* sParam0, var uParam1, int iParam2)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_101(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (iParam0 > 500)
		{
			return "TCP_STRAIGHTF_F";
		}
		else if (iParam0 > 400)
		{
			return "TCP_TOFAKIND_F";
		}
		else if (iParam0 > 300)
		{
			return "TCP_STRAIGHT_F";
		}
		else if (iParam0 > 200)
		{
			return "TCP_FLUSH_F";
		}
		else if (iParam0 > 100)
		{
			return "TCP_PAIR_F";
		}
		else if (iParam0 == 12)
		{
			return "TCP_HIGH_Q_F";
		}
		else if (iParam0 == 13)
		{
			return "TCP_HIGH_K_F";
		}
		else
		{
			return "TCP_HIGH_A_F";
		}
	}
	else if (iParam0 > 500)
	{
		return "TCP_STRAIGHTF";
	}
	else if (iParam0 > 400)
	{
		return "TCP_TOFAKIND";
	}
	else if (iParam0 > 300)
	{
		return "TCP_STRAIGHT";
	}
	else if (iParam0 > 200)
	{
		return "TCP_FLUSH";
	}
	else if (iParam0 > 100)
	{
		if (iParam0 == 128)
		{
			return "TCP_PAIR_A";
		}
		else if (iParam0 == 104)
		{
			return "TCP_PAIR_2";
		}
		else if (iParam0 == 106)
		{
			return "TCP_PAIR_3";
		}
		else if (iParam0 == 108)
		{
			return "TCP_PAIR_4";
		}
		else if (iParam0 == 110)
		{
			return "TCP_PAIR_5";
		}
		else if (iParam0 == 112)
		{
			return "TCP_PAIR_6";
		}
		else if (iParam0 == 114)
		{
			return "TCP_PAIR_7";
		}
		else if (iParam0 == 116)
		{
			return "TCP_PAIR_8";
		}
		else if (iParam0 == 118)
		{
			return "TCP_PAIR_9";
		}
		else if (iParam0 == 120)
		{
			return "TCP_PAIR_10";
		}
		else if (iParam0 == 122)
		{
			return "TCP_PAIR_J";
		}
		else if (iParam0 == 124)
		{
			return "TCP_PAIR_Q";
		}
		else if (iParam0 == 126)
		{
			return "TCP_PAIR_K";
		}
	}
	else if (iParam0 == 5)
	{
		return "TCP_HIGH_5";
	}
	else if (iParam0 == 6)
	{
		return "TCP_HIGH_6";
	}
	else if (iParam0 == 7)
	{
		return "TCP_HIGH_7";
	}
	else if (iParam0 == 8)
	{
		return "TCP_HIGH_8";
	}
	else if (iParam0 == 9)
	{
		return "TCP_HIGH_9";
	}
	else if (iParam0 == 10)
	{
		return "TCP_HIGH_10";
	}
	else if (iParam0 == 11)
	{
		return "TCP_HIGH_J";
	}
	else if (iParam0 == 12)
	{
		return "TCP_HIGH_Q";
	}
	else if (iParam0 == 13)
	{
		return "TCP_HIGH_K";
	}
	else
	{
		return "TCP_HIGH_A";
	}
	return "";
}

bool func_102(int iParam0, var uParam1, int iParam2)
{
	return func_103(iParam0, 3, uParam1, iParam2, -1);
}

int func_103(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
	}
	else if (!func_146(iParam1))
	{
	}
	else
	{
		iVar0 = func_398();
		iVar1 = (Global_262145.f_26395 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_144();
			if (iVar1 > iVar3)
			{
				iVar1 = iVar3;
			}
		}
		if (iParam0 > iVar1)
		{
			iVar2 = (iVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_124(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_398() - Global_1696044);
			func_123(iVar4, 1);
			func_121();
			func_120();
			Global_1696044 = (Global_1696044 + iVar4);
			if (iParam1 == 0)
			{
				func_114(iVar4);
				Global_2460613 = 1;
			}
			else if (iParam1 == 3)
			{
				func_107(iVar4);
				if (iVar4 >= Global_262145.f_26403)
				{
					Global_2460612 = 1;
				}
				else if (iVar4 >= Global_262145.f_26402)
				{
					Global_2460613 = 1;
				}
			}
			Var5 = func_106(iParam1);
			Var5.f_1 = func_105(iParam1, iParam3, iParam4);
			if (func_104(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (NETWORKCASH::NETWORK_GET_VC_WALLET_BALANCE(-1) + NETWORKCASH::NETWORK_GET_VC_BANK_BALANCE());
			Var5.f_6 = Global_1696044;
			unk_0x0999F3F090EC5012(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 10:
			return 1;
			break;
	}
	return 0;
}

int func_105(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam2 > -1)
				{
					iVar0 = (19 + iParam2);
				}
				else
				{
					iVar0 = 19;
				}
				break;
			
			case 1:
				iVar0 = 21;
				break;
			
			case 4:
				iVar0 = 22;
				break;
			
			case 5:
				iVar0 = 23;
				break;
			
			case 6:
				iVar0 = 24;
				break;
			
			case 7:
				iVar0 = 25;
				break;
			
			case 9:
				iVar0 = 26;
				break;
			
			case 10:
				if (iParam2 > -1)
				{
					iVar0 = (27 + iParam2);
				}
				else
				{
					iVar0 = 27;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 2)
				{
					iVar0 = 1;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 2;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 3;
				}
				break;
			
			case 1:
				if (iParam0 == 2)
				{
					iVar0 = 4;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 5;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				if (iParam0 == 2)
				{
					iVar0 = 7;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 8;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 9;
				}
				break;
			
			case 3:
				if (iParam0 == 2)
				{
					iVar0 = 10;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 11;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 12;
				}
				break;
			
			case 4:
				if (iParam0 == 2)
				{
					iVar0 = 13;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 14;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 15;
				}
				break;
			
			case 5:
				if (iParam0 == 2)
				{
					iVar0 = 16;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 17;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 18;
				}
				break;
			}
	}
	return iVar0;
}

int func_106(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -2043662707;
			break;
		
		case 1:
			iVar0 = -1612659516;
			break;
		
		case 2:
			iVar0 = -1304782539;
			break;
		
		case 3:
			iVar0 = 1196301501;
			break;
		
		case 4:
			iVar0 = -1964607937;
			break;
		
		case 5:
			iVar0 = -2125268726;
			break;
		
		case 6:
			iVar0 = 1138851024;
			break;
		
		case 7:
			iVar0 = 1848798713;
			break;
		
		case 8:
			iVar0 = 1196301501;
			break;
		
		case 9:
			iVar0 = -1297103179;
			break;
		
		case 10:
			iVar0 = 1754365518;
			break;
	}
	return iVar0;
}

void func_107(int iParam0)
{
	iVar0 = func_113();
	iVar1 = NETWORK::_GET_POSIX_TIME();
	iVar2 = func_111();
	if (iVar0 == 0)
	{
		func_110();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26397)
	{
		func_109();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_26399)
	{
		func_108(-1274895349, Global_262145.f_26399);
		func_109();
		Global_2460613 = 1;
	}
	else
	{
		func_108(-1274895349, (iVar2 + iParam0));
	}
}

void func_108(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

void func_109()
{
	func_110();
}

void func_110()
{
	func_108(2026157635, NETWORK::_GET_POSIX_TIME());
}

int func_111()
{
	return func_112(-1274895349);
}

int func_112(int iParam0)
{
	uVar0 = iParam0;
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_113()
{
	return func_112(2026157635);
}

void func_114(int iParam0)
{
	iVar0 = func_119();
	iVar1 = NETWORK::_GET_POSIX_TIME();
	iVar2 = func_118();
	if (iVar0 == 0)
	{
		func_117();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26396)
	{
		func_116();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_115()
	{
		func_108(-1127742296, func_115());
		func_116();
	}
	else
	{
		func_108(-1127742296, (iVar2 + iParam0));
	}
}

int func_115()
{
	if (func_328(PLAYER::PLAYER_ID()))
	{
		return Global_262145.f_26191;
	}
	return Global_262145.f_26190;
}

void func_116()
{
	func_117();
}

void func_117()
{
	func_108(67083818, NETWORK::_GET_POSIX_TIME());
}

int func_118()
{
	return func_112(-1127742296);
}

int func_119()
{
	return func_112(67083818);
}

void func_120()
{
	if (GAMEPLAY::IS_BIT_SET(Global_1696079, 6))
	{
		GAMEPLAY::SET_BIT(&Global_1696079, 9);
		func_366(&Global_1696082, 0, 0);
	}
}

void func_121()
{
	if (func_122())
	{
		GAMEPLAY::SET_BIT(&Global_1696079, 1);
	}
}

bool func_122()
{
	return (GAMEPLAY::IS_BIT_SET(Global_1696079, 6) || GAMEPLAY::IS_BIT_SET(Global_1696079, 5));
}

void func_123(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	GAMEPLAY::SET_BIT(&Global_1696079, 6);
	Global_1696080 = iParam0;
	Global_1696081 = iParam1;
}

bool func_124(var uParam0, int iParam1, int iParam2)
{
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_104(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_143())
	{
		if (*uParam0 == 0)
		{
			if (func_142() != -1)
			{
				return 0;
			}
			iVar3 = 657241867;
			iVar4 = func_106(iParam1);
			iVar5 = -22148635;
			if (func_146(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_138(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_138(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_132())
					{
						*uParam0 = 1;
					}
					else
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 3;
				}
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else if (*uParam0 == 1)
		{
			if (func_131(func_142()))
			{
				if (func_130(func_142()) == 2)
				{
					UNK3::_NETWORK_SHOP_SET_TELEMETRY_NONCE_SEED(func_129(func_142()));
					if (func_146(iParam1))
					{
						unk_0x3BD101471C7F9EEC(iVar0, iParam2);
					}
					else
					{
						unk_0xED44897CB336F480(iVar0, iParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				func_125(func_142());
			}
		}
	}
	else if (iVar0 > 0 || NETWORKCASH::NETWORK_CAN_SPEND_MONEY(iVar0, 0, 1, 0, -1, 0))
	{
		if (func_146(iParam1))
		{
			unk_0x3BD101471C7F9EEC(iVar0, iParam2);
		}
		else
		{
			unk_0xED44897CB336F480(iVar0, iParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

void func_125(int iParam0)
{
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_128(iParam0))
		{
			if (!bVar0)
			{
				unk_0xFA336E7F40C0A0D0();
			}
		}
		else if (!bVar0)
		{
			UNK3::_NETWORK_SHOP_END_SERVICE(Global_4263954[iParam0].f_66);
		}
		func_126(&(Global_4263954[iParam0]));
	}
}

void func_126(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_127(&(uParam0->f_14));
	func_127(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_127(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_128(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

int func_129(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66;
	}
	return -1;
}

int func_130(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2;
	}
	return 0;
}

int func_131(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2 != 1;
	}
	return 0;
}

int func_132()
{
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_142();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!UNK3::_0xB24F0944DA203D9E(func_137()) || UNK3::_0x810E8431C0614BF9())
		{
			if (func_136(Global_4263954[iVar2].f_66.f_6, Global_4263954[iVar2].f_66.f_4, Global_4263954[iVar2].f_66.f_1) == 1)
			{
				Global_4264536 = 1;
			}
			return 0;
		}
		if (Global_2461839)
		{
			if (Global_4263954[iVar2].f_66.f_6 == 1067618600 || Global_4263954[iVar2].f_66.f_6 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_129(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || UNK3::_NETWORK_SHOP_CHECKOUT_START(iVar3))
		{
			Global_4263954[iVar2].f_66.f_13 = 1;
			Global_4263954[iVar2].f_66.f_12 = 0;
			Global_4263954[iVar2].f_66.f_14 = GAMEPLAY::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4263954[iVar2].f_66.f_8 = 1;
				Global_4263954[iVar2].f_66.f_12 = 1;
			}
			Global_4263954[iVar2].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_133(Global_4263954[iVar2], iVar2);
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	return 0;
}

void func_133(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = 285918879;
	Var0.y = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_135(Var0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_134();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_134()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_135(int iParam0)
{
	if (iParam0 != -1)
	{
		GAMEPLAY::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_136(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
				return 1;
			
			case 1775876058:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_137()
{
	return Global_1312745;
}

int func_138(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!UNK3::_0xB24F0944DA203D9E(func_137()) || UNK3::_0x810E8431C0614BF9())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_142();
	if (iVar1 == -1)
	{
		if (!func_140(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_139(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4263954[iVar1].f_66.f_1 = Var2.f_2;
		Global_4263954[iVar1].f_66.f_15 = Var2;
		Global_4263954[iVar1].f_66.f_16 = Var2.f_1;
		if (bVar0 || UNK3::_NETWORK_SHOP_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_140(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!UNK3::_0xB24F0944DA203D9E(func_137()) || UNK3::_0x810E8431C0614BF9())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4263954[iVar1].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4263954[iVar1].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (UNK3::_NETWORK_SHOP_BASKET_END())
		{
			unk_0xFA336E7F40C0A0D0();
		}
	}
	if (bVar0 || UNK3::_NETWORK_SHOP_BASKET_START(&uVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_141(uVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_141(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_143())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0].f_66.f_2 = 1;
			Global_4263954[iVar0].f_66.f_1 = iParam5;
			Global_4263954[iVar0].f_66.f_3 = iParam1;
			Global_4263954[iVar0].f_66.f_4 = iParam2;
			Global_4263954[iVar0].f_66.f_7 = uParam3;
			Global_4263954[iVar0].f_66.f_5 = 0;
			Global_4263954[iVar0].f_66 = uParam0;
			Global_4263954[iVar0].f_66.f_6 = iParam4;
			Global_4263954[iVar0].f_66.f_11 = uParam8;
			Global_4263954[iVar0].f_66.f_10 = uParam7;
			Global_4263954[iVar0].f_66.f_13 = iParam9;
			Global_4263954[iVar0].f_66.f_12 = 0;
			Global_4263954[iVar0].f_66.f_14 = GAMEPLAY::GET_FRAME_COUNT();
			Global_4263954[iVar0].f_66.f_18 = 0;
			Global_4264521 = 0;
			if (bParam6)
			{
				Global_4263954[iVar0].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_133(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_142()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_129(iVar0) != 2147483647)
		{
			if (func_128(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_143()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_144()
{
	iVar0 = (func_115() - func_118());
	iVar1 = (Global_262145.f_26395 - func_398());
	iVar2 = func_145();
	if (iVar0 > iVar1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 > iVar2)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_145()
{
	iVar0 = func_115();
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (unk_0x8968D4D8C6C40C11())
	{
		if (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(iVar0, 0, 1, 0, -1, 0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (NETWORKCASH::NETWORK_GET_VC_BANK_BALANCE() + NETWORKCASH::NETWORK_GET_VC_WALLET_BALANCE(-1));
		}
	}
	else if (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(iVar0, 0, 1, 0, -1, 1))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = unk_0x5D1E75F91C07DEE5();
	}
	return iVar1;
}

int func_146(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

char* func_147()
{
	if (func_148())
	{
		switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "female_reaction_terrible_var_01";
			
			case 1:
				return "female_reaction_terrible_var_02";
			
			case 2:
				return "female_reaction_terrible_var_03";
			
			case 3:
				return "female_reaction_terrible_var_04";
			
			case 4:
				return "female_reaction_terrible_var_05";
			
			default:
		}
	}
	else
	{
		switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_terrible_var_01";
			
			case 1:
				return "reaction_terrible_var_02";
			
			case 2:
				return "reaction_terrible_var_03";
			
			case 3:
				return "reaction_terrible_var_04";
			}
		
		default:
	}
	return "";
}

bool func_148()
{
	return func_57(PLAYER::PLAYER_ID());
}

char* func_149()
{
	if (func_148())
	{
		switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "female_reaction_great_var_01";
			
			case 1:
				return "female_reaction_great_var_02";
			
			case 2:
				return "female_reaction_great_var_03";
			
			case 3:
				return "female_reaction_great_var_04";
			
			case 4:
				return "female_reaction_great_var_05";
			
			default:
		}
	}
	else
	{
		switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_great_var_01";
			
			case 1:
				return "reaction_great_var_02";
			
			case 2:
				return "reaction_great_var_03";
			
			case 3:
				return "reaction_great_var_04";
			}
		
		default:
	}
	return "";
}

char* func_150(int iParam0)
{
	if (func_148())
	{
		if ((func_417(PLAYER::PLAYER_ID()) || func_380(Local_1038.f_18) == 2) || func_380(Local_1038.f_18) == 3)
		{
			if (iParam0 > 10000)
			{
				switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
						return "female_reaction_good_var_01";
					
					case 1:
						return "female_reaction_good_var_02";
					
					case 2:
						return "female_reaction_good_var_03";
					
					case 3:
						return "female_reaction_good_var_04";
					
					default:
				}
			}
			else if (iParam0 > -10000)
			{
				switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 7))
				{
					case 0:
						return "female_reaction_impartial_var_01";
					
					case 1:
						return "female_reaction_impartial_var_02";
					
					case 2:
						return "female_reaction_impartial_var_03";
					
					case 3:
						return "female_reaction_impartial_var_04";
					
					case 4:
						return "female_reaction_impartial_var_05";
					
					case 5:
						return "female_reaction_impartial_var_06";
					
					case 6:
						return "female_reaction_impartial_var_07";
					
					default:
				}
			}
			else
			{
				switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
						return "female_reaction_bad_var_01";
					
					case 1:
						return "female_reaction_bad_var_02";
					
					case 2:
						return "female_reaction_bad_var_03";
					
					case 3:
						return "female_reaction_bad_var_04";
					}
				
				default:
			}
		}
		else if (iParam0 > 1000)
		{
			switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "female_reaction_good_var_01";
				
				case 1:
					return "female_reaction_good_var_02";
				
				case 2:
					return "female_reaction_good_var_03";
				
				case 3:
					return "female_reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > -1000)
		{
			switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 7))
			{
				case 0:
					return "female_reaction_impartial_var_01";
				
				case 1:
					return "female_reaction_impartial_var_02";
				
				case 2:
					return "female_reaction_impartial_var_03";
				
				case 3:
					return "female_reaction_impartial_var_04";
				
				case 4:
					return "female_reaction_impartial_var_05";
				
				case 5:
					return "female_reaction_impartial_var_06";
				
				case 6:
					return "female_reaction_impartial_var_07";
				
				default:
			}
		}
		else
		{
			switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "female_reaction_bad_var_01";
				
				case 1:
					return "female_reaction_bad_var_02";
				
				case 2:
					return "female_reaction_bad_var_03";
				
				case 3:
					return "female_reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if ((func_417(PLAYER::PLAYER_ID()) || func_380(Local_1038.f_18) == 2) || func_380(Local_1038.f_18) == 3)
	{
		if (iParam0 > 10000)
		{
			switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "reaction_good_var_01";
				
				case 1:
					return "reaction_good_var_02";
				
				case 2:
					return "reaction_good_var_03";
				
				case 3:
					return "reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > -10000)
		{
			switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 8))
			{
				case 0:
					return "reaction_impartial_var_01";
				
				case 1:
					return "reaction_impartial_var_02";
				
				case 2:
					return "reaction_impartial_var_03";
				
				case 3:
					return "reaction_impartial_var_04";
				
				case 4:
					return "reaction_impartial_var_05";
				
				case 5:
					return "reaction_impartial_var_06";
				
				case 6:
					return "reaction_impartial_var_07";
				
				case 7:
					return "reaction_impartial_var_08";
				
				default:
			}
		}
		else
		{
			switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "reaction_bad_var_01";
				
				case 1:
					return "reaction_bad_var_02";
				
				case 2:
					return "reaction_bad_var_03";
				
				case 3:
					return "reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if (iParam0 > 1000)
	{
		switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_good_var_01";
			
			case 1:
				return "reaction_good_var_02";
			
			case 2:
				return "reaction_good_var_03";
			
			case 3:
				return "reaction_good_var_04";
			
			default:
		}
	}
	else if (iParam0 > -1000)
	{
		switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 8))
		{
			case 0:
				return "reaction_impartial_var_01";
			
			case 1:
				return "reaction_impartial_var_02";
			
			case 2:
				return "reaction_impartial_var_03";
			
			case 3:
				return "reaction_impartial_var_04";
			
			case 4:
				return "reaction_impartial_var_05";
			
			case 5:
				return "reaction_impartial_var_06";
			
			case 6:
				return "reaction_impartial_var_07";
			
			case 7:
				return "reaction_impartial_var_08";
			
			default:
		}
	}
	else
	{
		switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

void func_151(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (func_154(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_153(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_152(3, iVar0);
		Global_1378678.f_2764[iVar0] = uParam0;
		StringCopy(&(Global_1378678.f_2764.f_11[iVar0]), sParam1, 64);
		Global_1378678.f_2764.f_183[iVar0] = iParam3;
		Global_1378678.f_2764.f_172[iVar0] = iParam2;
		Global_1378678.f_2764.f_205[iVar0] = iParam4;
		Global_1378678.f_2764.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1378678.f_2764.f_259[iVar0]), sParam6, 64);
		Global_1378678.f_2764.f_420[iVar0] = iParam7;
		Global_1378678.f_2764.f_453[iVar0] = iParam8;
		Global_1378678.f_2764.f_431[iVar0] = iParam9;
		Global_1378678.f_2764.f_442[iVar0] = iParam10;
		Global_1378678.f_2764.f_464[iVar0] = iParam11;
		Global_1378678.f_2764.f_475[iVar0] = iParam12;
		Global_1378678.f_2764.f_486[iVar0] = iParam13;
		Global_1378678.f_2764.f_497[iVar0] = iParam14;
	}
}

void func_152(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_153(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1378678.f_6293[iParam0], iParam1);
}

int func_154(var uParam0)
{
	if (GAMEPLAY::IS_STRING_NULL(uParam0))
	{
		return 1;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "") || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_155(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_143() && *uParam1 == 1)
	{
		bParam3 = false;
	}
	if (!bParam3 || func_157(iParam0))
	{
		return func_156(iParam0, 2, uParam1, iParam2, -1, -1);
	}
	else
	{
		*uParam1 = 3;
	}
	return 1;
}

int func_156(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam0 <= 0)
	{
	}
	else if (func_146(iParam1))
	{
	}
	else
	{
		iVar0 = func_398();
		iVar1 = (iVar0 - iParam0);
		if (iVar1 < 0 && (!func_143() || *uParam2 != 1))
		{
			iVar1 = iVar0;
			iParam0 = iVar0;
		}
		if (func_124(uParam2, iParam1, iParam0))
		{
			iVar2 = (Global_1696044 - func_398());
			if (iParam1 == 1)
			{
				Global_2460612 = 1;
			}
			else if (iVar2 >= Global_262145.f_26404)
			{
				Global_2460613 = 1;
			}
			func_123(iVar2, 0);
			func_121();
			func_120();
			Global_1696044 = (Global_1696044 - iVar2);
			Var3 = func_106(iParam1);
			Var3.f_1 = func_105(iParam1, iParam3, iParam4);
			if (func_104(iParam1))
			{
				Var3.f_2 = iVar2;
			}
			else
			{
				Var3.f_2 = 0;
			}
			Var3.f_3 = iVar2;
			Var3.f_4 = iParam1;
			Var3.f_5 = (NETWORKCASH::NETWORK_GET_VC_WALLET_BALANCE(-1) + NETWORKCASH::NETWORK_GET_VC_BANK_BALANCE());
			Var3.f_6 = Global_1696044;
			Var3.f_7 = iParam5;
			unk_0x0999F3F090EC5012(&Var3);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_157(int iParam0)
{
	if (func_333())
	{
		return 0;
	}
	iVar0 = func_398();
	if (iVar0 < iParam0)
	{
		return 0;
	}
	return 1;
}

void func_158(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 0, -1);
}

void func_159(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_153(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_152(7, iVar0);
		Global_1378678.f_4562[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_4562.f_11[iVar0]), sParam1, 64);
		Global_1378678.f_4562.f_172[iVar0] = iParam2;
		Global_1378678.f_4562.f_216[iVar0] = iParam3;
		Global_1378678.f_4562.f_183[iVar0] = iParam4;
		Global_1378678.f_4562.f_194[iVar0] = iParam5;
		Global_1378678.f_4562.f_249[iVar0] = iParam6;
		Global_1378678.f_4562.f_260[iVar0] = iParam7;
		Global_1378678.f_4562.f_205[iVar0] = iParam8;
		Global_1378678.f_4562.f_314[iVar0] = iParam9;
		Global_1378678.f_4562.f_325[iVar0] = iParam10;
		Global_1378678.f_4562.f_357[iVar0] = iParam11;
		Global_1378678.f_4562.f_238[iVar0] = iParam12;
		Global_1378678.f_4562.f_271[iVar0] = iParam13;
		Global_1378678.f_4562.f_368[iVar0] = iParam14;
		Global_1378678.f_4562.f_379[iVar0] = iParam15;
		Global_1378678.f_4562.f_390[iVar0] = iParam16;
		Global_1378678.f_4562.f_227[iVar0] = iParam17;
	}
}

int func_160(int iParam0)
{
	if ((Local_749[PLAYER::PLAYER_ID()].f_2 == 2 || Local_749[PLAYER::PLAYER_ID()].f_2 == 3) || func_417(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_161(int iParam0)
{
	Local_1038.f_797 = iParam0;
}

void func_162()
{
	CONTROLS::DISABLE_CONTROL_ACTION(2, 209, 1);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 209);
	if (!GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 3))
	{
		if ((CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 209) && !CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, 210)) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 1);
			GAMEPLAY::SET_BIT(&(Local_1038.f_20), 3);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_380(Local_1038.f_18) == 2 || func_380(Local_1038.f_18) == 3) || func_417(PLAYER::PLAYER_ID()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar0, 0);
		if (func_296(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar0))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 4))
			{
				func_295(0, 0);
				func_293(1, sVar0, sVar0);
				func_292("TCP_HANDS");
				func_180(1, 2, 2, 2, 1);
				func_179(1, 1, 1, 1, 0);
				iVar1 = 0;
				func_175(iVar1, "TCP_HAND1", 0, 1, 0, 0);
				func_175(iVar1, "TCP_10", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_9", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_8", 1, 1, 0, 0);
				func_163(59, 0);
				iVar1 = 1;
				func_175(iVar1, "TCP_HAND2", 0, 1, 0, 0);
				func_175(iVar1, "TCP_5", 1, 1, 0, 0);
				func_163(57, 0);
				func_175(iVar1, "TCP_5", 1, 1, 0, 0);
				func_163(58, 0);
				func_175(iVar1, "TCP_5", 1, 1, 0, 0);
				func_163(56, 0);
				iVar1 = 2;
				func_175(iVar1, "TCP_HAND3", 0, 1, 0, 0);
				func_175(iVar1, "TCP_2", 1, 1, 0, 0);
				func_163(57, 0);
				func_175(iVar1, "TCP_3", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_4", 1, 1, 0, 0);
				func_163(57, 0);
				iVar1 = 3;
				func_175(iVar1, "TCP_HAND4", 0, 1, 0, 0);
				func_175(iVar1, "TCP_A", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_Q", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_9", 1, 1, 0, 0);
				func_163(59, 0);
				iVar1 = 4;
				func_175(iVar1, "TCP_HAND5", 0, 1, 0, 0);
				func_175(iVar1, "TCP_K", 1, 1, 0, 0);
				func_163(57, 0);
				func_175(iVar1, "TCP_K", 1, 1, 0, 0);
				func_163(59, 0);
				func_175(iVar1, "TCP_7", 1, 1, 0, 0);
				func_163(56, 0);
				iVar1 = 5;
				func_175(iVar1, "TCP_HAND6", 0, 1, 0, 0);
				func_175(iVar1, "TCP_A", 1, 1, 0, 0);
				func_163(56, 0);
				func_175(iVar1, "TCP_7", 1, 1, 0, 0);
				func_163(57, 0);
				func_175(iVar1, "TCP_3", 1, 1, 0, 0);
				func_163(59, 0);
				func_291(-1, 1, 1);
				GAMEPLAY::SET_BIT(&(Local_1038.f_20), 4);
			}
			func_261(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		if (CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
			func_258(1, -1);
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
			iLocal_1942 = 1;
			Local_1038.f_20 = 0;
			GAMEPLAY::SET_BIT(&(Local_1038.f_20), 2);
		}
	}
}

void func_163(int iParam0, bool bParam1)
{
	if (Global_22350.f_5224 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	Global_22350.f_4433[Global_22350.f_5224] = iParam0;
	Global_22350.f_5224++;
	Global_22350.f_2124[Global_22350.f_5742][Global_22350.f_5743] = 4;
	Global_22350.f_5743++;
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_172();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_165(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_164();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

float func_164()
{
	iVar0 = 0;
	while (iVar0 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)] != 0)
		{
			if (func_165(Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)], 1, 0, &fVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

int func_165(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	StringCopy(&cVar0, func_171(iParam0), 64);
	StringCopy(&cVar16, func_168(iParam0, bParam1), 64);
	if (GAMEPLAY::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar32, &iVar33);
			fVar35 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_167())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_167())
			{
				fVar34 = 1f;
			}
			if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-892862129) > 0)
			{
				GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
			}
			iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar32) / fVar34));
			iVar33 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) / fVar34));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
		}
		Var37 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		Var37.x = (Var37.x * (func_166(iParam0) / fVar34));
		Var37.y = (Var37.y * (func_166(iParam0) / fVar34));
		if (!bParam2)
		{
			Var37.x = (Var37.x - 2f);
			Var37.y = (Var37.y - 2f);
		}
		if (iParam0 == 30)
		{
			Var37.x = 288f;
			Var37.y = 106f;
		}
		if (iParam0 == 29 && GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_7029[29])) == -1487683087)
		{
			Var37.x = 106f;
			Var37.y = 106f;
		}
		*fParam3 = ((Var37.x / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.y / IntToFloat(iVar33)) / (Var37.x / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22349)
			{
				*fParam4 = (*fParam4 * (Global_22349 / *fParam3));
				*fParam3 = Global_22349;
			}
		}
		return 1;
	}
	return 0;
}

float func_166(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_167()
{
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_168(int iParam0, bool bParam1)
{
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_7029[iParam0])))
	{
		if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_7029[iParam0])) == -1487683087)
		{
			Var19 = { func_170(PLAYER::PLAYER_ID()) };
			if (NETWORK::_0x5835D9CD92E83184(&Var19, &uVar3))
			{
				return func_169(&uVar3);
			}
		}
		else
		{
			return func_169(&(Global_22350.f_7029[iParam0]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_169(var uParam0)
{
	return uParam0;
}

struct<13> func_170(int iParam0)
{
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_171(int iParam0)
{
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_6020[iParam0])))
	{
		if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_6020[iParam0])) == -1487683087)
		{
			Var16 = { func_170(PLAYER::PLAYER_ID()) };
			NETWORK::_0x5835D9CD92E83184(&Var16, &uVar0);
			return func_169(&uVar0);
		}
		else
		{
			return func_169(&(Global_22350.f_6020[iParam0]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

float func_172()
{
	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 1)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 8)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_173(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
	{
		UI::_SET_TEXT_ENTRY_FOR_WIDTH(&(Global_22350.f_73[Global_22350.f_5742]));
	}
	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 1)
		{
			iVar8++;
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8)]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 8)
		{
			iVar8++;
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8)]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 2)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[((Global_22350.f_5222 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 3)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[((Global_22350.f_5223 - iVar4) + iVar10)], Global_22350.f_4304[((Global_22350.f_5223 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 5)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 6)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 7)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 9)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
	{
		fVar0 = UI::_GET_TEXT_SCREEN_WIDTH(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)] != 0)
		{
			func_165(Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)], 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_173(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (bParam2)
	{
		if (bParam3)
		{
			func_174(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					UI::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				UI::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				UI::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			UI::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			UI::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			UI::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			UI::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		UI::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		UI::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	UI::SET_TEXT_SCALE(0f, 0.35f);
	UI::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		UI::SET_TEXT_SCALE(0f, 0.425f);
		UI::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		UI::SET_TEXT_SCALE(0f, 0.425f);
		UI::SET_TEXT_FONT(6);
	}
	else
	{
		UI::SET_TEXT_FONT(0);
	}
	UI::SET_TEXT_WRAP(0f, 1f);
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_174(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_175(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (Global_22350.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22350.f_5218 >= 128)
	{
		return;
	}
	if (Global_22350.f_5220 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 < Global_22350.f_5741)
	{
		return;
	}
	if (Global_22350.f_5218 != iParam0)
	{
		Global_22350.f_5218 = iParam0;
		Global_22350.f_5219 = 0;
	}
	iVar0 = Global_22350.f_5056[Global_22350.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22350.f_5219 < 4 && iVar0 != 1)
		{
			Global_22350.f_5219++;
			iVar0 = Global_22350.f_5056[Global_22350.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22350.f_73[Global_22350.f_5220]), sParam1, 24);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1) && !UI::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_22350.f_1610[Global_22350.f_5220] = bParam3;
	Global_22350.f_1867[Global_22350.f_5220] = iParam4;
	Global_22350.f_5220++;
	if (!bParam3)
	{
		func_178(Global_22350.f_5218, 1);
	}
	else
	{
		func_178(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_177(&(Global_22350.f_73[Global_22350.f_5220]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_165(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22350.f_5068[Global_22350.f_5219])
		{
			Global_22350.f_5068[Global_22350.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_176(&(Global_22350.f_73[Global_22350.f_5220]));
			if (fVar4 > Global_22350.f_5745[iParam0])
			{
				Global_22350.f_5745[iParam0] = fVar4;
			}
		}
	}
	GAMEPLAY::SET_BIT(&(Global_22350.f_5089[iParam0]), Global_22350.f_5219);
	Global_22350.f_5219++;
	Global_22350.f_5744 = 1;
	Global_22350.f_5742 = (Global_22350.f_5220 - 1);
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = iParam2;
}

float func_176(char* sParam0)
{
	if (!UI::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_177(char* sParam0)
{
	if (!GAMEPLAY::IS_STRING_NULL(sParam0))
	{
		if (GAMEPLAY::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_173(0, 1, 0, 0, 0, 0, 0);
	UI::_SET_TEXT_ENTRY_FOR_WIDTH(sParam0);
	return UI::_GET_TEXT_SCREEN_WIDTH(1);
}

void func_178(int iParam0, bool bParam1)
{
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_179(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5056[0] = iParam0;
	Global_22350.f_5056[1] = iParam1;
	Global_22350.f_5056[2] = iParam2;
	Global_22350.f_5056[3] = iParam3;
	Global_22350.f_5056[4] = iParam4;
	Global_22350.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_22350.f_5226++;
	}
}

void func_180(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5083[0] = iParam0;
	Global_22350.f_5083[1] = iParam1;
	Global_22350.f_5083[2] = iParam2;
	Global_22350.f_5083[3] = iParam3;
	Global_22350.f_5083[4] = iParam4;
}

void func_181()
{
	if (GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 2))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_1038.f_20), 2);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(2, 210, 1);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 210);
	if (!GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 0))
	{
		if ((CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 210) && !CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, 209)) && !GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 3))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 1);
			GAMEPLAY::SET_BIT(&(Local_1038.f_20), 0);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_380(Local_1038.f_18) == 2 || func_380(Local_1038.f_18) == 3) || func_417(PLAYER::PLAYER_ID()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar0, 0);
		if (func_296(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar0))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 1))
			{
				func_295(0, 0);
				func_293(1, sVar0, sVar0);
				func_292("TCP_RULES");
				func_185(1, iLocal_1942, 6);
				func_184(1, 1, 1, 1, 1);
				func_291(-1, 1, 1);
				func_290(func_183(iLocal_1942), 0, 0);
				func_289(func_182(iLocal_1942));
				GAMEPLAY::SET_BIT(&(Local_1038.f_20), 1);
			}
			func_261(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		if (CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
			func_258(1, -1);
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
			iLocal_1942 = 1;
			Local_1038.f_20 = 0;
			GAMEPLAY::SET_BIT(&(Local_1038.f_20), 2);
		}
		else if (CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 190))
		{
			iLocal_1942++;
			if (iLocal_1942 > 6)
			{
				iLocal_1942 = 1;
			}
			GAMEPLAY::CLEAR_BIT(&(Local_1038.f_20), 1);
		}
		else if (CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 189))
		{
			iLocal_1942 = (iLocal_1942 - 1);
			if (iLocal_1942 < 1)
			{
				iLocal_1942 = 6;
			}
			GAMEPLAY::CLEAR_BIT(&(Local_1038.f_20), 1);
		}
	}
}

char* func_182(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "TCP_RULE_1";
		
		case 2:
			return "TCP_RULE_2";
		
		case 3:
			return "TCP_RULE_3";
		
		case 4:
			return "TCP_RULE_4";
		
		case 5:
			return "TCP_RULE_5";
		
		case 6:
			if ((func_380(Local_1038.f_18) == 2 || func_380(Local_1038.f_18) == 3) || func_417(PLAYER::PLAYER_ID()))
			{
				return "TCP_RULE_6b";
			}
			else
			{
				return "TCP_RULE_6a";
			}
			break;
	}
	return "";
}

char* func_183(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "TCP_RULE_1T";
		
		case 2:
			return "TCP_RULE_2T";
		
		case 3:
			return "TCP_RULE_3T";
		
		case 4:
			return "TCP_RULE_4T";
		
		case 5:
			return "TCP_RULE_5T";
		
		case 6:
			if ((func_380(Local_1038.f_18) == 2 || func_380(Local_1038.f_18) == 3) || func_417(PLAYER::PLAYER_ID()))
			{
				return "TCP_RULE_6Tb";
			}
			else
			{
				return "TCP_RULE_6Ta";
			}
			break;
	}
	return "";
}

void func_184(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5075[0] = iParam0;
	Global_22350.f_5075[1] = iParam1;
	Global_22350.f_5075[2] = iParam2;
	Global_22350.f_5075[3] = iParam3;
	Global_22350.f_5075[4] = iParam4;
}

void func_185(int iParam0, int iParam1, int iParam2)
{
	Global_22350.f_5735 = iParam0;
	Global_22350.f_5736 = iParam1;
	Global_22350.f_5737 = iParam2;
}

void func_186(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_187(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 1 || CONTROLS::_0x6CD79468A1E595C6(2))
	{
		*uParam2 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			if (GAMEPLAY::IS_PC_VERSION())
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(0);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "CLEAR_ALL");
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		func_193(uParam2);
	}
	if (Global_1315716 < 2)
	{
		func_192(1);
	}
	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			*uParam0 = unk_0x67D02A194A2FC2BD("instructional_buttons");
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			if (GAMEPLAY::IS_PC_VERSION())
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_693)
			{
				if (GAMEPLAY::IS_BIT_SET(uParam2->f_689, iVar0))
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
					if (!GAMEPLAY::IS_BIT_SET(uParam2->f_690, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0].f_54;
						iVar2 = uParam2->f_1[iVar0].f_55;
						iVar3 = uParam2->f_1[iVar0].f_56;
						func_191(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar2, 1));
						if (iVar3 < 361)
						{
							func_191(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar3, 1));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0].f_54;
						uVar5 = uParam2->f_1[iVar0].f_55;
						func_191(CONTROLS::_0x80C2FD58D720C801(iVar4, uVar5, 1));
					}
					if (GAMEPLAY::IS_BIT_SET(uParam2->f_686, iVar0))
					{
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(uParam2->f_1[iVar0].f_32));
						if (uParam2->f_694 == iVar0)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[iVar0].f_36, 70);
						}
						else
						{
							UI::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0].f_36);
							if (GAMEPLAY::IS_BIT_SET(uParam2->f_687, iVar0))
							{
								UI::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0].f_37);
							}
						}
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					}
					else if (GAMEPLAY::IS_BIT_SET(uParam2->f_688, iVar0))
					{
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(uParam2->f_1[iVar0].f_32));
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[iVar0].f_38));
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					}
					else
					{
						func_190(&(uParam2->f_1[iVar0].f_32));
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						if (GAMEPLAY::IS_BIT_SET(uParam2->f_691, iVar0))
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam2->f_1[iVar0].f_55);
						}
						else
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(0);
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(361);
						}
					}
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
					func_191(&(uParam2->f_1[iVar0]));
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[iVar0].f_16)))
					{
						func_191(&(uParam2->f_1[iVar0].f_16));
					}
					if (GAMEPLAY::IS_BIT_SET(uParam2->f_686, iVar0))
					{
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(uParam2->f_1[iVar0].f_32));
						if (uParam2->f_694 == iVar0)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[iVar0].f_36, 70);
						}
						else
						{
							UI::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0].f_36);
							if (GAMEPLAY::IS_BIT_SET(uParam2->f_687, iVar0))
							{
								UI::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0].f_37);
							}
						}
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					}
					else if (GAMEPLAY::IS_BIT_SET(uParam2->f_688, iVar0))
					{
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(uParam2->f_1[iVar0].f_32));
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[iVar0].f_38));
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					}
					else
					{
						func_190(&(uParam2->f_1[iVar0].f_32));
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(0);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(361);
					}
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				iVar0++;
			}
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_MAX_WIDTH");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(uParam2->f_699);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_189(*uParam0, uParam1);
	}
	func_188();
}

void func_188()
{
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_189(var uParam0, var uParam1)
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_190(var uParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(uParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

void func_191(char* sParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(sParam0);
}

void func_192(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_193(var uParam0)
{
	uParam0->f_692 = 0;
}

int func_194(var uParam0)
{
	return uParam0->f_692;
}

void func_195(var uParam0, float fParam1)
{
	uParam0->f_699 = fParam1;
}

struct<9> func_196()
{
	Var0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			return 12;
		
		case 1:
		case 5:
		case 9:
		case 13:
			return 13;
		
		case 2:
		case 6:
		case 10:
		case 14:
			return 14;
		
		case 3:
		case 7:
		case 11:
		case 15:
			return 15;
		
		default:
	}
	return 0;
}

void func_198(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0].f_32), sParam2, 16);
	GAMEPLAY::SET_BIT(&(uParam3->f_689), iVar0);
	uParam3->f_1[iVar0].f_54 = iParam0;
	uParam3->f_1[iVar0].f_55 = iParam1;
	GAMEPLAY::SET_BIT(&(uParam3->f_690), iVar0);
	uParam3->f_693++;
}

void func_199(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0].f_32), sParam1, 16);
	uParam2->f_693++;
}

void func_200(var uParam0)
{
	func_201(uParam0);
	uParam0->f_692 = 1;
}

void func_201(var uParam0)
{
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0].f_32), "", 16);
		uParam0->f_1[iVar0].f_36 = 0;
		uParam0->f_1[iVar0].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0].f_38), "", 64);
		uParam0->f_1[iVar0].f_54 = 2;
		uParam0->f_1[iVar0].f_55 = 361;
		uParam0->f_1[iVar0].f_56 = 361;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

var func_202(bool bParam0)
{
	if (func_148())
	{
		if (!bParam0)
		{
			switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 8))
			{
				case 0:
					Local_1038.f_796 = "female_idle_cardgames_var_01";
					break;
				
				case 1:
					Local_1038.f_796 = "female_idle_cardgames_var_02";
					break;
				
				case 2:
					Local_1038.f_796 = "female_idle_cardgames_var_03";
					break;
				
				case 3:
					Local_1038.f_796 = "female_idle_cardgames_var_04";
					break;
				
				case 4:
					Local_1038.f_796 = "female_idle_cardgames_var_05";
					break;
				
				case 5:
					Local_1038.f_796 = "female_idle_cardgames_var_06";
					break;
				
				case 6:
					Local_1038.f_796 = "female_idle_cardgames_var_07";
					break;
				
				case 7:
					Local_1038.f_796 = "female_idle_cardgames_var_08";
					break;
				}
		}
	}
	else if (!bParam0)
	{
		switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 13))
		{
			case 0:
				Local_1038.f_796 = "idle_cardgames_var_01";
				break;
			
			case 1:
				Local_1038.f_796 = "idle_cardgames_var_02";
				break;
			
			case 2:
				Local_1038.f_796 = "idle_cardgames_var_03";
				break;
			
			case 3:
				Local_1038.f_796 = "idle_cardgames_var_04";
				break;
			
			case 4:
				Local_1038.f_796 = "idle_cardgames_var_05";
				break;
			
			case 5:
				Local_1038.f_796 = "idle_cardgames_var_06";
				break;
			
			case 6:
				Local_1038.f_796 = "idle_cardgames_var_07";
				break;
			
			case 7:
				Local_1038.f_796 = "idle_cardgames_var_08";
				break;
			
			case 8:
				Local_1038.f_796 = "idle_cardgames_var_09";
				break;
			
			case 9:
				Local_1038.f_796 = "idle_cardgames_var_10";
				break;
			
			case 10:
				Local_1038.f_796 = "idle_cardgames_var_11";
				break;
			
			case 11:
				Local_1038.f_796 = "idle_cardgames_var_12";
				break;
			
			case 12:
				Local_1038.f_796 = "idle_cardgames_var_13";
				break;
			}
	}
	return Local_1038.f_796;
}

int func_203()
{
	if (func_204() == 0)
	{
		return 1;
	}
	return 0;
}

int func_204()
{
	return Global_1312467.f_18;
}

void func_205(int iParam0)
{
	iVar0 = func_113();
	iVar1 = NETWORK::_GET_POSIX_TIME();
	iVar2 = func_111();
	if (iVar0 == 0)
	{
		func_110();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26397)
	{
		func_109();
		iVar2 = 0;
	}
	if ((iVar2 - iParam0) >= Global_262145.f_26398)
	{
		func_108(-1274895349, Global_262145.f_26398);
		func_109();
		Global_2460613 = 1;
	}
	else
	{
		func_108(-1274895349, (iVar2 - iParam0));
	}
}

int func_206(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(GAMEPLAY::GET_GAME_TIMER(), *uParam0);
}

int func_207()
{
	if ((((Local_1038.f_2 && Local_1038.f_3) && Local_1038.f_4) && Local_1038.f_6) && (!GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 9) && Local_1901.f_14 > 0))
	{
		return 1;
	}
	return 0;
}

int func_208()
{
	if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_209())
	{
		return unk_0xDB663CC9FF3407A9(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()));
	}
	return 0;
}

int func_209()
{
	return -1;
}

void func_210()
{
	if (!CONTROLS::IS_CONTROL_PRESSED(2, 207))
	{
		if (bLocal_1948)
		{
			func_300(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_1948 = false;
	}
	if (!CONTROLS::IS_CONTROL_PRESSED(2, 208))
	{
		if (bLocal_1947)
		{
			func_300(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_1947 = false;
	}
	if ((((Local_749[PLAYER::PLAYER_ID()].f_2 >= 0 && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE()) && !func_337()) && !UI::IS_WARNING_MESSAGE_ACTIVE()) && Local_116.f_576[Local_749[PLAYER::PLAYER_ID()].f_2] < 12)
	{
		if (Local_116.f_410[PLAYER::PLAYER_ID()] > 0 && (GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 4) || GAMEPLAY::IS_BIT_SET(Local_116.f_20[Local_749[PLAYER::PLAYER_ID()].f_2], func_197(Local_749[PLAYER::PLAYER_ID()].f_1))))
		{
			if ((((CONTROLS::IS_CONTROL_PRESSED(2, 207) && !CONTROLS::IS_CONTROL_PRESSED(2, 208)) && !bLocal_1947) && !func_72(&uLocal_1949)) && !CAM::DOES_CAM_EXIST(Local_1038.f_13))
			{
				if (!bLocal_1948)
				{
					if (CAM::_0xEE778F8C7E1142E2(0) == 4)
					{
						bLocal_1943 = true;
					}
					func_300(PLAYER::PLAYER_ID(), 0, 0, 0);
					bLocal_1948 = true;
				}
			}
		}
		else
		{
			if (bLocal_1948)
			{
				func_300(PLAYER::PLAYER_ID(), 0, 256, 0);
			}
			bLocal_1948 = false;
		}
		if (Local_116.f_389[Local_749[PLAYER::PLAYER_ID()].f_2] > 0)
		{
			if ((((CONTROLS::IS_CONTROL_PRESSED(2, 208) && !CONTROLS::IS_CONTROL_PRESSED(2, 207)) && !bLocal_1948) && !func_72(&uLocal_1949)) && !CAM::DOES_CAM_EXIST(Local_1038.f_13))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					func_300(PLAYER::PLAYER_ID(), 0, 0, 0);
				}
				bLocal_1947 = true;
			}
		}
		else
		{
			if (bLocal_1947)
			{
				func_300(PLAYER::PLAYER_ID(), 0, 256, 0);
			}
			bLocal_1947 = false;
		}
	}
	else
	{
		if (bLocal_1948 || bLocal_1947)
		{
			func_300(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_1948 = false;
		bLocal_1947 = false;
	}
	if (bLocal_1947 || bLocal_1948)
	{
		CAM::_0x469F2ECDEC046337(1);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 166, 1);
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (!CAM::DOES_CAM_EXIST(Local_1038.f_13))
		{
			Local_1038.f_13 = CAM::CREATE_CAMERA(26379945, 1);
			CAM::SET_CAM_PARAMS(Local_1038.f_13, func_222(Local_749[PLAYER::PLAYER_ID()].f_1, Local_749[PLAYER::PLAYER_ID()].f_2, bLocal_1947), func_221(Local_749[PLAYER::PLAYER_ID()].f_1, Local_749[PLAYER::PLAYER_ID()].f_2, bLocal_1947), func_220(bLocal_1947), 0, 1, 1, 2);
			CAM::SHAKE_CAM(Local_1038.f_13, "HAND_SHAKE", 0.03f);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
		}
		else if (bLocal_1947)
		{
			if (Local_116.f_5[Local_749[PLAYER::PLAYER_ID()].f_2])
			{
				if (!func_98("TCP_D_HAND", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 0)))
				{
					func_97("TCP_D_HAND", func_101(func_9(&(Local_116.f_389[Local_749[PLAYER::PLAYER_ID()].f_2].f_1), 0, 0), 0));
				}
			}
			else if (!func_335("TCP_D_HAND_D"))
			{
				func_158("TCP_D_HAND_D");
			}
			fVar0 = CAM::GET_CAM_FOV(Local_1038.f_13);
			fVar1 = 50f;
			fVar1 = func_219();
			fVar0 = func_217(fVar0, fVar1, 0.2f, 4);
			CAM::SET_CAM_PARAMS(Local_1038.f_13, func_222(Local_749[PLAYER::PLAYER_ID()].f_1, Local_749[PLAYER::PLAYER_ID()].f_2, bLocal_1947), func_221(Local_749[PLAYER::PLAYER_ID()].f_1, Local_749[PLAYER::PLAYER_ID()].f_2, bLocal_1947), fVar0, 0, 1, 1, 2);
		}
		else if (bLocal_1948)
		{
			if (bLocal_1943)
			{
				fVar2 = CAM::GET_CAM_FOV(Local_1038.f_13);
				fVar3 = 50f;
				Var4 = { CAM::GET_CAM_ROT(Local_1038.f_13, 2) };
				Var7 = { 0f, 0f, 0f };
				Var10 = { -38.1166f, -0.0930717f, -102.613f };
				Var13 = { CAM::GET_CAM_COORD(Local_1038.f_13) };
				Var16 = { 0f, 0f, 0f };
				Var19 = { 966.621f, 32.009f, 116.621f };
				if (Var4.z < 0f)
				{
					Var4.z = (Var4.z + 360f);
				}
				Var19 = { func_216(Local_749[PLAYER::PLAYER_ID()].f_1) };
				Var10 = { func_215(Local_749[PLAYER::PLAYER_ID()].f_1) };
				fVar3 = func_219();
				if (Var10.z < 0f)
				{
					Var10.z = (Var10.z + 360f);
				}
				Var7 = { func_213(Var4, Var10, 0.35f, 4) };
				Var16 = { func_212(Var13, Var19, 0.35f, 4) };
				if (Var7.z > 180f)
				{
					Var7.z = (Var7.z - 360f);
				}
				else if (Var7.z < -180f)
				{
					Var7.z = (Var7.z + 360f);
				}
				if (func_211(Var4, Var10, 10f, 0) && func_211(Var13, Var19, 0.1f, 0))
				{
					fVar2 = func_217(fVar2, fVar3, 0.35f, 4);
				}
				CAM::SET_CAM_PARAMS(Local_1038.f_13, Var16, Var7, fVar2, 0, 1, 1, 2);
			}
			else
			{
				fVar22 = CAM::GET_CAM_FOV(Local_1038.f_13);
				fVar23 = 50f;
				fVar23 = func_219();
				fVar22 = func_217(fVar22, fVar23, 0.35f, 4);
				CAM::SET_CAM_PARAMS(Local_1038.f_13, func_222(Local_749[PLAYER::PLAYER_ID()].f_1, Local_749[PLAYER::PLAYER_ID()].f_2, bLocal_1947), func_221(Local_749[PLAYER::PLAYER_ID()].f_1, Local_749[PLAYER::PLAYER_ID()].f_2, bLocal_1947), fVar22, 0, 1, 1, 2);
			}
		}
	}
	else
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (CAM::DOES_CAM_EXIST(Local_1038.f_13))
		{
			CAM::_0x469F2ECDEC046337(1);
			if (!func_72(&uLocal_1949) && bLocal_1943)
			{
				func_73(&uLocal_1949, 0, 0);
				GRAPHICS::_START_SCREEN_EFFECT("PokerCamTransition", 0, 0);
			}
			else if (func_71(&uLocal_1949, 100, 0) || !bLocal_1943)
			{
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::DESTROY_CAM(Local_1038.f_13, 0);
				UI::CLEAR_HELP(1);
				func_69(&uLocal_1949);
				bLocal_1943 = false;
			}
		}
	}
	if (bLocal_1948 || bLocal_1943)
	{
		if (GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 4) || GAMEPLAY::IS_BIT_SET(Local_116.f_20[Local_749[PLAYER::PLAYER_ID()].f_2], func_197(Local_749[PLAYER::PLAYER_ID()].f_1)))
		{
			if (!func_98("TCP_P_HAND", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 0)))
			{
				func_97("TCP_P_HAND", func_101(func_9(&(Local_116.f_410[PLAYER::PLAYER_ID()].f_1), 0, 0), 0));
			}
		}
	}
}

int func_211(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (GAMEPLAY::ABSF((Param0.x - Param3.x)) <= fParam6)
		{
			if (GAMEPLAY::ABSF((Param0.y - Param3.y)) <= fParam6)
			{
				if (GAMEPLAY::ABSF((Param0.z - Param3.z)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (GAMEPLAY::ABSF((Param0.x - Param3.x)) <= fParam6)
	{
		if (GAMEPLAY::ABSF((Param0.y - Param3.y)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_212(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	Var0.x = func_217(Param0.x, Param3.x, fParam6, iParam7);
	Var0.y = func_217(Param0.y, Param3.y, fParam6, iParam7);
	Var0.z = func_217(Param0.z, Param3.z, fParam6, iParam7);
	return Var0;
}

Vector3 func_213(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	Var0.x = func_214(Param0.x, Param3.x, fParam6, iParam7);
	Var0.y = func_214(Param0.y, Param3.y, fParam6, iParam7);
	Var0.z = func_214(Param0.z, Param3.z, fParam6, iParam7);
	return Var0;
}

float func_214(float fParam0, float fParam1, float fParam2, int iParam3)
{
	fVar0 = GAMEPLAY::ABSF((fParam1 - fParam0));
	if (fVar0 > 180f)
	{
		if (fParam1 > fParam0)
		{
			fParam0 = (fParam0 + 360f);
		}
		else
		{
			fParam1 = (fParam1 + 360f);
		}
	}
	fVar1 = func_217(fParam0, fParam1, fParam2, iParam3);
	fVar2 = 360f;
	if (fVar1 >= 0f && fVar1 <= 360f)
	{
		return fVar1;
	}
	return (fVar1 % fVar2);
}

Vector3 func_215(int iParam0)
{
	Var0 = { func_232(iParam0) };
	Var3 = { -47.16f, 0f, -87.475f };
	return Vector(Var0.z, 0f, 0f) + Var3;
}

Vector3 func_216(int iParam0)
{
	Var0 = { func_232(iParam0) };
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_361(iParam0), Var0.z, 0.198f, 0f, 1.388f);
}

float func_217(float fParam0, float fParam1, float fParam2, int iParam3)
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
			fParam2 = ((-SYSTEM::COS(func_218((3.141593f * fParam2))) / 2f) + 0.5f);
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
			fVar0 = func_217(fParam0, fParam1, fParam2, 0);
			break;
		
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_217(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_218(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_219()
{
	if (bLocal_1947)
	{
		return 37.8425f;
	}
	return 43.3518f;
}

float func_220(bool bParam0)
{
	fVar0 = 44.6546f;
	if (bParam0)
	{
		fVar0 = 40.5607f;
	}
	if (bLocal_1943)
	{
		fVar0 = 50f;
	}
	return fVar0;
}

Vector3 func_221(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Var0 = { -74.52f, 0f, 0f };
	}
	else if (bLocal_1943)
	{
		return CAM::GET_GAMEPLAY_CAM_ROT(2);
	}
	else
	{
		return func_215(iParam0);
	}
	return Vector(func_75(iParam1), 0f, 0f) + Var0;
}

Vector3 func_222(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Var0 = { 0f, -0.02f, 1.62f };
	}
	else if (bLocal_1943)
	{
		return CAM::GET_GAMEPLAY_CAM_COORD();
	}
	else
	{
		return func_216(iParam0);
	}
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_76(iParam1), func_75(iParam1), Var0);
}

void func_223(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_224(int iParam0)
{
	if (Local_116.f_576[iParam0] == 2)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_749[PLAYER::PLAYER_ID()].f_6, 0))
		{
			Local_1038.f_799 = { Local_116.f_168[iParam0] };
			GAMEPLAY::SET_BIT(&(Local_749[PLAYER::PLAYER_ID()].f_6), 0);
		}
	}
	else if (Local_116.f_576[iParam0] > 2 && GAMEPLAY::IS_BIT_SET(Local_749[PLAYER::PLAYER_ID()].f_6, 0))
	{
		if (Local_116.f_410[PLAYER::PLAYER_ID()] > 0)
		{
			if (Local_1038.f_854 != Local_116.f_410[PLAYER::PLAYER_ID()])
			{
				Local_1038.f_854 = { Local_116.f_410[PLAYER::PLAYER_ID()] };
			}
			else
			{
				if (Local_1038.f_854.f_1[iLocal_1946] != Local_116.f_410[PLAYER::PLAYER_ID()].f_1[iLocal_1946])
				{
					iLocal_1945 = 0;
					iLocal_1946 = 0;
					if (Global_262145.f_26036)
					{
						unk_0xF740FB339D471C35(&Local_1901);
					}
					func_375(1);
					UI::CLEAR_HELP(1);
					return 1;
				}
				iLocal_1946++;
				if (iLocal_1946 >= Local_1038.f_854)
				{
					iLocal_1946 = 0;
				}
			}
		}
		if (Local_116.f_168[iParam0].f_2[iLocal_1945] != Local_1038.f_799.f_2[iLocal_1945])
		{
			iLocal_1945 = 0;
			iLocal_1946 = 0;
			if (Global_262145.f_26036)
			{
				unk_0xF740FB339D471C35(&Local_1901);
			}
			func_375(1);
			UI::CLEAR_HELP(1);
			return 1;
		}
		iLocal_1945++;
		if (iLocal_1945 >= 52)
		{
			iLocal_1945 = 0;
		}
	}
	return 0;
}

void func_225()
{
	iVar0 = func_380(Local_1038.f_18);
	if (iVar0 < 32)
	{
		GAMEPLAY::SET_BIT(&(Local_1038.f_33), iVar0);
	}
}

int func_226(int iParam0)
{
	if (iParam0 == func_411())
	{
		return 0;
	}
	iVar0 = func_227(iParam0);
	if (iVar0 != func_411())
	{
		return func_324(iVar0);
	}
	return 0;
}

int func_227(int iParam0)
{
	if (iParam0 != func_411())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_411();
}

void func_228(var uParam0, int iParam1)
{
	if (uParam0->f_7 == iParam1)
	{
		return;
	}
	if (iParam1 < uParam0->f_7 && iParam1 != 0)
	{
		return;
	}
	if ((iParam1 == 4 || iParam1 == 5) || iParam1 == 6)
	{
		if (func_333())
		{
			func_228(uParam0, 7);
			return;
		}
	}
	uParam0->f_7 = iParam1;
	func_69(&(Local_1038.f_794));
	if ((iParam1 != 0 && iParam1 != 3) && iParam1 != 8)
	{
		func_73(&(Local_1038.f_794), 0, 0);
	}
}

int func_229()
{
	iVar0 = func_380(Local_1038.f_18);
	if (iVar0 < 32)
	{
		return GAMEPLAY::IS_BIT_SET(Local_1038.f_33, iVar0);
	}
	return 0;
}

char* func_230(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "sit_enter_left";
		
		case 1:
			return "sit_enter_left_side";
		
		case 2:
			return "sit_enter_right_side";
		
		default:
	}
	return "sit_enter_left";
}

char* func_231()
{
	return "anim_casino_b@amb@casino@games@shared@player@";
}

Vector3 func_232(int iParam0)
{
	if (Local_1038.f_26 == 1)
	{
		uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_380(iParam0)), 1f, 618005505, 0, 0, 0);
	}
	else if (func_380(iParam0) == 0 || func_380(iParam0) == 1)
	{
		uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_380(iParam0)), 1f, -1728077103, 0, 0, 0);
	}
	else
	{
		uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_380(iParam0)), 1f, 618005505, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uVar0) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return unk_0xCE6294A232D03786(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 1:
				return unk_0xCE6294A232D03786(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 2:
				return unk_0xCE6294A232D03786(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 3:
				return unk_0xCE6294A232D03786(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 4:
				return unk_0xCE6294A232D03786(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 5:
				return unk_0xCE6294A232D03786(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 6:
				return unk_0xCE6294A232D03786(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 7:
				return unk_0xCE6294A232D03786(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 8:
				return unk_0xCE6294A232D03786(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 9:
				return unk_0xCE6294A232D03786(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 10:
				return unk_0xCE6294A232D03786(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 11:
				return unk_0xCE6294A232D03786(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 12:
				return unk_0xCE6294A232D03786(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 13:
				return unk_0xCE6294A232D03786(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 14:
				return unk_0xCE6294A232D03786(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 15:
				return unk_0xCE6294A232D03786(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

var func_233(int iParam0, int iParam1)
{
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_231(), func_230(iParam1), func_361(iParam0), func_232(iParam0), 0.01f, 2) };
	return Var0.z;
}

float func_234(int iParam0, struct<3> Param1, int iParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	return GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, iParam4);
}

Vector3 func_235(int iParam0, int iParam1)
{
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_231(), func_230(iParam1), func_361(iParam0), func_232(iParam0), 0.01f, 2) };
	return Var0;
}

int func_236()
{
	STREAMING::REQUEST_ANIM_DICT(func_45());
	STREAMING::REQUEST_ANIM_DICT(func_78());
	STREAMING::REQUEST_ANIM_DICT(func_92());
	STREAMING::REQUEST_ANIM_DICT(func_231());
	if (((STREAMING::HAS_ANIM_DICT_LOADED(func_45()) && STREAMING::HAS_ANIM_DICT_LOADED(func_78())) && STREAMING::HAS_ANIM_DICT_LOADED(func_92())) && STREAMING::HAS_ANIM_DICT_LOADED(func_231()))
	{
		return 1;
	}
	return 0;
}

int func_237()
{
	if (func_71(&(Local_1038.f_792), 3500, 0))
	{
		func_69(&(Local_1038.f_792));
		return 1;
	}
	return 0;
}

bool func_238(int iParam0)
{
	if (Local_116.f_117[iParam0] == func_411())
	{
		return 0;
	}
	return Local_116.f_117[iParam0] != PLAYER::PLAYER_ID();
}

void func_239(int iParam0)
{
	Global_1696054 = NETWORK::_GET_POSIX_TIME();
	Global_1696071 = iParam0;
	if (!func_247())
	{
		func_244();
	}
	if (!func_243())
	{
		func_240();
	}
}

void func_240()
{
	func_108(-1040706016, NETWORK::_GET_POSIX_TIME());
	func_242();
	func_241();
	Global_1696068 = 1;
	Global_1696063 = 0;
}

void func_241()
{
	func_108(1599929969, NETWORK::_GET_POSIX_TIME());
}

void func_242()
{
	func_108(-1959489725, 0);
	func_108(-1767815638, 0);
	func_108(-1983697810, 0);
	func_108(2071236561, 0);
	func_108(-569486077, 0);
	func_108(-806012719, 0);
	func_108(-1030054372, 0);
	func_108(611934680, 0);
	func_108(387434261, 0);
	func_108(92143537, 0);
	func_108(1599929969, 0);
}

bool func_243()
{
	return Global_1696068;
}

void func_244()
{
	func_108(937560627, NETWORK::_GET_POSIX_TIME());
	func_246();
	func_245((NETWORK::_GET_POSIX_TIME() + 86400));
	Global_1696067 = 1;
}

void func_245(int iParam0)
{
	Global_1696062 = iParam0;
}

void func_246()
{
	func_108(575353331, NETWORK::_GET_POSIX_TIME());
}

bool func_247()
{
	return func_112(937560627) != 0;
}

bool func_248(int iParam0)
{
	return Local_116.f_117[iParam0] == PLAYER::PLAYER_ID();
}

void func_249()
{
	func_363(2);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, 0);
	func_339();
	func_300(PLAYER::PLAYER_ID(), 1, 0, 0);
	func_257();
	GAMEPLAY::CLEAR_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_310.f_4), 3);
	func_250();
}

void func_250()
{
	if (Global_1696071 != -1)
	{
		iVar0 = (NETWORK::_GET_POSIX_TIME() - Global_1696054);
		iVar1 = (NETWORK::_GET_POSIX_TIME() - Global_1696055);
		if (Global_1696055 == -1)
		{
			func_251(iVar0);
		}
		else
		{
			func_251(iVar1);
		}
		func_246();
		func_241();
		Global_1696054 = -1;
		Global_1696055 = -1;
		Global_1696071 = -1;
	}
}

void func_251(int iParam0)
{
	iVar0 = func_256();
	Global_1696063 = (Global_1696063 + iParam0);
	func_252(iVar0, iParam0);
	func_241();
}

void func_252(int iParam0, int iParam1)
{
	iVar11 = (iParam0 + 1 * 12 - 12);
	iVar12 = 1;
	if ((iVar11 % 32) + 12 > 32)
	{
		iVar12 = 2;
	}
	iVar13 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar11) / 32f));
	if (iVar13 < 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		if ((iVar13 + iVar0) >= 9)
		{
			return;
		}
		iVar14 = func_255((iVar13 + iVar0));
		uVar1[(iVar13 + iVar0)] = func_112(iVar14);
		iVar0++;
	}
	iVar15 = func_254(&uVar1, iParam0, 12);
	iVar15 = (iVar15 + iParam1);
	func_253(&uVar1, iParam0, 12, iVar15);
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		uVar16 = func_255((iVar13 + iVar0));
		func_108(uVar16, uVar1[(iVar13 + iVar0)]);
		iVar0++;
	}
}

void func_253(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar2 = (iParam1 + 1 * iParam2);
	iVar3 = (iVar2 - iParam2);
	iVar4 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar3) / 32f));
	iVar5 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar3 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar4 - 1) + iVar5) >= *uParam0)
	{
		return;
	}
	iVar6 = 0;
	iVar7 = (iVar3 % 32);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		iVar8 = (32 - iVar7);
		if (iVar8 > (iParam2 - iVar6))
		{
			iVar8 = (iParam2 - iVar6);
		}
		iVar1 = iVar7;
		while (iVar1 <= ((iVar7 + iVar8) - 1))
		{
			if (GAMEPLAY::IS_BIT_SET(iParam3, iVar6))
			{
				GAMEPLAY::SET_BIT(uParam0[(iVar4 + iVar0)], iVar1);
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(uParam0[(iVar4 + iVar0)], iVar1);
			}
			iVar6++;
			iVar1++;
		}
		if (iVar7 > 0)
		{
			iVar7 = 0;
		}
		else
		{
			iVar7 = (iVar7 + iVar8);
		}
		iVar0++;
	}
}

int func_254(var uParam0, int iParam1, int iParam2)
{
	iVar3 = (iParam1 + 1 * iParam2);
	iVar4 = (iVar3 - iParam2);
	iVar5 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar4) / 32f));
	iVar6 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar4 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar5 - 1) + iVar6) >= *uParam0)
	{
		return 0;
	}
	iVar7 = 0;
	iVar8 = (iVar4 % 32);
	iVar0 = 0;
	while (iVar0 < iVar6)
	{
		iVar9 = (32 - iVar8);
		if (iVar9 > (iParam2 - iVar7))
		{
			iVar9 = (iParam2 - iVar7);
		}
		iVar1 = iVar8;
		while (iVar1 <= ((iVar8 + iVar9) - 1))
		{
			if (GAMEPLAY::IS_BIT_SET((*uParam0)[(iVar5 + iVar0)], iVar1))
			{
				GAMEPLAY::SET_BIT(&uVar2, iVar7);
			}
			iVar7++;
			iVar1++;
		}
		if (iVar8 > 0)
		{
			iVar8 = 0;
		}
		else
		{
			iVar8 = (iVar8 + iVar9);
		}
		iVar0++;
	}
	return uVar2;
}

int func_255(int iParam0)
{
	StringCopy(&cVar0, "MPPLY_CAS_GMBLNG_L24", 24);
	if (iParam0 > 0)
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, iParam0, 24);
	}
	return GAMEPLAY::GET_HASH_KEY(&cVar0);
}

int func_256()
{
	return func_112(92143537);
}

void func_257()
{
	Global_2439138.f_1156.f_10 = 0;
}

void func_258(bool bParam0, int iParam1)
{
	if (!func_260(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8417)
	{
		UI::RESET_HUD_COMPONENT_VALUES(15);
		Global_22350.f_8417 = 0;
	}
	UI::_0x55598D21339CB998(0f);
	if (Global_22350.f_5628[iVar0])
	{
		UI::CLEAR_ADDITIONAL_TEXT(9, 0);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_259(&(Global_22350.f_5660[iVar0]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_259(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_260(var uParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = GAMEPLAY::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_261(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_260(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_285(0, bParam6))
	{
		return;
	}
	GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 84);
	GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_22350)
	{
		if (func_165(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar57 = fVar37;
			fVar58 = fVar36;
			fVar57 = (fVar57 + 0f);
		}
		else
		{
			Global_22350 = 0;
		}
	}
	if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_1)) == GAMEPLAY::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_22348;
	}
	else
	{
		fVar59 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22349;
	}
	fVar62 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar60, &iVar61);
		fVar63 = GRAPHICS::_GET_ASPECT_RATIO(0);
		if (func_167())
		{
			iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) * fVar63));
		}
		fVar64 = (SYSTEM::TO_FLOAT(iVar60) / SYSTEM::TO_FLOAT(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_167())
		{
			fVar62 = 1f;
		}
		iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) / fVar62));
		iVar61 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) / fVar62));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar60, &iVar61);
	}
	if (bParam3)
	{
		if (Global_22350.f_5218 <= 1)
		{
			func_175(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22350.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22350.f_5728)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_1)) == GAMEPLAY::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_22348;
			}
			else
			{
				if (Global_22350)
				{
					StringCopy(&cVar65, func_171(29), 64);
					StringCopy(&cVar81, func_168(29, 1), 64);
					if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_7029[29])) == -1487683087)
					{
						func_284(Global_22347, Global_22348, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fVar58, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fParam5, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_22350.f_8387)
				{
					iVar1 = Global_22350.f_8383;
					iVar2 = Global_22350.f_8384;
					iVar3 = Global_22350.f_8385;
					iVar4 = Global_22350.f_8386;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_284(Global_22347, (Global_22348 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
				if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_1)) != 0)
				{
					func_283();
					UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22350.f_68)
					{
						if (Global_22350.f_5[iVar14] == 2)
						{
							UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22350.f_5[iVar14] == 3)
						{
							UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_14[iVar16], Global_22350.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22350.f_5[iVar14] == 1)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_22[iVar17]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 8)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_22[iVar17]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 5)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 6)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 7)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 9)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						iVar14++;
					}
					UI::END_TEXT_COMMAND_DISPLAY_TEXT((Global_22347 + 0.00390625f), ((Global_22348 + fVar57) + 0.00416664f), 0);
				}
				if (Global_22350.f_5735)
				{
					func_283();
					func_281((((Global_22347 + fParam5) - 0.00390625f) - func_282("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_283();
						func_281((((Global_22347 + fParam5) - 0.00390625f) - func_282("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
					}
				}
			}
			iVar6 = Global_22350.f_5738;
			iVar9 = 0;
			fVar97 = fVar51;
			if (Global_22350.f_8397)
			{
				iVar1 = Global_22350.f_8393;
				iVar2 = Global_22350.f_8394;
				iVar3 = Global_22350.f_8395;
				iVar4 = Global_22350.f_8396;
			}
			else
			{
				UI::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22350.f_5225 && iVar6 <= Global_22350.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22350.f_5485[iVar6])
					{
						if (Global_22350.f_5356[iVar6] && iVar6 != Global_22350.f_5738)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar56 = Global_22350.f_5745[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar97 + ((fVar51 - fVar97) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar97), 0f, 255, 255, 255, 255, 0);
			if (Global_22350.f_5731 > Global_22350.f_5225)
			{
				if (Global_22350.f_8402)
				{
					iVar1 = Global_22350.f_8398;
					iVar2 = Global_22350.f_8399;
					iVar3 = Global_22350.f_8400;
					iVar4 = Global_22350.f_8401;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_284(Global_22347, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.x = (Var38.x * (0.5f / fVar62));
				Var38.y = (Var38.y * (0.5f / fVar62));
				if (Global_22350.f_8415)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					UI::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.x / 1280f) * fVar62), ((Var38.y / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_4690)) != 0 && Global_22350.f_4766 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_22350.f_4768 != 0)
				{
					func_165(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_280(fVar42);
				UI::_SET_TEXT_GXT_ENTRY(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = UI::_GET_TEXT_SCREEN_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				UI::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_284(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					iVar4 = Global_22350.f_8406;
				}
				else
				{
					UI::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_280(fVar42);
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 8)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_22350.f_4768 != 0)
				{
					func_165(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_279(Global_22350.f_4768, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_171(Global_22350.f_4768), func_168(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22350.f_4766 > 0)
				{
					if ((GAMEPLAY::GET_GAME_TIMER() - Global_22350.f_4767) > Global_22350.f_4766)
					{
						StringCopy(&(Global_22350.f_4690), "", 24);
						Global_22350.f_4766 = -1;
					}
				}
			}
			if (GAMEPLAY::GET_HASH_KEY(&(Global_4268421.f_21)) != 0 && Global_4268421.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_4268421.f_67 != 0)
				{
					func_165(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_280(fVar42);
				UI::_SET_TEXT_GXT_ENTRY(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = UI::_GET_TEXT_SCREEN_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				UI::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_284(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					iVar4 = Global_22350.f_8406;
				}
				else
				{
					UI::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_280(fVar42);
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4268421.f_67 != 0)
				{
					func_165(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_279(Global_4268421.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_171(Global_4268421.f_67), func_168(Global_4268421.f_67, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4268421.f_65 > 0)
				{
					if ((GAMEPLAY::GET_GAME_TIMER() - Global_4268421.f_66) > Global_4268421.f_65)
					{
						StringCopy(&(Global_4268421.f_21), "", 16);
						Global_4268421.f_65 = -1;
					}
				}
			}
			func_274(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 84);
			GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22350.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_22350.f_5218;
			if (Global_22350.f_5729)
			{
				iVar98 = (Global_22350.f_5732 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_22350.f_5745[iVar6] != 0f)
				{
					fVar56 = Global_22350.f_5745[iVar6];
				}
				if (Global_22350.f_5729)
				{
					iVar6 = Global_22350.f_8038[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22350.f_5738 && iVar9 < Global_22350.f_5225)
				{
					bVar33 = true;
					if (Global_22350.f_5739 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_22350.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22350.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22347 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_22350.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_22350.f_8409)
					{
						UI::GET_HUD_COLOUR(Global_22350.f_8408, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						UI::GET_HUD_COLOUR(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_22347 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, 0);
					Global_22350.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22350.f_5226)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_22350.f_5089[iVar6], iVar8) || Global_22350.f_5056[iVar8] == 5)
					{
						if (Global_22350.f_5729)
						{
							iVar19 = Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar20 = Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar21 = Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar22 = Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar23 = Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + iVar8)];
						}
						else
						{
							Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar19;
							Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar20;
							Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar21;
							Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar22;
							Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_22350.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_22350.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_22350.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_22347 + 0.0046875f) + Global_22350.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_22350.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_22350.f_5062[iVar8 + 1])
						{
							fVar46 = (Global_22350.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_22347 + Global_22349) - 0.0046875f) - fVar34);
						}
						if ((Global_22350.f_5075[iVar8] && Global_22350.f_5874) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_22350.f_5056[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22350.f_2124[iVar24][iVar14] == 5 || Global_22350.f_2124[iVar24][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_22350.f_2124[iVar24][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_173(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
											UI::_SET_TEXT_ENTRY_FOR_WIDTH(&(Global_22350.f_73[iVar24]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24][iVar14] == 1)
											{
												iVar25++;
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
												}
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 8)
											{
												iVar25++;
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
												}
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 5)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 6)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 7)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 9)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 2)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 3)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
										{
											fVar43 = UI::_GET_TEXT_SCREEN_WIDTH(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_165(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_22350.f_4433[(iVar22 + iVar14)] == 2 || Global_22350.f_4433[(iVar22 + iVar14)] == 51) || Global_22350.f_4433[(iVar22 + iVar14)] == 61)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
										Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar44;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_22350.f_5083[iVar101] == 2)
												{
													Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] = (Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] - Global_22350.f_5068[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_165(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_279(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_171(26), func_168(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_279(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_171(27), func_168(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24][iVar14] == 5 || Global_22350.f_2124[iVar24][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										func_173(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_273(bVar32);
										}
										UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_73[iVar24]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22350.f_2124[iVar24][iVar14] == 1)
										{
											iVar25++;
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
											}
											iVar31 = 1;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 8)
										{
											iVar25++;
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
											}
											iVar31 = 8;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 5)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 6)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 7)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 9)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 2)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 3)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 4)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar28)] == 2 || Global_22350.f_4433[(iVar22 + iVar28)] == 51) || Global_22350.f_4433[(iVar22 + iVar28)] == 61)
											{
												if (func_165(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_165(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_279(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_171(Global_22350.f_4433[(iVar22 + iVar28)]), func_168(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_171(Global_22350.f_4433[(iVar22 + iVar28)]), func_168(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22350.f_5083[iVar8] == 2)
										{
											UI::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											UI::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
											if (func_272() && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1768762336) > 0)
											{
												if (iVar8 == 0)
												{
													func_173(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													UI::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													UI::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), 0);
													UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar107);
													UI::ADD_TEXT_COMPONENT_INTEGER((Global_22350.f_5738 + iVar30));
													UI::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar14)] != 2 && Global_22350.f_4433[(iVar22 + iVar14)] != 51) && Global_22350.f_4433[(iVar22 + iVar14)] != 61)
											{
												if (func_165(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_165(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_279(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_171(Global_22350.f_4433[(iVar22 + iVar14)]), func_168(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else if (Global_22350.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_171(Global_22350.f_4433[(iVar22 + iVar14)]), func_168(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_171(Global_22350.f_4433[(iVar22 + iVar14)]), func_168(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22350.f_2124[iVar24][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_173(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_273(bVar32);
										}
										UI::_SET_TEXT_ENTRY_FOR_WIDTH("NUMBER");
										UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[iVar20]);
										fVar43 = UI::_GET_TEXT_SCREEN_WIDTH(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_165(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_279(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_171(26), func_168(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_279(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_171(27), func_168(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_173(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										func_271((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_173(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_273(bVar32);
										}
										UI::_SET_TEXT_ENTRY_FOR_WIDTH("NUMBER");
										UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
										fVar43 = UI::_GET_TEXT_SCREEN_WIDTH(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_165(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_279(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_171(26), func_168(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_279(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_171(27), func_168(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									func_173(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
									func_270((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_165(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22350.f_5729)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_22350.f_5083[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
											Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
											fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)];
										}
										if (bVar54)
										{
											if (func_165(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_279(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_171(26), func_168(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
											if (func_165(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_165(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_279(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_171(27), func_168(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_165(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_279(Global_22350.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												GRAPHICS::DRAW_SPRITE(func_171(Global_22350.f_4433[iVar22]), func_168(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_269(Global_22350.f_4433[iVar22])), (fVar37 * func_269(Global_22350.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_22350.f_5056[iVar8] == 5)
						{
							if (Global_22350.f_5068[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							if (Global_22350.f_5075[iVar8])
							{
								if (func_165(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_22350.f_8038[iVar9] = iVar6;
						Global_22350.f_5740 = iVar6;
						iVar9++;
						if (Global_22350.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_22350.f_5745[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_22350.f_5728)
					{
						Global_22350.f_5485[iVar6] = 1;
						if (Global_22350.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22350.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22350.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22350.f_5728)
			{
				Global_22350.f_5730 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_22350.f_5733 = iVar11;
				Global_22350.f_5731 = iVar10;
				Global_22350.f_5728 = 1;
			}
		}
		if (!Global_22350.f_5729)
		{
			Global_22350.f_5732 = iVar9;
			Global_22350.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22350.f_5876 = fVar51;
	Global_22350.f_5878 = GAMEPLAY::GET_GAME_TIMER();
	UI::_0x55598D21339CB998(Global_22350.f_5876);
	if (!Global_22350.f_8382)
	{
		func_262(0);
	}
	Global_22350.f_8382 = 0;
	if (bParam2)
	{
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_186(1);
	}
	GRAPHICS::_SCREEN_DRAW_POSITION_END();
}

void func_262(int iParam0)
{
	if (func_268())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_267(0))
		{
			func_263(iParam0);
		}
		GAMEPLAY::SET_BIT(&Global_7357, 2);
	}
}

void func_263(int iParam0)
{
	if (func_268())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_266())
		{
			func_265(1, 1);
		}
		else
		{
			func_265(0, 0);
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
	if (!func_264())
	{
		Global_19486.f_1 = 3;
	}
}

int func_264()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_265(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_267(0))
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

bool func_266()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

int func_267(int iParam0)
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

bool func_268()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 19);
}

float func_269(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_270(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_271(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

var func_272()
{
	return DLC2::IS_DLC_PRESENT(-1762644250);
}

void func_273(bool bParam0)
{
	if (bParam0)
	{
		UI::GET_HUD_COLOUR(Global_22350.f_8410[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		UI::GET_HUD_COLOUR(Global_22350.f_8410[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_274(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!func_260(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_285(bParam4, bParam8))
	{
		return;
	}
	if (func_277())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_275(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_22350.f_4769 != 0)
	{
		if (CONTROLS::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (Global_22350.f_5026[iVar1] != 361)
				{
					StringCopy(&(Global_22350.f_4771[iVar1]), CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_22350.f_5026[iVar1], 1), 64);
				}
				else if (Global_22350.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[iVar1]), CONTROLS::_0x80C2FD58D720C801(2, Global_22350.f_5039[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "CLEAR_ALL");
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "SET_MAX_WIDTH");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT((1f - (Global_22350.f_5081 / 100f)));
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			if (GAMEPLAY::IS_PC_VERSION())
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_4964[iVar1])) != GAMEPLAY::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar1);
					func_191(&(Global_22350.f_4771[iVar1]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_4964[iVar2])) == GAMEPLAY::GET_HASH_KEY("PREV"))
					{
						func_191(&(Global_22350.f_4771[iVar2]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_190(&(Global_22350.f_4964[iVar1]));
					}
					else
					{
						iVar3 = Global_22350.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_22350.f_4964[iVar1]));
						if (bParam5)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							UI::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						if (Global_22350.f_5026[iVar1] != 361 && GAMEPLAY::IS_BIT_SET(Global_22350.f_5052, iVar1))
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_22350.f_5026[iVar1]);
						}
						else
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(0);
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(361);
						}
					}
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				iVar1++;
			}
			if (GAMEPLAY::GET_HASH_KEY(&(Global_4268421.f_16)) != GAMEPLAY::GET_HASH_KEY(""))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_22350.f_4769);
				func_191(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_190(&(Global_4268421.f_16));
				}
				else
				{
					iVar4 = Global_22350.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_4268421.f_16));
					if (bParam5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "SET_BACKGROUND_COLOUR");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(80);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22350.f_5082)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
			}
			else
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			}
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			Global_22350.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22350.f_4769)
		{
			if (Global_22350.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar1);
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_22350.f_4964[iVar1]));
					if (bParam5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
			}
			iVar1++;
		}
		if (Global_4268421.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar1);
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_4268421.f_16));
				if (bParam5)
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
		}
		GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 66);
		GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22350.f_8417)
			{
				UI::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_22350.f_8417 = 1;
			}
		}
		else if (Global_22350.f_8417)
		{
			UI::RESET_HUD_COMPONENT_VALUES(15);
			Global_22350.f_8417 = 0;
		}
		GRAPHICS::_SCREEN_DRAW_POSITION_END();
		if (Global_22350.f_5055)
		{
			GRAPHICS::_SET_SCREEN_DRAW_POSITION(82, 66);
			GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_22350.f_5660[iVar0], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::_SCREEN_DRAW_POSITION_END();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_22350.f_5660[iVar0], 255, 255, 255, 255, 0);
		}
	}
}

bool func_275(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_276(-1, 0) == 8;
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

int func_276(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_137();
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

int func_277()
{
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_278())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_19431 == 0)
		{
			if (Var0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.y > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_278()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		return 1;
	}
	return 0;
}

void func_279(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	UI::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			UI::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_280(float fParam0)
{
	UI::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	UI::SET_TEXT_FONT(0);
	UI::SET_TEXT_SCALE(0f, 0.35f);
	UI::SET_TEXT_LEADING(2);
	UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	UI::SET_TEXT_WRAP(fParam0, ((Global_22347 + Global_22349) - 0.0046875f));
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_281(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam4);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_282(char* sParam0, int iParam1, int iParam2)
{
	if (!GAMEPLAY::IS_STRING_NULL(sParam0))
	{
		if (GAMEPLAY::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_283();
	UI::_SET_TEXT_ENTRY_FOR_WIDTH(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	return UI::_GET_TEXT_SCREEN_WIDTH(1);
}

void func_283()
{
	UI::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22350.f_8392)
	{
		iVar0 = Global_22350.f_8388;
		iVar1 = Global_22350.f_8389;
		iVar2 = Global_22350.f_8390;
		iVar3 = Global_22350.f_8391;
	}
	UI::SET_TEXT_FONT(0);
	UI::SET_TEXT_SCALE(0f, 0.35f);
	UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	UI::SET_TEXT_WRAP((Global_22347 + 0.0046875f), ((Global_22347 + Global_22349) - 0.0046875f));
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_284(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

int func_285(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_287(8, -1) && func_286() != 65)) || (UI::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::_0x2EAC52B4019E2782()) || Global_76882) || Global_22350.f_8416) || UI::IS_WARNING_MESSAGE_ACTIVE()) || Global_98796.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_286()
{
	return Global_1312812;
}

bool func_287(int iParam0, int iParam1)
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
	return GAMEPLAY::IS_BIT_SET(Global_1377170.f_1048, iParam0);
}

void func_288(int iParam0, char* sParam1, int iParam2)
{
	sVar0 = CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_22350.f_5052), Global_22350.f_4769);
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_289(char* sParam0)
{
	if (Global_22350.f_4765 >= 3 || Global_22350.f_4762 >= 4)
	{
		return;
	}
	Global_22350.f_4696[Global_22350.f_4762] = 1;
	Global_22350.f_4762++;
	StringCopy(&(Global_22350.f_4713[Global_22350.f_4765]), sParam0, 64);
	Global_22350.f_4765++;
}

void func_290(char* sParam0, int iParam1, int iParam2)
{
	StringCopy(&(Global_22350.f_4690), sParam0, 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = iParam1;
	Global_22350.f_4767 = GAMEPLAY::GET_GAME_TIMER();
	Global_22350.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
}

void func_291(int iParam0, bool bParam1, int iParam2)
{
	Global_22350.f_5739 = iParam0;
	Global_22350.f_5874 = iParam2;
	if (Global_22350.f_5739 < Global_22350.f_5738)
	{
		Global_22350.f_5738 = Global_22350.f_5739;
	}
	else if ((Global_22350.f_5729 && Global_22350.f_5739 > Global_22350.f_5740) || (!Global_22350.f_5729 && Global_22350.f_5739 >= (Global_22350.f_5738 + Global_22350.f_5225)))
	{
		iVar0 = Global_22350.f_5738;
		while (iVar0 <= Global_22350.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22350.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22350.f_5225 && Global_22350.f_5738 < 128)
		{
			Global_22350.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22350.f_5738;
			while (iVar0 <= Global_22350.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22350.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22350.f_4690), "", 24);
		StringCopy(&(Global_4268421.f_21), "", 16);
	}
}

void func_292(char* sParam0)
{
	StringCopy(&(Global_22350.f_1), sParam0, 16);
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_293(int iParam0, char* sParam1, char* sParam2)
{
	Global_22350 = iParam0;
	func_294(29, sParam1, sParam2);
}

void func_294(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_22350.f_6020[iParam0]), sParam1, 64);
	StringCopy(&(Global_22350.f_7029[iParam0]), sParam2, 64);
}

void func_295(bool bParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22350.f_73[iVar0]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22350.f_2124[iVar0][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2461220[iVar0]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_5089[iVar0] = 0;
		Global_22350.f_5227[iVar0] = 0;
		Global_22350.f_5356[iVar0] = 0;
		Global_22350.f_5879[iVar0] = 0f;
		Global_22350.f_5485[iVar0] = 0;
		Global_22350.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22350.f_5056[iVar0] = 0;
		Global_22350.f_5068[iVar0] = 0f;
		Global_22350.f_5062[iVar0] = -1f;
		Global_22350.f_5075[iVar0] = 0;
		Global_22350.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22350.f_6020[iVar0]), "", 64);
		StringCopy(&(Global_22350.f_7029[iVar0]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22350.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	Global_22350 = 0;
	Global_22350.f_5218 = 0;
	Global_22350.f_5219 = 0;
	Global_22350.f_5220 = 0;
	Global_22350.f_5222 = 0;
	Global_22350.f_5223 = 0;
	Global_22350.f_5224 = 0;
	Global_22350.f_5221 = 0;
	Global_22350.f_5874 = 0;
	Global_22350.f_6014 = 0;
	Global_22350.f_5739 = 0;
	Global_22350.f_5738 = 0;
	Global_22350.f_5740 = 0;
	StringCopy(&(Global_22350.f_4690), "", 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = 0;
	Global_22350.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_4768 = 0;
	StringCopy(&(Global_4268421.f_21), "", 16);
	Global_4268421.f_61 = 0;
	Global_4268421.f_62 = 0;
	Global_4268421.f_63 = 0;
	Global_4268421.f_64 = 0;
	Global_4268421.f_65 = 0;
	Global_4268421.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4268421.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4268421.f_67 = 0;
	StringCopy(&(Global_22350.f_1), "", 16);
	Global_22350.f_5074 = 0f;
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_5744 = 0;
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = 0;
	Global_22350.f_5742 = 0;
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	Global_22350.f_5225 = 10;
	Global_22350.f_5226 = 0;
	Global_22350.f_5876 = 0f;
	Global_22350.f_5877 = 0f;
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	Global_22350.f_5730 = 0f;
	Global_22350.f_5731 = 0;
	Global_22350.f_5733 = 0;
	Global_22350.f_5732 = 0;
	Global_22350.f_5734 = 0;
	Global_22350.f_5735 = 0;
	Global_22350.f_5736 = 0;
	Global_22350.f_5737 = 0;
	Global_22350.f_8413 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22350.f_6008[iVar0] = -1;
		Global_22350.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22350.f_5081 = 0f;
	Global_22350.f_5052 = 0;
	Global_22350.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22350.f_6015)
	{
		Global_22350.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_8392 = 0;
	Global_22350.f_8387 = 0;
	Global_22350.f_8397 = 0;
	Global_22350.f_8402 = 0;
	Global_22350.f_8407 = 0;
	Global_22350.f_8409 = 0;
	Global_22350.f_8415 = 0;
	Global_22347 = 0.05f;
	Global_22348 = 0.05f;
	Global_22349 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (bParam0)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22349 = 0.225f;
	}
}

bool func_296(char* sParam0, int iParam1, bool bParam2)
{
	if (!func_260(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0]), sParam0, 16);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_5635[iVar0])))
	{
		UI::REQUEST_ADDITIONAL_TEXT(&(Global_22350.f_5635[iVar0]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!UI::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_22350.f_5635[iVar0]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
	Global_22350.f_5614[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", 0);
		Global_22350.f_5621[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0].f_1), "instructional_buttons", 24);
	bVar2 = func_297(&(Global_22350.f_5660[iVar0]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_297(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = unk_0x67D02A194A2FC2BD(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = GAMEPLAY::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = GAMEPLAY::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_298(int iParam0)
{
	Local_749[PLAYER::PLAYER_ID()].f_1 = iParam0;
	Local_749[PLAYER::PLAYER_ID()].f_2 = func_380(iParam0);
}

bool func_299()
{
	return Global_4264528 == 1;
}

void func_300(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (SCRIPT::_GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (func_309())
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
		if (!func_203())
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
				else if (bVar14 || (!func_275(PLAYER::PLAYER_ID(), 0) && !func_308()))
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
					func_305(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_304(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
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
					func_303();
					func_302();
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
				if (!func_304(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_REGISTER(iVar27, 1);
						}
					}
					if (func_301(Global_4456448.f_232883))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
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
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, 0))
					{
						AI::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
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

bool func_301(int iParam0)
{
	return iParam0 == 17;
}

void func_302()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { Var0 };
}

void func_303()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_304(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = AI::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_305(int iParam0, int iParam1, int iParam2)
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
				func_307();
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
		if (func_275(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::_0x419594E137637120(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		UI::KEY_HUD_COLOUR(iParam0, iParam1);
		func_306(-2008016205, iParam0);
	}
}

void func_306(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_307()
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

bool func_308()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

int func_309()
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

void func_310()
{
	Global_2439138.f_1156.f_10 = 1;
}

void func_311(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_312(*uParam0);
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

int func_312(int iParam0)
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

int func_313(int iParam0, bool bParam1)
{
	iVar0 = func_312(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_267(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0] == 1 && Global_42151[iVar0].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42151[iVar0].f_29)
				{
					return 0;
				}
			}
			Global_42151[iVar0].f_5 = 1;
			Global_42151[iVar0].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42151[iVar0] == 0)
			{
			}
			if (Global_42151[iVar0].f_7)
			{
			}
		}
	}
	return 0;
}

bool func_314(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 26);
}

void func_315(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1974937116) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_311(uParam0);
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

int func_316(int iParam0)
{
	if (func_317(iParam0, 1))
	{
		return Global_1628237[func_326()].f_11.f_450;
	}
	return -1;
}

bool func_317(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_318(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_411();
}

int func_318(int iParam0)
{
	if (iParam0 != func_411())
	{
		if (Global_1628237[iParam0].f_11 != func_411())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

int func_319()
{
	if (((((((((func_335("TCP_USED") || func_335("CAS_MG_CBAN")) || func_335("CAS_MG_CTIME")) || func_322("CAS_MG_MEMB2", func_323(1))) || func_335("CAS_MG_SUITE2")) || func_335("CAS_MG_NOCHIPS3")) || func_335("CAS_MG_LOWCHIPS3")) || func_335("CAS_MG_NOCHIPS7")) || func_335("CAS_MG_LOWCHIPS7")) || func_335("TCP_NA"))
	{
		return 1;
	}
	return 0;
}

void func_320()
{
	if (!NETWORKCASH::NETWORK_CAN_SPEND_MONEY(func_323(0), 0, 1, 0, -1, 0))
	{
		func_223("MAITRD_M_D0E", -1);
	}
	else if (func_324(PLAYER::PLAYER_ID()))
	{
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1676377.f_5, 31))
	{
	}
	else if (Global_4264528 != 0)
	{
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_1676377.f_5), 30);
	}
}

void func_321(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

bool func_322(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_323(bool bParam0)
{
	if (bParam0)
	{
		return 500;
	}
	return 500;
}

bool func_324(int iParam0)
{
	if (iParam0 == func_411())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_369.f_1, 18);
}

bool func_325()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_369.f_1, 18);
}

int func_326()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11;
}

bool func_327(bool bParam0)
{
	return func_317(PLAYER::PLAYER_ID(), bParam0);
}

int func_328(int iParam0)
{
	if (iParam0 != func_411())
	{
		return Global_1590535[iParam0].f_274.f_369 != 0;
	}
	return 0;
}

int func_329()
{
	if (func_332() <= 0)
	{
		return 0;
	}
	if (func_331() <= 0)
	{
		return 1;
	}
	if (func_330())
	{
		return 2;
	}
	return 3;
}

bool func_330()
{
	return Global_1696061 != 0;
}

int func_331()
{
	return (Global_262145.f_26398 + func_111());
}

int func_332()
{
	return (Global_262145.f_26399 - func_111());
}

bool func_333()
{
	return func_329() != 3;
}

void func_334(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

bool func_335(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_336(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = -850297695;
			break;
		
		case 1:
			iVar0 = 1316161270;
			break;
		
		case 2:
			iVar0 = 1023703758;
			break;
		
		case 5:
			iVar0 = 1045499606;
			break;
		
		case 3:
			iVar0 = 1697066635;
			break;
		
		case 4:
			iVar0 = 1144169546;
			break;
	}
	if (!unk_0x158C16F5E4CF41F8(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_337()
{
	return UI::GET_PAUSE_MENU_STATE() != 0;
}

int func_338()
{
	if (Global_4254512.f_910 == 1)
	{
		return 1;
	}
	return 0;
}

void func_339()
{
	if (Local_749[PLAYER::PLAYER_ID()].f_1 != -1)
	{
		Local_1038.f_2 = 0;
		Local_1038.f_3 = 0;
		Local_1038.f_4 = 0;
		Local_1038.f_6 = 0;
		Local_1038.f_22 = 0;
		Local_749[PLAYER::PLAYER_ID()] = 0;
		Local_749[PLAYER::PLAYER_ID()].f_6 = 0;
		Local_749[PLAYER::PLAYER_ID()].f_3 = 0;
		Local_749[PLAYER::PLAYER_ID()].f_5 = 0;
		Local_749[PLAYER::PLAYER_ID()].f_4 = 0;
		Local_749[PLAYER::PLAYER_ID()].f_1 = -1;
		Local_749[PLAYER::PLAYER_ID()].f_2 = -1;
	}
}

bool func_340()
{
	return Global_2537071.f_6591;
}

int func_341()
{
	if ((func_342() != -1 && func_342() != 28) && func_342() != 17)
	{
		return 1;
	}
	return 0;
}

int func_342()
{
	return Global_968397;
}

bool func_343()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632.f_2, 11);
}

bool func_344()
{
	return Global_2450632.f_591;
}

int func_345(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_347(iParam0);
	iVar1 = func_346(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1].f_3;
}

int func_346(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42383[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_347(int iParam0)
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

int func_348()
{
	if (func_317(PLAYER::PLAYER_ID(), 1))
	{
		iVar0 = func_326();
		if (func_62(iVar0, 1, 1) && GAMEPLAY::IS_BIT_SET(Global_1590535[iVar0].f_274.f_369.f_3, 6))
		{
			return 1;
		}
		if ((func_353(PLAYER::PLAYER_ID(), 0) && func_351(PLAYER::PLAYER_ID())) || func_349(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_349(int iParam0)
{
	if (func_350(iParam0) != func_411())
	{
		return func_350(iParam0) == func_227(iParam0);
	}
	return 0;
}

int func_350(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_35;
}

int func_351(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_352(iParam0, 9);
	}
	return 0;
}

bool func_352(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_353(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_354()
{
	if (func_417(PLAYER::PLAYER_ID()) && func_412() != func_411())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2425662[func_412()].f_310.f_4, 0) || GAMEPLAY::IS_BIT_SET(Global_1676377.f_6, 10))
		{
			return 0;
		}
	}
	return 1;
}

bool func_355(int iParam0, struct<3> Param1, float fParam4)
{
	return func_356(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_HEADING(iParam0), Param1, fParam4);
}

bool func_356(struct<3> Param0, var uParam3, struct<3> Param4, float fParam7)
{
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(0f, 0f, 0f, uParam3, 0f, 1f, 0f) };
	uVar3 = func_357(func_358(Var0), func_358(Param4 - Param0));
	return GAMEPLAY::ACOS(uVar3) <= fParam7;
}

float func_357(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.x * Param3.x) + (Param0.y * Param3.y)) + (Param0.z * Param3.z));
}

Vector3 func_358(struct<3> Param0)
{
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.y = 0f;
		Param0.z = 0f;
	}
	return Param0;
}

Vector3 func_359(int iParam0)
{
	if (Local_1038.f_26 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return 966.9982f, 31.2594f, 116.2281f;
			
			case 1:
				return 966.8203f, 31.9305f, 116.2222f;
			
			case 2:
				return 967.2217f, 32.4899f, 116.2216f;
			
			case 3:
				return 967.8962f, 32.6604f, 116.218f;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1142.798f, 263.5501f, -51.7869f;
			
			case 1:
				return 1142.82f, 264.2595f, -51.8004f;
			
			case 2:
				return 1143.339f, 264.7519f, -51.8289f;
			
			case 3:
				return 1144.052f, 264.7396f, -51.7913f;
			
			case 4:
				return 1146.849f, 261.9344f, -51.8167f;
			
			case 5:
				return 1146.865f, 261.2238f, -51.8003f;
			
			case 6:
				return 1146.325f, 260.7546f, -51.812f;
			
			case 7:
				return 1145.63f, 260.7765f, -51.7979f;
			
			case 8:
				return 1134.411f, 266.1568f, -50.9898f;
			
			case 9:
				return 1133.708f, 266.1863f, -50.9883f;
			
			case 10:
				return 1133.242f, 266.7186f, -50.9969f;
			
			case 11:
				return 1133.261f, 267.4263f, -50.9812f;
			
			case 12:
				return 1149.42f, 251.1891f, -50.9655f;
			
			case 13:
				return 1148.727f, 251.1957f, -50.9855f;
			
			case 14:
				return 1148.236f, 251.7239f, -51.0083f;
			
			case 15:
				return 1148.262f, 252.4149f, -51.0019f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_360(int iParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

Vector3 func_361(int iParam0)
{
	if (Local_1038.f_26 == 1)
	{
		uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_380(iParam0)), 1f, 618005505, 0, 0, 0);
	}
	else if (func_380(iParam0) == 0 || func_380(iParam0) == 1)
	{
		uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_380(iParam0)), 1f, -1728077103, 0, 0, 0);
	}
	else
	{
		uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_380(iParam0)), 1f, 618005505, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uVar0) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return unk_0x46F8696933A63C9B(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 1:
				return unk_0x46F8696933A63C9B(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 2:
				return unk_0x46F8696933A63C9B(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 3:
				return unk_0x46F8696933A63C9B(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 4:
				return unk_0x46F8696933A63C9B(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 5:
				return unk_0x46F8696933A63C9B(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 6:
				return unk_0x46F8696933A63C9B(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 7:
				return unk_0x46F8696933A63C9B(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 8:
				return unk_0x46F8696933A63C9B(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 9:
				return unk_0x46F8696933A63C9B(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 10:
				return unk_0x46F8696933A63C9B(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 11:
				return unk_0x46F8696933A63C9B(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 12:
				return unk_0x46F8696933A63C9B(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 13:
				return unk_0x46F8696933A63C9B(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 14:
				return unk_0x46F8696933A63C9B(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 15:
				return unk_0x46F8696933A63C9B(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_362(int iParam0)
{
	return Global_98796.f_344 == iParam0;
}

void func_363(int iParam0)
{
	Local_1038.f_798 = iParam0;
}

void func_364(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	func_228(&(Local_749[iParam0]), 0);
	Local_749[iParam0].f_7.f_1 = -1;
}

int func_365()
{
	if (Local_1038.f_26 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1038.f_34))
		{
			STREAMING::REQUEST_MODEL(618005505);
			if (!STREAMING::HAS_MODEL_LOADED(618005505))
			{
				return 0;
			}
			Local_1038.f_34 = OBJECT::CREATE_OBJECT(618005505, func_76(0), 0, false, 1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1038.f_34, func_76(0), 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_1038.f_34, func_75(0));
			ENTITY::FREEZE_ENTITY_POSITION(Local_1038.f_34, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(618005505);
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_366(var uParam0, bool bParam1, bool bParam2)
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

int func_367()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_368(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			if ((func_371(PLAYER::PLAYER_ID(), 1) || func_371(PLAYER::PLAYER_ID(), 2)) || func_370())
			{
				func_228(uParam0, 3);
			}
			break;
		
		case 2:
			if ((func_371(PLAYER::PLAYER_ID(), 1) || func_371(PLAYER::PLAYER_ID(), 2)) || func_370())
			{
				func_228(uParam0, 3);
			}
			break;
		
		case 3:
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
			if (func_369())
			{
				func_228(uParam0, 8);
			}
			break;
		
		case 8:
			break;
	}
}

int func_369()
{
	if ((((func_371(PLAYER::PLAYER_ID(), 4) || func_371(PLAYER::PLAYER_ID(), 5)) || func_371(PLAYER::PLAYER_ID(), 6)) || func_371(PLAYER::PLAYER_ID(), 7)) || func_370())
	{
		return 1;
	}
	return 0;
}

int func_370()
{
	if (func_71(&(Local_1038.f_794), 3500, 0))
	{
		func_69(&(Local_1038.f_794));
		return 1;
	}
	return 0;
}

bool func_371(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Local_116.f_600[iParam0], iVar0);
}

void func_372(int iParam0, int iParam1)
{
	Global_22211.f_9 = iParam0;
	Global_22211.f_10 = iParam1;
}

void func_373(bool bParam0)
{
	if (bParam0)
	{
		func_374(1);
		func_263(1);
	}
	if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !UI::IS_PAUSE_MENU_ACTIVE())
	{
		UI::DISABLE_FRONTEND_THIS_FRAME();
		CONTROLS::DISABLE_ALL_CONTROL_ACTIONS(0);
		CONTROLS::ENABLE_ALL_CONTROL_ACTIONS(1);
		CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(2, 199, 1);
		CONTROLS::SET_INPUT_EXCLUSIVE(0, 200);
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 200);
		CONTROLS::SET_INPUT_EXCLUSIVE(0, 199);
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 199);
		CONTROLS::SET_INPUT_EXCLUSIVE(0, 201);
		CONTROLS::SET_INPUT_EXCLUSIVE(0, 202);
		CONTROLS::SET_INPUT_EXCLUSIVE(0, 187);
	}
}

void func_374(bool bParam0)
{
	if (bParam0)
	{
		if (func_343())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

void func_375(bool bParam0)
{
	if (Local_1038.f_798 > 2 && CAM::_0xEE778F8C7E1142E2(0) != 4)
	{
		if (((((!func_379() && !func_378()) && !func_377()) && !func_376()) && !func_86(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			func_300(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		func_257();
	}
	if (Local_1038.f_798 > 2)
	{
		func_257();
	}
	if (GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 0) || GAMEPLAY::IS_BIT_SET(Local_1038.f_20, 3))
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_380(Local_1038.f_18) == 2 || func_380(Local_1038.f_18) == 3) || func_417(PLAYER::PLAYER_ID()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		func_258(1, -1);
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
		iLocal_1942 = 1;
		Local_1038.f_20 = 0;
	}
	if (CAM::DOES_CAM_EXIST(Local_1038.f_13))
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::DESTROY_CAM(Local_1038.f_13, 0);
		bLocal_1943 = false;
	}
	if (Local_1038.f_31 != -1)
	{
		func_311(&(Local_1038.f_31));
		Local_1038.f_31 = -1;
	}
	if (bParam0)
	{
		if (GAMEPLAY::IS_BIT_SET(Local_1038.f_22, 4) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_92(), "cards_idle", 3))
		{
			Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_749[PLAYER::PLAYER_ID()].f_1), func_232(Local_749[PLAYER::PLAYER_ID()].f_1), 2, 1, 0, 1065353216, 0, 1065353216);
			NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_92(), "cards_fold", 2f, -2f, 13, 16, 1148846080, 0);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 0, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 1, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_116.f_68[func_41(Local_749[PLAYER::PLAYER_ID()].f_2, 2, (Local_749[PLAYER::PLAYER_ID()].f_1 - Local_749[PLAYER::PLAYER_ID()].f_2 * 4))]), Local_1038.f_24, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
			NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
			Local_1038.f_7 = 1;
		}
		else
		{
			Local_1038.f_24 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_361(Local_1038.f_18), func_232(Local_1038.f_18), 2, 0, 0, 1065353216, 0, 1065353216);
			NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1038.f_24, func_231(), func_93(Local_1038.f_18), 2f, -2f, 13, 16, 1148846080, 0);
			NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1038.f_24);
		}
	}
	Local_1038.f_15 = 0;
	Local_1038.f_23 = 0;
	Local_1038.f_22 = 0;
	Local_1038.f_29 = 0;
	Local_749[PLAYER::PLAYER_ID()].f_6 = 0;
	Local_1038.f_1 = 0;
	Local_1038.f_2 = 0;
	Local_1038.f_3 = 0;
	Local_1038.f_4 = 0;
	Local_1038.f_6 = 0;
	Local_1038.f_14 = 0;
	if (!bParam0)
	{
		func_339();
	}
	Local_1924.f_4 = func_398();
	Local_1924.f_5 = func_206(&uLocal_1899, 0, 0);
	if (Local_1038.f_798 > 2)
	{
		if (Global_262145.f_26042)
		{
			unk_0xC9001364B4388F22(&Local_1924);
		}
	}
	if (!bParam0)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_310.f_4), 3);
	}
	if (bParam0 || Local_1038.f_798 > 2)
	{
		func_250();
	}
	func_363(10);
	func_161(0);
}

int func_376()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1609729055) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_377()
{
	return Global_1312877;
}

int func_378()
{
	if (func_204() == 3 || func_204() == 2)
	{
		return 1;
	}
	return 0;
}

int func_379()
{
	if (func_204() == 1 || func_204() == 4)
	{
		return 1;
	}
	return 0;
}

int func_380(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 0;
		
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
		
		case 8:
		case 9:
		case 10:
		case 11:
			return 2;
		
		case 12:
		case 13:
		case 14:
		case 15:
			return 3;
		
		default:
	}
	return 0;
}

void func_381()
{
	iVar0 = 0;
	while (iVar0 < Local_1038.f_26)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iVar0]))
		{
		}
		else
		{
			uVar1 = NETWORK::NET_TO_PED(Local_116.f_50[iVar0]);
			if (func_383(uVar1))
			{
				if (func_382(iVar0))
				{
					unk_0xF8AD2EED7C47E8FE(uVar1, 0, 1);
				}
				else
				{
					unk_0xF8AD2EED7C47E8FE(uVar1, 1, 0);
				}
			}
		}
		iVar0++;
	}
}

int func_382(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_310.f_4, 5) || GAMEPLAY::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_310.f_4, 2))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_310.f_4, 3))
	{
		if (Local_749[PLAYER::PLAYER_ID()].f_2 != iParam0)
		{
			return 0;
		}
	}
	return 1;
}

int func_383(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_384()
{
	iVar0 = 0;
	while (iVar0 < Local_1038.f_26)
	{
		if (Global_2514396 != iVar0 && (Global_2514396 != -1 || func_417(PLAYER::PLAYER_ID())))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1038.f_35[iVar0]))
			{
				func_387(iVar0);
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_116.f_50[iVar0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_116.f_50[iVar0])))
			{
				if (!iLocal_1954[iVar0])
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), func_45(), func_44(iVar0), 3))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), 1691374422))
						{
							iLocal_1959[iVar0] = 1;
						}
					}
					else
					{
						iLocal_1959[iVar0] = 0;
					}
					if (((iLocal_1959[iVar0] || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), func_45(), func_43(iVar0), 3)) || Local_116.f_576[iVar0] == 6) || Local_116.f_576[iVar0] == 7)
					{
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_1038.f_35[iVar0]))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_1038.f_35[iVar0], false);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1038.f_35[iVar0], NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
						}
						iLocal_1954[iVar0] = 1;
					}
				}
				else if ((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), func_45(), func_31(iVar0), 3) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), 152918166)) || ((Local_116.f_576[iVar0] < 5 && !ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), func_45(), func_44(iVar0), 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_116.f_50[iVar0]), func_45(), func_43(iVar0), 3)))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_1038.f_35[iVar0]))
					{
						ENTITY::DETACH_ENTITY(Local_1038.f_35[iVar0], 1, 1);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1038.f_35[iVar0], func_386(iVar0), 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(Local_1038.f_35[iVar0], func_385(iVar0), 2, 1);
						ENTITY::FREEZE_ENTITY_POSITION(Local_1038.f_35[iVar0], true);
					}
					iLocal_1954[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

Vector3 func_385(int iParam0)
{
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_45(), "deck_pick_up_deck", func_76(iParam0), 0f, 0f, func_75(iParam0), 0.01f, 2) };
	return Var0;
}

Vector3 func_386(int iParam0)
{
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_45(), "deck_pick_up_deck", func_76(iParam0), 0f, 0f, func_75(iParam0), 0.01f, 2) };
	return Var0;
}

void func_387(int iParam0)
{
	if (Local_1038.f_5)
	{
		iVar0 = -332559487;
	}
	else
	{
		iVar0 = -974595923;
	}
	STREAMING::REQUEST_MODEL(iVar0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return;
	}
	STREAMING::REQUEST_ANIM_DICT(func_45());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_45()))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1038.f_35[iParam0]))
	{
		Local_1038.f_35[iParam0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, func_386(iParam0), 0, false, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1038.f_35[iParam0], func_386(iParam0), 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(Local_1038.f_35[iParam0], func_385(iParam0), 2, 1);
		ENTITY::FREEZE_ENTITY_POSITION(Local_1038.f_35[iParam0], true);
		STREAMING::REMOVE_ANIM_DICT(func_45());
	}
}

void func_388()
{
	if (((func_362(1581559923) || func_362(272405600)) || func_417(PLAYER::PLAYER_ID())) && !func_397())
	{
		iLocal_1941 = 1;
		if (!bLocal_1940)
		{
			bLocal_1940 = (func_406() && func_396());
		}
	}
	else
	{
		if (iLocal_1941)
		{
			func_407();
			func_394();
			iLocal_1941 = 0;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_1038.f_26)
	{
		if (iVar0 != iLocal_1944 && iVar0 != Local_749[PLAYER::PLAYER_ID()].f_2)
		{
		}
		else
		{
			bVar1 = false;
			if (func_59(iVar0, Local_1038.f_26))
			{
				bVar1 = true;
			}
			Var3 = { 0f, 0f, func_75(iVar0) };
			iVar6 = 0;
			while (iVar6 < 4)
			{
				iVar7 = Local_116.f_117[(iVar0 * 4 + iVar6)];
				if (iVar7 < 0 || ((!func_362(1581559923) && !func_362(272405600)) && !func_417(PLAYER::PLAYER_ID())))
				{
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1038.f_40[func_393(iVar0, iVar6, iVar2)]))
						{
							OBJECT::DELETE_OBJECT(&(Local_1038.f_40[func_393(iVar0, iVar6, iVar2)]));
						}
						iVar2++;
					}
				}
				else
				{
					if (Local_749[iVar7].f_3 > 0)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_1038.f_40[func_393(iVar0, iVar6, 0)]))
						{
							if (func_392(Local_749[iVar7].f_3, bVar1) != 0)
							{
								Local_1038.f_40[func_393(iVar0, iVar6, 0)] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_392(Local_749[iVar7].f_3, bVar1), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_76(iVar0), Var3.z, func_391(Local_749[iVar7].f_3, 0, iVar6, bVar1, 0)), 0, false, 1);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1038.f_40[func_393(iVar0, iVar6, 0)], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_76(iVar0), Var3.z, func_391(Local_749[iVar7].f_3, 0, iVar6, bVar1, 0)), 0, 0, 1);
								ENTITY::SET_ENTITY_ROTATION(Local_1038.f_40[func_393(iVar0, iVar6, 0)], Var3 + func_390(Local_749[iVar7].f_4, 0, iVar6, bVar1), 2, 1);
								if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(func_389(Local_749[iVar7].f_3)))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_389(Local_749[iVar7].f_3), Local_1038.f_40[func_393(iVar0, iVar6, 0)], "dlc_vw_table_games_sounds", 0, 0);
								}
							}
						}
						else if (ENTITY::GET_ENTITY_ALPHA(Local_1038.f_40[func_393(iVar0, iVar6, 0)]) != 255)
						{
							OBJECT::DELETE_OBJECT(&(Local_1038.f_40[func_393(iVar0, iVar6, 0)]));
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_1038.f_40[func_393(iVar0, iVar6, 0)]))
					{
						if (ENTITY::GET_ENTITY_ALPHA(Local_1038.f_40[func_393(iVar0, iVar6, 0)]) > 0)
						{
							ENTITY::SET_ENTITY_ALPHA(Local_1038.f_40[func_393(iVar0, iVar6, 0)], SYSTEM::FLOOR(func_217(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_1038.f_40[func_393(iVar0, iVar6, 0)])), 0f, 0.1f, 0)), 1);
						}
						else
						{
							OBJECT::DELETE_OBJECT(&(Local_1038.f_40[func_393(iVar0, iVar6, 0)]));
						}
					}
					if (Local_749[iVar7].f_5 > 0)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_1038.f_40[func_393(iVar0, iVar6, 1)]))
						{
							if (func_392(Local_749[iVar7].f_5, bVar1) != 0)
							{
								Local_1038.f_40[func_393(iVar0, iVar6, 1)] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_392(Local_749[iVar7].f_5, bVar1), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_76(iVar0), Var3.z, func_391(Local_749[iVar7].f_5, 1, iVar6, bVar1, 0)), 0, false, 1);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1038.f_40[func_393(iVar0, iVar6, 1)], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_76(iVar0), Var3.z, func_391(Local_749[iVar7].f_5, 1, iVar6, bVar1, 0)), 0, 0, 1);
								ENTITY::SET_ENTITY_ROTATION(Local_1038.f_40[func_393(iVar0, iVar6, 1)], Var3 + func_390(Local_749[iVar7].f_4, 1, iVar6, bVar1), 2, 1);
								if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(func_389(Local_749[iVar7].f_5)))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_389(Local_749[iVar7].f_5), Local_1038.f_40[func_393(iVar0, iVar6, 1)], "dlc_vw_table_games_sounds", 0, 0);
								}
							}
						}
						else if (ENTITY::GET_ENTITY_ALPHA(Local_1038.f_40[func_393(iVar0, iVar6, 1)]) != 255)
						{
							OBJECT::DELETE_OBJECT(&(Local_1038.f_40[func_393(iVar0, iVar6, 1)]));
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_1038.f_40[func_393(iVar0, iVar6, 1)]))
					{
						if (ENTITY::GET_ENTITY_ALPHA(Local_1038.f_40[func_393(iVar0, iVar6, 1)]) > 0)
						{
							ENTITY::SET_ENTITY_ALPHA(Local_1038.f_40[func_393(iVar0, iVar6, 1)], SYSTEM::FLOOR(func_217(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_1038.f_40[func_393(iVar0, iVar6, 1)])), 0f, 0.1f, 0)), 1);
						}
						else
						{
							OBJECT::DELETE_OBJECT(&(Local_1038.f_40[func_393(iVar0, iVar6, 1)]));
						}
					}
					if (Local_749[iVar7].f_4 > 0)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_1038.f_40[func_393(iVar0, iVar6, 2)]))
						{
							if (func_392(Local_749[iVar7].f_4, bVar1) != 0)
							{
								Local_1038.f_40[func_393(iVar0, iVar6, 2)] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_392(Local_749[iVar7].f_4, bVar1), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_76(iVar0), Var3.z, func_391(Local_749[iVar7].f_4, 2, iVar6, bVar1, 1)), 0, false, 1);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1038.f_40[func_393(iVar0, iVar6, 2)], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_76(iVar0), Var3.z, func_391(Local_749[iVar7].f_4, 2, iVar6, bVar1, 1)), 0, 0, 1);
								ENTITY::SET_ENTITY_ROTATION(Local_1038.f_40[func_393(iVar0, iVar6, 2)], Var3 + func_390(Local_749[iVar7].f_4, 2, iVar6, bVar1), 2, 1);
								if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(func_389(Local_749[iVar7].f_4)))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_389(Local_749[iVar7].f_4), Local_1038.f_40[func_393(iVar0, iVar6, 2)], "dlc_vw_table_games_sounds", 0, 0);
								}
							}
						}
						else if (ENTITY::GET_ENTITY_ALPHA(Local_1038.f_40[func_393(iVar0, iVar6, 2)]) != 255)
						{
							OBJECT::DELETE_OBJECT(&(Local_1038.f_40[func_393(iVar0, iVar6, 2)]));
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_1038.f_40[func_393(iVar0, iVar6, 2)]))
					{
						if (ENTITY::GET_ENTITY_ALPHA(Local_1038.f_40[func_393(iVar0, iVar6, 2)]) > 0)
						{
							ENTITY::SET_ENTITY_ALPHA(Local_1038.f_40[func_393(iVar0, iVar6, 2)], SYSTEM::FLOOR(func_217(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_1038.f_40[func_393(iVar0, iVar6, 2)])), 0f, 0.1f, 0)), 1);
						}
						else
						{
							OBJECT::DELETE_OBJECT(&(Local_1038.f_40[func_393(iVar0, iVar6, 2)]));
						}
					}
				}
				iVar6++;
			}
			if (!Local_116.f_5[iVar0])
			{
				Local_1038.f_8[iVar0] = 1;
			}
			else
			{
				Local_1038.f_8[iVar0] = 0;
			}
		}
		iVar0++;
	}
	iLocal_1944++;
	if (iLocal_1944 >= Local_1038.f_26)
	{
		iLocal_1944 = 0;
	}
}

char* func_389(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 20:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 30:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 40:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 50:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 60:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 70:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 80:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 90:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 100:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 150:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 200:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 250:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 300:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 350:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 400:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 450:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 500:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 1000:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 1500:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 2000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 2500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 3000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 3500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 4000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 4500:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 5000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 6000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 7000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 8000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 9000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 10000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 15000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 20000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 25000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 30000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 35000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 40000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 45000:
			return "DLC_VW_CHIP_BET_LRG_LARGE";
		
		case 50000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		default:
	}
	return "";
}

Vector3 func_390(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!bParam3)
	{
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 66.96f;
					
					case 1:
						return 0f, 0f, 66.96f;
					
					case 2:
						return 0f, 0f, 64.08f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 21.24f;
					
					case 1:
						return 0f, 0f, 15.48f;
					
					case 2:
						return 0f, 0f, 20.16f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -21.6f;
					
					case 1:
						return 0f, 0f, -25.56f;
					
					case 2:
						return 0f, 0f, -21.96f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -71.64f;
					
					case 1:
						return 0f, 0f, -70.2f;
					
					case 2:
						return 0f, 0f, -68.4f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 68.76f;
							
							case 1:
								return 0f, 0f, 68.76f;
							
							case 2:
								return 0f, 0f, 69.48f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 22.68f;
							
							case 1:
								return 0f, 0f, 21.96f;
							
							case 2:
								return 0f, 0f, 22.68f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -21.96f;
							
							case 1:
								return 0f, 0f, -23.04f;
							
							case 2:
								return 0f, 0f, -21.6f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -68.04f;
							
							case 1:
								return 0f, 0f, -69.84f;
							
							case 2:
								return 0f, 0f, -69.84f;
							
							default:
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 66.96f;
							
							case 1:
								return 0f, 0f, 66.96f;
							
							case 2:
								return 0f, 0f, 64.08f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 21.24f;
							
							case 1:
								return 0f, 0f, 15.48f;
							
							case 2:
								return 0f, 0f, 20.16f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -21.6f;
							
							case 1:
								return 0f, 0f, -25.56f;
							
							case 2:
								return 0f, 0f, -21.96f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -71.64f;
							
							case 1:
								return 0f, 0f, -70.2f;
							
							case 2:
								return 0f, 0f, -68.4f;
							
							default:
						}
						break;
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

Vector3 func_391(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!bParam3)
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			
			case 20:
				fVar0 = 0.896f;
				break;
			
			case 30:
				fVar0 = 0.901f;
				break;
			
			case 40:
				fVar0 = 0.907f;
				break;
			
			case 50:
				fVar0 = 0.95f;
				break;
			
			case 60:
				fVar0 = 0.917f;
				break;
			
			case 70:
				fVar0 = 0.922f;
				break;
			
			case 80:
				fVar0 = 0.927f;
				break;
			
			case 90:
				fVar0 = 0.932f;
				break;
			
			case 100:
				fVar0 = 0.95f;
				break;
			
			case 150:
				fVar0 = 0.904f;
				break;
			
			case 200:
				fVar0 = 0.899f;
				break;
			
			case 250:
				fVar0 = 0.914f;
				break;
			
			case 300:
				fVar0 = 0.904f;
				break;
			
			case 350:
				fVar0 = 0.924f;
				break;
			
			case 400:
				fVar0 = 0.91f;
				break;
			
			case 450:
				fVar0 = 0.935f;
				break;
			
			case 500:
				fVar0 = 0.95f;
				break;
			
			case 1000:
				fVar0 = 0.95f;
				break;
			
			case 1500:
				fVar0 = 0.904f;
				break;
			
			case 2000:
				fVar0 = 0.899f;
				break;
			
			case 2500:
				fVar0 = 0.915f;
				break;
			
			case 3000:
				fVar0 = 0.904f;
				break;
			
			case 3500:
				fVar0 = 0.925f;
				break;
			
			case 4000:
				fVar0 = 0.91f;
				break;
			
			case 4500:
				fVar0 = 0.935f;
				break;
			
			case 5000:
				fVar0 = 0.95f;
				break;
			
			case 6000:
				fVar0 = 0.919f;
				break;
			
			case 7000:
				fVar0 = 0.924f;
				break;
			
			case 8000:
				fVar0 = 0.93f;
				break;
			
			case 9000:
				fVar0 = 0.935f;
				break;
			
			case 10000:
				fVar0 = 0.95f;
				break;
			
			case 15000:
				fVar0 = 0.902f;
				break;
			
			case 20000:
				fVar0 = 0.897f;
				break;
			
			case 25000:
				fVar0 = 0.912f;
				break;
			
			case 30000:
				fVar0 = 0.902f;
				break;
			
			case 35000:
				fVar0 = 0.922f;
				break;
			
			case 40000:
				fVar0 = 0.907f;
				break;
			
			case 45000:
				fVar0 = 0.932f;
				break;
			
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0.59535f, 0.200875f, 0f };
						break;
					
					case 1:
						Var1 = { 0.51655f, 0.2268f, 0f };
						break;
					
					case 2:
						Var1 = { 0.689125f, 0.171575f, 0f };
						break;
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0.247825f, -0.123625f, 0f };
						break;
					
					case 1:
						Var1 = { 0.2163f, -0.04745f, 0f };
						break;
					
					case 2:
						Var1 = { 0.2869f, -0.211925f, 0f };
						break;
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0.2804f, -0.109775f, 0f };
						break;
					
					case 1:
						Var1 = { -0.2552f, -0.031225f, 0f };
						break;
					
					case 2:
						Var1 = { -0.30935f, -0.205675f, 0f };
						break;
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0.606975f, 0.249675f, 0f };
						break;
					
					case 1:
						Var1 = { -0.529875f, 0.281425f, 0f };
						break;
					
					case 2:
						Var1 = { -0.69795f, 0.211525f, 0f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			
			case 20:
				fVar0 = 0.896f;
				break;
			
			case 30:
				fVar0 = 0.901f;
				break;
			
			case 40:
				fVar0 = 0.907f;
				break;
			
			case 50:
				fVar0 = 0.95f;
				break;
			
			case 60:
				fVar0 = 0.917f;
				break;
			
			case 70:
				fVar0 = 0.922f;
				break;
			
			case 80:
				fVar0 = 0.927f;
				break;
			
			case 90:
				fVar0 = 0.932f;
				break;
			
			case 100:
				fVar0 = 0.95f;
				break;
			
			case 150:
				fVar0 = 0.904f;
				break;
			
			case 200:
				fVar0 = 0.899f;
				break;
			
			case 250:
				fVar0 = 0.914f;
				break;
			
			case 300:
				fVar0 = 0.904f;
				break;
			
			case 350:
				fVar0 = 0.924f;
				break;
			
			case 400:
				fVar0 = 0.91f;
				break;
			
			case 450:
				fVar0 = 0.935f;
				break;
			
			case 500:
				fVar0 = 0.95f;
				break;
			
			case 1000:
				fVar0 = 0.95f;
				break;
			
			case 1500:
				fVar0 = 0.904f;
				break;
			
			case 2000:
				fVar0 = 0.899f;
				break;
			
			case 2500:
				fVar0 = 0.915f;
				break;
			
			case 3000:
				fVar0 = 0.904f;
				break;
			
			case 3500:
				fVar0 = 0.925f;
				break;
			
			case 4000:
				fVar0 = 0.91f;
				break;
			
			case 4500:
				fVar0 = 0.935f;
				break;
			
			case 5000:
				fVar0 = 0.953f;
				break;
			
			case 6000:
				fVar0 = 0.919f;
				break;
			
			case 7000:
				fVar0 = 0.924f;
				break;
			
			case 8000:
				fVar0 = 0.93f;
				break;
			
			case 9000:
				fVar0 = 0.935f;
				break;
			
			case 10000:
				fVar0 = 0.95f;
				break;
			
			case 15000:
				fVar0 = 0.902f;
				break;
			
			case 20000:
				fVar0 = 0.897f;
				break;
			
			case 25000:
				fVar0 = 0.912f;
				break;
			
			case 30000:
				fVar0 = 0.902f;
				break;
			
			case 35000:
				fVar0 = 0.922f;
				break;
			
			case 40000:
				fVar0 = 0.907f;
				break;
			
			case 45000:
				fVar0 = 0.932f;
				break;
			
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.597825f, 0.20105f, 0f };
								break;
							
							case 1:
								Var1 = { 0.5151f, 0.22775f, 0f };
								break;
							
							case 2:
								Var1 = { 0.686125f, 0.171625f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.248425f, -0.126325f, 0f };
								break;
							
							case 1:
								Var1 = { 0.2144f, -0.04415f, 0f };
								break;
							
							case 2:
								Var1 = { 0.285325f, -0.212f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.281f, -0.111875f, 0f };
								break;
							
							case 1:
								Var1 = { -0.254775f, -0.029175f, 0f };
								break;
							
							case 2:
								Var1 = { -0.308175f, -0.199325f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.61015f, 0.24815f, 0f };
								break;
							
							case 1:
								Var1 = { -0.527375f, 0.283575f, 0f };
								break;
							
							case 2:
								Var1 = { -0.694475f, 0.214225f, 0f };
								break;
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.59535f, 0.200875f, 0f };
								break;
							
							case 1:
								Var1 = { 0.51655f, 0.2268f, 0f };
								break;
							
							case 2:
								Var1 = { 0.689125f, 0.171575f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.247825f, -0.123625f, 0f };
								break;
							
							case 1:
								Var1 = { 0.2163f, -0.04745f, 0f };
								break;
							
							case 2:
								Var1 = { 0.2869f, -0.211925f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.2804f, -0.109775f, 0f };
								break;
							
							case 1:
								Var1 = { -0.2552f, -0.031225f, 0f };
								break;
							
							case 2:
								Var1 = { -0.30935f, -0.205675f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.606975f, 0.249675f, 0f };
								break;
							
							case 1:
								Var1 = { -0.529875f, 0.281425f, 0f };
								break;
							
							case 2:
								Var1 = { -0.69795f, 0.211525f, 0f };
								break;
						}
						break;
				}
				break;
			}
	}
	if (!bParam4)
	{
		Var1.z = fVar0;
	}
	else
	{
		Var1.z = fVar0;
		switch (iParam0)
		{
			case 10:
			case 50:
			case 100:
			case 500:
			case 1000:
			case 5000:
			case 10000:
				Var1.z = (Var1.z + 0.004f);
				break;
			}
	}
	return Var1;
}

int func_392(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		switch (iParam0)
		{
			case 10:
				return 2008414264;
			
			case 20:
				return 1800355615;
			
			case 30:
				return 1800355615;
			
			case 40:
				return 1800355615;
			
			case 50:
				return -598805089;
			
			case 60:
				return 1800355615;
			
			case 70:
				return 1800355615;
			
			case 80:
				return 1800355615;
			
			case 90:
				return 1800355615;
			
			case 100:
				return 441009964;
			
			case 150:
				return 756786151;
			
			case 200:
				return -2091114748;
			
			case 250:
				return 756786151;
			
			case 300:
				return -2091114748;
			
			case 350:
				return 756786151;
			
			case 400:
				return -2091114748;
			
			case 450:
				return 756786151;
			
			case 500:
				return 1267915316;
			
			case 1000:
				return -1188651171;
			
			case 1500:
				return -1416097063;
			
			case 2000:
				return -1556060499;
			
			case 2500:
				return -1416097063;
			
			case 3000:
				return -1556060499;
			
			case 3500:
				return -1416097063;
			
			case 4000:
				return -1556060499;
			
			case 4500:
				return -1416097063;
			
			case 5000:
				return -1507232097;
			
			case 6000:
				return -1556060499;
			
			case 7000:
				return -1556060499;
			
			case 8000:
				return -1556060499;
			
			case 9000:
				return -1556060499;
			
			case 10000:
				return 202221865;
			
			case 15000:
				return -1675008461;
			
			case 20000:
				return 1839526326;
			
			case 25000:
				return -1675008461;
			
			case 30000:
				return 1839526326;
			
			case 35000:
				return -1675008461;
			
			case 40000:
				return 1839526326;
			
			case 45000:
				return -1675008461;
			
			case 50000:
				return 1839526326;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				return 2008414264;
			
			case 20:
				return 1800355615;
			
			case 30:
				return 1800355615;
			
			case 40:
				return 1800355615;
			
			case 50:
				return -598805089;
			
			case 60:
				return 1800355615;
			
			case 70:
				return 1800355615;
			
			case 80:
				return 1800355615;
			
			case 90:
				return 1800355615;
			
			case 100:
				return 441009964;
			
			case 150:
				return 756786151;
			
			case 200:
				return -2091114748;
			
			case 250:
				return 756786151;
			
			case 300:
				return -2091114748;
			
			case 350:
				return 756786151;
			
			case 400:
				return -2091114748;
			
			case 450:
				return 756786151;
			
			case 500:
				return 1267915316;
			
			case 1000:
				return -1188651171;
			
			case 1500:
				return -1416097063;
			
			case 2000:
				return -1556060499;
			
			case 2500:
				return -1416097063;
			
			case 3000:
				return -1556060499;
			
			case 3500:
				return -1416097063;
			
			case 4000:
				return -1556060499;
			
			case 4500:
				return -1416097063;
			
			case 5000:
				return 85802248;
			
			case 6000:
				return -1556060499;
			
			case 7000:
				return -1556060499;
			
			case 8000:
				return -1556060499;
			
			case 9000:
				return -1556060499;
			
			case 10000:
				return 2032220541;
			
			case 15000:
				return 1135563927;
			
			case 20000:
				return -1204079456;
			
			case 25000:
				return 1135563927;
			
			case 30000:
				return -1204079456;
			
			case 35000:
				return 1135563927;
			
			case 40000:
				return -1204079456;
			
			case 45000:
				return 1135563927;
			
			case 50000:
				return -1204079456;
			}
		
		default:
	}
	return 0;
}

int func_393(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0 * 3 * 4 + iParam1 * 3) + iParam2);
}

void func_394()
{
	iVar0 = 0;
	while (iVar0 < 18)
	{
		uVar1 = func_395(iVar0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uVar1);
		iVar0++;
	}
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2008414264;
		
		case 1:
			return -598805089;
		
		case 2:
			return 441009964;
		
		case 3:
			return 1267915316;
		
		case 4:
			return -1188651171;
		
		case 5:
			return -1507232097;
		
		case 6:
			return 202221865;
		
		case 7:
			return 1800355615;
		
		case 8:
			return 756786151;
		
		case 9:
			return -2091114748;
		
		case 10:
			return -1416097063;
		
		case 11:
			return -1556060499;
		
		case 12:
			return -1675008461;
		
		case 13:
			return 1839526326;
		
		case 14:
			return 85802248;
		
		case 15:
			return 1135563927;
		
		case 16:
			return 2032220541;
		
		case 17:
			return -1204079456;
		
		default:
	}
	return 0;
}

int func_396()
{
	iVar0 = 0;
	while (iVar0 < 18)
	{
		uVar1 = func_395(iVar0);
		STREAMING::REQUEST_MODEL(uVar1);
		if (!STREAMING::HAS_MODEL_LOADED(iVar1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_397()
{
	return GAMEPLAY::IS_BIT_SET(Global_1676377.f_6, 12);
}

int func_398()
{
	return func_399(8248, -1, 0);
}

int func_399(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_400(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_400(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_137();
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

void func_401()
{
	if (Local_1038.f_26 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1951))
		{
			iLocal_1951 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(0), 1f, 618005505, 0, 0, 0);
		}
		else if (func_412() != func_411() && CAM::IS_SCREEN_FADED_OUT())
		{
			if (unk_0xE84EB93729C5F36A(iLocal_1951) != func_402(func_412()))
			{
				OBJECT::_PAINT_BOAT_EXTERIOR(iLocal_1951, func_402(func_412()));
			}
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1952))
		{
			iLocal_1952 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1133.74f, 266.6947f, -52.0409f, 1f, 618005505, 0, 0, 0);
		}
		else if (unk_0xE84EB93729C5F36A(iLocal_1952) != 3)
		{
			OBJECT::_PAINT_BOAT_EXTERIOR(iLocal_1952, 3);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_1953))
		{
			iLocal_1953 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1148.74f, 251.6947f, -52.0409f, 1f, 618005505, 0, 0, 0);
		}
		else if (unk_0xE84EB93729C5F36A(iLocal_1953) != 3)
		{
			OBJECT::_PAINT_BOAT_EXTERIOR(iLocal_1953, 3);
		}
	}
}

int func_402(int iParam0)
{
	if (func_405(iParam0))
	{
		return 1;
	}
	else if (func_404(iParam0))
	{
		return 2;
	}
	else if (func_403(iParam0))
	{
		return 3;
	}
	return 1;
}

int func_403(int iParam0)
{
	if (iParam0 != func_411())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_369.f_1, 21);
	}
	return 0;
}

int func_404(int iParam0)
{
	if (iParam0 != func_411())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_369.f_1, 20);
	}
	return 0;
}

int func_405(int iParam0)
{
	if (iParam0 != func_411())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_369.f_1, 19);
	}
	return 0;
}

int func_406()
{
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		uVar2 = func_40(iVar1, Local_1038.f_5);
		STREAMING::REQUEST_MODEL(uVar2);
		if (!STREAMING::HAS_MODEL_LOADED(iVar2))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_407()
{
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		uVar2 = func_40(iVar1, Local_1038.f_5);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uVar2);
		iVar0++;
	}
}

int func_408()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	return 0;
}

int func_409()
{
	return func_410(PLAYER::PLAYER_ID());
}

var func_410(int iParam0)
{
	return GAMEPLAY::GET_BITS_IN_RANGE(Global_2425662[iParam0].f_310.f_3, 28, 31);
}

int func_411()
{
	return -1;
}

int func_412()
{
	return func_413(PLAYER::PLAYER_ID());
}

int func_413(int iParam0)
{
	if (iParam0 == func_411())
	{
		return iParam0;
	}
	if (func_415(iParam0) != -1)
	{
		iVar0 = func_414(func_415(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_317(iParam0, 0))
			{
				return func_227(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_411();
		}
		return Global_2425662[iParam0].f_310.f_8;
	}
	return func_411();
}

int func_414(int iParam0)
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

int func_415(int iParam0)
{
	if (iParam0 != func_411())
	{
		if (func_62(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5;
		}
		else if (((Global_1312877 || Global_2405072.f_2671) && iParam0 == PLAYER::PLAYER_ID()) && func_62(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5;
		}
	}
	return -1;
}

int func_416(int iParam0)
{
	if (iParam0 != func_411() && func_62(iParam0, 1, 1))
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310, 4);
	}
	return 0;
}

int func_417(int iParam0)
{
	if (iParam0 != func_411())
	{
		if (func_62(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_414(Global_2425662[iParam0].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_418(int iParam0)
{
	if (iParam0 != func_411())
	{
		if (func_62(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_414(Global_2425662[iParam0].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

bool func_419()
{
	return GAMEPLAY::IS_BIT_SET(Global_1676377.f_3, 2);
}

void func_420()
{
	if (Local_1038.f_798 > 2)
	{
		if (Global_262145.f_26036)
		{
			unk_0xF740FB339D471C35(&Local_1901);
		}
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Cards_Focus_Hand"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Cards_Focus_Hand");
	}
	func_375(0);
	func_407();
	func_394();
	func_423();
	func_422();
	if (ENTITY::DOES_ENTITY_EXIST(Local_1038.f_34))
	{
		OBJECT::DELETE_OBJECT(&(Local_1038.f_34));
	}
	if (Local_1038.f_798 > 0)
	{
		STREAMING::REMOVE_ANIM_DICT(func_45());
		STREAMING::REMOVE_ANIM_DICT(func_78());
		STREAMING::REMOVE_ANIM_DICT(func_92());
		STREAMING::REMOVE_ANIM_DICT(func_231());
	}
	Global_1696046 = 0;
	func_421();
}

void func_421()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_422()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1038.f_35[iVar0]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_1038.f_35[iVar0]))
			{
				ENTITY::DETACH_ENTITY(Local_1038.f_35[iVar0], 1, 1);
			}
			OBJECT::DELETE_OBJECT(&(Local_1038.f_35[iVar0]));
		}
		iVar0++;
	}
}

void func_423()
{
	iVar0 = 48;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1038.f_40[iVar1]))
		{
			OBJECT::DELETE_OBJECT(&(Local_1038.f_40[iVar1]));
		}
		iVar1++;
	}
}

int func_424()
{
	func_432(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_431())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_430())
	{
		return 1;
	}
	if (func_429(159))
	{
		if (!func_428())
		{
			return 1;
		}
	}
	if (func_429(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_425() != 0)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_425()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_425()
{
	switch (func_427())
	{
		case 0:
			return func_426();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_426()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_427()
{
	return Global_30768;
}

bool func_428()
{
	return Global_2450632.f_598;
}

int func_429(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_430()
{
	return Global_2460680;
}

bool func_431()
{
	return Global_2450632.f_593;
}

void func_432(var uParam0)
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
					func_433(iVar0);
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

void func_433(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_62(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_434(uVar4, &bVar5))
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

int func_434(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_435()
{
	if (Global_1696039)
	{
		Global_1696039 = 0;
	}
	if (func_417(PLAYER::PLAYER_ID()) && func_412() != func_411())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2425662[func_412()].f_310.f_4, 4))
		{
			Local_1038.f_5 = 1;
		}
	}
	while (!(Global_2514396 != -1 || func_417(PLAYER::PLAYER_ID())))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_420();
		}
		if (func_424())
		{
			func_420();
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = -1;
	if (func_417(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_439();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, iVar0);
	func_437(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_116, 633);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_749, 289);
	if (func_417(PLAYER::PLAYER_ID()))
	{
		while (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(15))
		{
			SYSTEM::WAIT(0);
		}
		Local_1038.f_26 = 1;
		unk_0x2C8DF5D129595281(1);
		unk_0x797F9C5E661D920E(15);
	}
	else
	{
		while (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(45))
		{
			SYSTEM::WAIT(0);
		}
		unk_0x2C8DF5D129595281(3);
		unk_0x797F9C5E661D920E(45);
	}
	if (!func_436())
	{
		func_420();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	}
	else
	{
		func_420();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_417(PLAYER::PLAYER_ID()))
		{
			Local_116.f_15[0] = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 14);
		}
		else
		{
			Local_116.f_15[0] = Global_2514414[0];
			Local_116.f_15[1] = Global_2514414[1];
			Local_116.f_15[2] = Global_2514414[2];
			Local_116.f_15[3] = Global_2514414[3];
		}
	}
	Global_1696046 = 1;
}

int func_436()
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
		if (func_431())
		{
			return 0;
		}
		if (func_429(157))
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

int func_437(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_421();
			}
			else
			{
				return 0;
			}
		}
		if (!func_438())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_421();
					}
					else
					{
						return 0;
					}
				}
				if (func_431())
				{
					if (!bParam2)
					{
						func_421();
					}
					else
					{
						return 0;
					}
				}
				if (func_429(157))
				{
					if (!bParam2)
					{
						func_421();
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
					func_421();
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
				func_421();
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
			func_421();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_438()
{
	return Global_1312854;
}

int func_439()
{
	uVar0 = Global_2425662[PLAYER::PLAYER_ID()].f_310.f_6;
	return uVar0;
}

