void __EntryFunction__()
{
	GAMEPLAY::START_SAVE_DATA(&Global_2883584, 1, 1);
	func_1();
	GAMEPLAY::STOP_SAVE_DATA();
	GAMEPLAY::SET_BIT(&Global_4270623, 1);
}

void func_1()
{
	GAMEPLAY::REGISTER_INT_TO_SAVE(&Global_2883584, "PILOT_SCHOOL_DUMMY_DATA");
}

