StarterArea_MapScripts::
	.byte 0

StarterArea_SetFlags::
	lock
	setflag B_FLAG_NO_BAG_USE
	setflag B_FLAG_AI_VS_AI_BATTLE
	setflag B_FLAG_SLEEP_CLAUSE
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	giveitem ITEM_GRISEOUS_ORB, 1
	giveitem ITEM_SOUL_DEW, 2
	removeobject 1
	setflag FLAG_TEMP_1
	release
	end
	
StarterArea_Sign::
	msgbox StarterArea_Text_Sign, MSGBOX_SIGN
	end

StarterArea_Starter1A::
	goto_if_unset FLAG_TEMP_2, StarterArea_StarterSet1A
	bufferspeciesname STR_VAR_1, VAR_TEMP_0
	lock
	msgbox StarterArea_Text_Starter1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Starter_Area_Terminate
	givemon VAR_TEMP_0, 100
	COPYVAR VAR_STARTER_1, VAR_TEMP_0
	goto StarterArea_Clear0
	end

StarterArea_Starter1B::
	goto_if_unset FLAG_TEMP_3, StarterArea_StarterSet1B
	bufferspeciesname STR_VAR_2, VAR_TEMP_1
	lock
	msgbox StarterArea_Text_Starter2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Starter_Area_Terminate
	givemon VAR_TEMP_1, 100
	COPYVAR VAR_STARTER_1, VAR_TEMP_1
	goto StarterArea_Clear0
	end

StarterArea_Starter1C::
	goto_if_unset FLAG_TEMP_4, StarterArea_StarterSet1C
	bufferspeciesname STR_VAR_3, VAR_TEMP_2
	lock
	msgbox StarterArea_Text_Starter3, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Starter_Area_Terminate
	givemon VAR_TEMP_2, 100
	COPYVAR VAR_STARTER_1, VAR_TEMP_2
	goto StarterArea_Clear0
	end
	
StarterArea_StarterSet1A::
	randomelement SPECIES_DIALGA, SPECIES_KYOGRE, SPECIES_GIRATINA, SPECIES_GROUDON, SPECIES_DEOXYS_SPEED, SPECIES_DARKRAI, SPECIES_LATIAS, SPECIES_MEWTWO, SPECIES_BRONZONG, SPECIES_LATIOS, SPECIES_PALKIA, SPECIES_JIRACHI, SPECIES_RAYQUAZA, SPECIES_TYRANITAR, SPECIES_BLISSEY, SPECIES_SKARMORY, SPECIES_GARCHOMP, SPECIES_FORRETRESS, SPECIES_HEATRAN, SPECIES_DEOXYS_ATTACK, SPECIES_KABUTOPS, SPECIES_HO_OH, SPECIES_MANAPHY, SPECIES_SCIZOR, SPECIES_LUCARIO, SPECIES_WOBBUFFET, SPECIES_TENTACRUEL, SPECIES_KINGDRA, SPECIES_LUGIA, SPECIES_QWILFISH, SPECIES_CRESSELIA, SPECIES_SHAYMIN_SKY, SPECIES_FROSLASS, SPECIES_MEW
	copyvar VAR_TEMP_0, VAR_RESULT
	getcaughtmon VAR_TEMP_0
	goto_if_eq VAR_RESULT, TRUE, StarterArea_StarterSet1A
	bufferspeciesname STR_VAR_1, VAR_TEMP_0
	setflag FLAG_TEMP_2
	goto StarterArea_Starter1A
	end
	
StarterArea_StarterSet1B::
	randomelement SPECIES_DIALGA, SPECIES_KYOGRE, SPECIES_GIRATINA, SPECIES_GROUDON, SPECIES_DEOXYS_SPEED, SPECIES_DARKRAI, SPECIES_LATIAS, SPECIES_MEWTWO, SPECIES_BRONZONG, SPECIES_LATIOS, SPECIES_PALKIA, SPECIES_JIRACHI, SPECIES_RAYQUAZA, SPECIES_TYRANITAR, SPECIES_BLISSEY, SPECIES_SKARMORY, SPECIES_GARCHOMP, SPECIES_FORRETRESS, SPECIES_HEATRAN
	copyvar VAR_TEMP_1, VAR_RESULT
	getcaughtmon VAR_TEMP_1
	goto_if_eq VAR_RESULT, TRUE, StarterArea_StarterSet1B
	bufferspeciesname STR_VAR_2, VAR_TEMP_1
	setflag FLAG_TEMP_3
	goto StarterArea_Starter1B
	end

StarterArea_StarterSet1C::
	randomelement SPECIES_DIALGA, SPECIES_KYOGRE, SPECIES_GIRATINA, SPECIES_GROUDON, SPECIES_DEOXYS_SPEED, SPECIES_DARKRAI, SPECIES_LATIAS, SPECIES_MEWTWO, SPECIES_BRONZONG, SPECIES_LATIOS, SPECIES_PALKIA, SPECIES_JIRACHI, SPECIES_RAYQUAZA, SPECIES_TYRANITAR, SPECIES_BLISSEY, SPECIES_SKARMORY, SPECIES_GARCHOMP, SPECIES_FORRETRESS, SPECIES_HEATRAN, SPECIES_DEOXYS_ATTACK, SPECIES_KABUTOPS, SPECIES_HO_OH, SPECIES_MANAPHY, SPECIES_SCIZOR, SPECIES_LUCARIO, SPECIES_WOBBUFFET, SPECIES_TENTACRUEL, SPECIES_KINGDRA
	copyvar VAR_TEMP_2, VAR_RESULT
	getcaughtmon VAR_TEMP_2
	goto_if_eq VAR_RESULT, TRUE, StarterArea_StarterSet1C
	bufferspeciesname STR_VAR_3, VAR_TEMP_2
	setflag FLAG_TEMP_4
	goto StarterArea_Starter1C
	end

StarterArea_Item1A::
	goto_if_unset FLAG_TEMP_5, StarterArea_ItemSet1A
	bufferitemname STR_VAR_1, VAR_TEMP_3
	lock
	msgbox StarterArea_Text_Item1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Starter_Area_Terminate
	giveitem VAR_TEMP_3
	COPYVAR VAR_ITEM_1, VAR_TEMP_3
	goto StarterArea_Clear0
	end

StarterArea_Item1B::
	goto_if_unset FLAG_TEMP_6, StarterArea_ItemSet1B
	bufferitemname STR_VAR_2, VAR_TEMP_4
	lock
	msgbox StarterArea_Text_Item2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Starter_Area_Terminate
	giveitem VAR_TEMP_4
	COPYVAR VAR_ITEM_2, VAR_TEMP_4
	goto StarterArea_Clear0
	end

StarterArea_Item1C::
	goto_if_unset FLAG_TEMP_7, StarterArea_ItemSet1C
	bufferitemname STR_VAR_3, VAR_TEMP_5
	lock
	msgbox StarterArea_Text_Item3, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Starter_Area_Terminate
	giveitem VAR_TEMP_5
	COPYVAR VAR_ITEM_3, VAR_TEMP_5
	goto StarterArea_Clear0
	end
	
StarterArea_ItemSet1A::
	randomelement ITEM_LEFTOVERS
	copyvar VAR_TEMP_3, VAR_RESULT
	bufferitemname STR_VAR_1, VAR_TEMP_3
	setflag FLAG_TEMP_5
	goto StarterArea_Item1A
	end

StarterArea_ItemSet1B::
	randomelement ITEM_CHOICE_SCARF, ITEM_CHOICE_SPECS, ITEM_EXPERT_BELT, ITEM_FOCUS_SASH, ITEM_LIFE_ORB, ITEM_LUM_BERRY
	copyvar VAR_TEMP_4, VAR_RESULT
	bufferitemname STR_VAR_2, VAR_TEMP_4
	setflag FLAG_TEMP_6
	goto StarterArea_Item1B
	end
	
StarterArea_ItemSet1C::
	randomelement ITEM_CHOICE_BAND, ITEM_SALAC_BERRY, ITEM_SITRUS_BERRY, ITEM_CHESTO_BERRY, ITEM_CHOPLE_BERRY, ITEM_COLBUR_BERRY, ITEM_CUSTAP_BERRY, ITEM_HABAN_BERRY, ITEM_LIGHT_CLAY, ITEM_OCCA_BERRY, ITEM_PASSHO_BERRY, ITEM_SHUCA_BERRY, ITEM_WACAN_BERRY, ITEM_WIDE_LENS, ITEM_YACHE_BERRY
	copyvar VAR_TEMP_5, VAR_RESULT
	bufferitemname STR_VAR_3, VAR_TEMP_5
	setflag FLAG_TEMP_7
	goto StarterArea_Item1C
	end

StarterArea_Clear0::
	goto_if_unset FLAG_TEMP_8, StarterArea_Clear1
	goto_if_unset FLAG_TEMP_9, StarterArea_Clear2
	goto_if_unset FLAG_TEMP_10, StarterArea_Clear3
	goto_if_unset FLAG_TEMP_11, StarterArea_Clear4
	goto_if_unset FLAG_TEMP_12, StarterArea_Clear5
	goto_if_unset FLAG_TEMP_13, StarterArea_Clear6
	release
	end

StarterArea_Clear1::
	setflag FLAG_TEMP_8
	clearflag FLAG_TEMP_2
	clearflag FLAG_TEMP_3
	clearflag FLAG_TEMP_4
	removeobject 2
	removeobject 3
	removeobject 4
	release
	end

StarterArea_Clear2::
	setflag FLAG_TEMP_9
	clearflag FLAG_TEMP_5
	clearflag FLAG_TEMP_6
	clearflag FLAG_TEMP_7
	removeobject 5
	removeobject 6
	removeobject 7
	release
	end
	

StarterArea_Clear3::
	setflag FLAG_TEMP_10
	clearflag FLAG_TEMP_2
	clearflag FLAG_TEMP_3
	clearflag FLAG_TEMP_4
	removeobject 8
	removeobject 9
	removeobject 10
	release
	end
	

StarterArea_Clear4::
	setflag FLAG_TEMP_11
	clearflag FLAG_TEMP_5
	clearflag FLAG_TEMP_6
	clearflag FLAG_TEMP_7
	removeobject 11
	removeobject 12
	removeobject 13
	release
	end
	

StarterArea_Clear5::
	setflag FLAG_TEMP_12
	clearflag FLAG_TEMP_2
	clearflag FLAG_TEMP_3
	clearflag FLAG_TEMP_4
	removeobject 14
	removeobject 15
	removeobject 16
	release
	end
	
StarterArea_Clear6::
	setflag FLAG_TEMP_13
	clearflag FLAG_TEMP_5
	clearflag FLAG_TEMP_6
	clearflag FLAG_TEMP_7
	removeobject 17
	removeobject 18
	removeobject 19
	release
	end

//StarterArea_Fight1::
//	trainerbattle_single
//	end

Starter_Area_Terminate::
	release
	end

StarterArea_Text_Sign:
	.string "Just setting\n"
	.string "flags. Ignore.$"

StarterArea_Text_Starter1:
	.string "Would you like\n"
	.string "{STR_VAR_1}?$"

StarterArea_Text_Starter2:
	.string "Would you like\n"
	.string "{STR_VAR_2}?$"

StarterArea_Text_Starter3:
	.string "Would you like\n"
	.string "{STR_VAR_3}?$"
	
StarterArea_Text_Item1:
	.string "Would you like\n"
	.string "{STR_VAR_1}?$"

StarterArea_Text_Item2:
	.string "Would you like\n"
	.string "{STR_VAR_2}?$"

StarterArea_Text_Item3:
	.string "Would you like\n"
	.string "{STR_VAR_3}?$"
