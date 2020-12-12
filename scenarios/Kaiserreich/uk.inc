province = {	id = 503	landfort = 0 coastalfort = 3 }#Dover
province = {	id = 1717	landfort = 3 coastalfort = 0 }#Hong Kong
province = {	id = 1480	landfort = 0 coastalfort = 3 }#Ceylon
province = {	id = 989	landfort = 6  coastalfort = 6 } #gibraltar
province = {	id = 896	landfort = 0  coastalfort = 5 } #malta
province = {	id = 1766	landfort = 0  coastalfort = 5 } #singapore


#Supply pools in the empire..
province = {  id = 1100  oilpool = 100 supplypool = 200 } # Egypt (Port Said)
province = {  id = 1459  oilpool = 100 supplypool = 200 } # India (Bombay)



country = { 
    tag = ENG
	capital = 499

	alignment =  { x= 100 y = 0}
	
	ai = "UK.ai"

	diplomacy = {
        relation = { tag = SAF access = yes }
	  relation = { tag = OMN access = yes }
	  relation = { tag = YEM access = yes }
	  relation = { tag = IRQ access = yes }
	  relation = { tag = BHU access = yes }
	  relation = { tag = NEP access = yes }
			}

	manpower = 1450

	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200

	techlevels = { 
		12000 12100 13000 13100 11000 11100 14000 1000 1100 1200 1300 2000  2100 5000 5100 6000 6100 9000
		9100 10000 10100 7000  7100 8000 8100  8200 3000  3100 4000 4100 4200 4300 5200
	 }
	 techapps = {
		12001 13001 13002 13004 11001 11002 11004 14001 14003 14005 14008 14012 14014 14015 14016 1001 1107 1201
		1205 1301 2001 2002 2003 2004 2005 2006 2101 2103 2104 5101 6001 6002 6003 6004 6005 6006 6011 6101
		6102 6103 6105 6106 6107  6108 9001 10002 10003 7001 7002 7101 7102 3002 3003 3004 3005 3006 3007
		3101 3102 4001 4101 4102 4201 4202 4203 4204 12004 12101 13003 13006 1203 5202 6007 6008
		6009 6010 6104 6109 6110 6111 6112 9002 9005 6012
		4301 4302 4303
	 }

    ownedprovinces =      {
	482 483 484 485 486 487 488 489 490 491 493
	 497 498 499 500 501 502 503
	#India
	1450 1442 1443 1444 1445 1446 1497 1447 1456 1457 1451 1458 1459 1463 1464 1460 1496 1469 1467 1468 1466 1465 1478 1479 1480 1498 1490 1592 1584 1585 1586 1491 1499 1495  
	1417 1418 1448 1434 1435 1449 
	#Egypt
	1205 1275 
	1209 1283 1348 
	1091 1093 1099 1090 1100 1101 1102 1103 1104 1200 1201 1202 1203 1206  

	#Sudan
	1193 1196 1199 1198 1195 1298 1190 1191 

	#Indochina etc
	1788 1787 1766 1765 1762 1717 1590 1589 1593 1594 1587 1588 1599 1789 

	#Carribean
	308 309 276 275 274 272 270 268 260 225 233 222 461 

	#Misc British
	414 469 1310 1278 989 896 40 50 56 2129 2119 2121 168 

	# British India
	1500 1439 1501 1582 1745 1438 1752 1580 1583 2200 1953 

	# British East Africa
	1301 1308 1307 1304 1311 1309 1306 1183 1287 1340 1332 1331 37 38 

	#British South Africa
	1166 1163 1180 1181 1146 1145  1144 

	#British West Africa
	1063 1065 1070 1066 1069 1067 1057 1054 1042 1035 1068 1147 







	 }
    controlledprovinces = {
	482 483 484 485 486 487 488 489 490 491 493
	 497 498 499 500 501 502 503
	#India
	1450 1442 1443 1444 1445 1446 1497 1447 1456 1457 1451 1458 1459 1463 1464 1460 1496 1469 1467 1468 1466 1465 1478 1479 1480 1498 1490 1592 1584 1585 1586 1491 1499 1495  
	1417 1418 1448 1434 1435 1449 
	#Egypt
	1205 1275 
	1209 1283 1348 
	1091 1093 1099 1090 1100 1101 1102 1103 1104 1200 1201 1202 1203 1206  

	#Sudan
	1193 1196 1199 1198 1195 1298 1190 1191 

	#Indochina etc
	1788 1787 1766 1765 1762 1717 1590 1589 1593 1594 1587 1588 1599 1789 

	#Carribean
	308 309 276 275 274 272 270 268 260 225 233 222 461 

	#Misc British
	414 469 1310 1278 989 896 40 50 56 2129 2119 2121 168 

	# British India
	1500 1439 1501 1582 1745 1438 1752 1580 1583 2200 1953

	# British East Africa
	1301 1308 1307 1304 1311 1309 1306 1183 1287 1340 1332 1331 37 38

	#British South Africa
	1166 1163 1180 1181 1146 1145  1144 

	#British West Africa
	1063 1065 1070 1066 1069 1067 1057 1054 1042 1035 1068 1147 





	  }
    nationalprovinces =   {
	482 483 484 485 486 487 488 489 490 491 493
	 497 498 499 500 501 502 503
	#India
	1450 1442 1443 1444 1445 1446 1497 1447 1456 1457 1451 1458 1459 1463 1464 1460 1496 1469 1467 1468 1466 1465 1478 1479 1480 1498 1490 1592 1584 1585 1586 1491 1499 1495  
	1417 1418 1448 1434 1435 1449 
	#Egypt
	1205 1275 
	1209 1283 1348 
	1091 1093 1099 1090 1100 1101 1102 1103 1104 1200 1201 1202 1203 1206  

	#Sudan
	1193 1196 1199 1198 1195 1298 1190 1191 

	#Indochina etc
	1788 1787 1766 1765 1762 1717 1590 1589 1593 1594 1587 1588 1599 1789 

	#Carribean
	308 309 276 275 274 272 270 268 260 225 233 222 461 

	#Misc British
	414 469 1310 1278 989 896 40 50 56 2129 2119 2121 168 

	# British India
	1500 1439 1501 1582 1745 1438 1752 1580 1583 2200 1953

	# British East Africa
	1301 1308 1307 1304 1311 1309 1306 1183 1287 1340 1332 1331 37 38  

	#British South Africa
	1166 1163 1180 1181 1146 1145  1144 

	#British West Africa
	1063 1065 1070 1066 1069 1067 1057 1054 1042 1035 1068 1147 





	  }


	landunit = {
		name = "Aldershot Command"
		location = 500
		id = { type = 10499 id = 1 }
		division = { id = { type = 10499 id = 2 } name = "1st Infantry Division" 
type = infantry strength = 70 }
		division = { id = { type = 10499 id = 3 } name = "2nd Infantry Division" 
type = infantry strength = 70 }

	}

	landunit = {
		name = "Northern Command"
		location = 490
		id = { type = 10499 id = 4 }
		division = { id = { type = 10499 id = 5 } name = "5th Infantry Division" 
type = infantry strength = 60 }
	}



	landunit = {
		name = "Southern Command"
		location = 503
		id = { type = 10499 id = 6 }
		division = { id = { type = 10499 id = 7 } name = "3rd Infantry Division" 
type = infantry strength = 60 }
	}


	landunit = {
		name = "Hong Kong Command"
		location = 1717
		id = { type = 10499 id = 8 }
		division = { id = { type = 10499 id = 9 } name = "Hong Kong Defense Force" 
type = infantry strength = 10 }
	}


	landunit = {
		name = "Singapore Command"
		location = 1766
		id = { type = 10499 id = 10 }
		division = { id = { type = 10499 id = 11 } name = "Singapore Defence 
Force" type = infantry strength = 25 }
	}


	landunit = {
		name = "Gibraltar Command"
		location = 989
		id = { type = 10499 id = 12 }
		division = { id = { type = 10499 id = 13 } name = "Gibraltar Defense 
Force" type = infantry strength = 20 }
	}
	landunit = {
		name = "Ceylon Command"
		location = 1480
		id = { type = 10499 id = 14 }
		division = { id = { type = 10499 id = 15 } name = "Ceylon Defense Force" 
type = infantry strength = 15 }
	}

	landunit = {
		name = "Malta Command"
		location = 896
		id = { type = 10499 id = 16 }
		division = { id = { type = 10499 id = 17 } name = "Malta Defense Force" 
type = infantry strength = 20 }
	}

	landunit = {
		name = "Middle East Command"
		location = 1101
		id = { type = 10499 id = 18 }
		division = { id = { type = 10499 id = 19 } name = "7th Infantry Division" 
type = infantry strength = 60 }
		division = { id = { type = 10499 id = 20 } name = "8th Infantry Division" 
type = infantry strength = 40 }
	}


	landunit = {
		name = "1st Indian Infantry"
		location = 1446
		id = { type = 10499 id = 24 }
		division = { id = { type = 10499 id = 25 } name = "1st Indian Infantry" 
type = infantry strength = 50 }
	}


	landunit = {
		name = "2nd Indian Infantry"
		location = 1447
		id = { type = 10499 id = 26 }
		division = { id = { type = 10499 id = 27 } name = "2nd Indian Infantry" 
type = infantry strength = 40 }
	}


	landunit = {
		name = "3rd Indian Infantry"
		location = 1435
		id = { type = 10499 id = 28 }
		division = { id = { type = 10499 id = 29 } name = "3rd Indian Infantry" 
type = infantry strength = 40 }
	}


	landunit = {
		name = "4th Indian Infantry"
		location = 1449
		id = { type = 10499 id = 30 }
		division = { id = { type = 10499 id = 31 } name = "4th Indian Infantry" 
type = infantry strength = 40 }
	}


	landunit = {
		name = "5th Indian Infantry"
		location = 1434
		id = { type = 10499 id = 32 }
		division = { id = { type = 10499 id = 33 } name = "5th Indian Infantry" 
type = infantry strength = 40 }
	}


	landunit = {
		name = "6th Indian Infantry"
		location = 1490
		id = { type = 10499 id = 34 }
		division = { id = { type = 10499 id = 35 } name = "6th Indian Infantry" 
type = infantry strength = 45 }
	}



	landunit = {
		name = "7th Indian Infantry"
		location = 1495
		id = { type = 10499 id = 124 }
		division = { id = { type = 10499 id = 125 } name = "7th Indian Infantry" 
type = infantry strength = 50 }
	}



	landunit = {
		name = "8th Indian Infantry"
		location = 1585
		id = { type = 10499 id = 126 }
		division = { id = { type = 10499 id = 127 } name = "8th Indian Infantry" 
type = infantry strength = 40 }
	}


	landunit = {
		name = "9th Indian Infantry"
		location = 1450
		id = { type = 10499 id = 128 }
		division = { id = { type = 10499 id = 129 } name = "9th Indian Infantry" 
type = infantry strength = 50 }
	}


	landunit = {
		name = "10th Indian Infantry"
		location = 1459
		id = { type = 10499 id = 130 }
		division = { id = { type = 10499 id = 131 } name = "10th Indian Infantry" 
type = infantry strength = 40 }
	}


	landunit = {
		name = "11th Indian Infantry"
		location = 1466
		id = { type = 10499 id = 135 }
		division = { id = { type = 10499 id = 133 } name = "11th Indian Infantry" 
type = infantry strength = 30 }
	}


	landunit = {
		name = "12th Indian Infantry"
		location = 1448
		id = { type = 10499 id =132 }
		division = { id = { type = 10499 id = 134 } name = "12th Indian Infantry" 
type = infantry strength = 40 }
	}




	airunit =
	{
		location = 499
        id = { type = 13016 id = 170 }
		name = "No.1 Group"

		division =
		{
	        id = { type = 13016 id = 171 }
			name = "No.1 Group"
			type = tactical_bomber
			model = 0
			strength = 70
		}
	}
	airunit =
	{
		location = 500
        id = { type = 13016 id = 172 }
		name = "No.2 Group"

		division =
		{
	        id = { type = 13016 id = 173 }
			name = "No.2 Group"
			type = strategic_bomber
			model = 0
			strength = 70
		}
	}
	airunit =
	{
		location = 498
        id = { type = 13016 id = 174 }
		name = "No.3 Group"

		division =
		{
	        id = { type = 13016 id = 175 }
			name = "No.3 Group"
			type = strategic_bomber
			model = 0
			strength = 70
		}
	}
	airunit =
	{
		location = 490
        id = { type = 13016 id = 176 }
		name = "No.4 Group"

		division =
		{
	        id = { type = 13016 id = 177 }
			name = "No.4 Group"
			type = strategic_bomber
			model = 0
			strength = 70
		}
	}
	airunit =
	{
		location = 498
        id = { type = 13016 id = 178 }
		name = "No.5 Group"

		division =
		{
	        id = { type = 13016 id = 179 }
			name = "No.5 Group"
			type = tactical_bomber
			model = 0
			strength = 70
		}
	}
	airunit =
	{
		location = 497
        id = { type = 13016 id = 180 }
		name = "No.11 Group"

		division =
		{
	        id = { type = 13016 id = 181 }
			name = "No.11 Group"
			type = fighter
			model = 0
			strength = 70
		}
	}
	airunit =
	{
		location = 488
        id = { type = 13016 id = 182 }
		name = "No.12 Group"

		division =
		{
	        id = { type = 13016 id = 183 }
			name = "No.12 Group"
			type = fighter
			model = 0
			strength = 70
		}
	}
	airunit =
	{
		location = 490
        id = { type = 13016 id = 184 }
		name = "No.13 Group"

		division =
		{
	        id = { type = 13016 id = 185 }
			name = "No.13 Group"
			type = fighter
			model = 0
			strength = 70
		}
	}
	airunit =
	{
		location = 1101
        id = { type = 13016 id = 186 }
		name = "Middle East Air Command"

		division =
		{
	        id = { type = 13016 id = 187 }
			name = "Middle East Group"
			type = tactical_bomber
			model = 0
			strength = 70
		}
	}
	airunit =
	{
		location = 1585
        id = { type = 13016 id = 188 }
		name = "India Air Command"

		division =
		{
	        id = { type = 13016 id = 189 }
			name = "Indian Group"
			type = tactical_bomber
			model = 0
			strength = 70
		}
	}
	airunit =
	{
		location = 1766
        id = { type = 13016 id = 190 }
		name = "Far East Air Command"

		division =
		{
	        id = { type = 13016 id = 191 }
			name = "Far East Group"
			type = tactical_bomber
			model = 0
			strength = 70
		}
	}


########################
######UK Naval OOB######
######1 Jan. 1936#######
########################

#General Notes
#
#Locations for all carriers except Furious, the battleship Rodney, and all destroyer and submarine flotillas are estimates.
#All units that have an (A), (B), etc. designation are sub-components of the larger unit that was divided due to its size.


#Home Fleet#

navalunit = {
	name = "Home Fleet"
	id = { type = 13016 id = 200 }
	location = 482 #Scapa Flow
	division = { id = { type = 13016 id = 201 } name = "Nelson" type = battleship model = 2 }
	division = { id = { type = 13016 id = 202 } name = "Rodney" type = battleship model = 2 }
	division = { id = { type = 13016 id = 203 } name = "Royal Sovereign" type = battleship model = 0 }
	division = { id = { type = 13016 id = 204 } name = "Royal Oak" type = battleship model = 0 }
	division = { id = { type = 13016 id = 205 } name = "Resolution" type = battleship model = 0 }
	division = { id = { type = 13016 id = 206 } name = "Ramillies" type =  battleship model = 0 }
	division = { id = { type = 13016 id = 207 } name = "Hood" type = battleship model = 1 } #Battlecruiser
	division = { id = { type = 13016 id = 208 } name = "Renown" type = battleship model = 1 } #Battlecruiser
	division = { id = { type = 13016 id = 209 } name = "Furious" type = carrier model = 0 }
	division = { id = { type = 13016 id = 210 } name = "Cairo" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 211 } name = "Galatea" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 212 } name = "Leander" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 213 } name = "Neptune" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 214 } name = "Orion" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 215 } name = "6th Destroyer Flotilla" type = destroyer }
	division = { id = { type = 13016 id = 216 } name = "8th Destroyer Flotilla 	(A)" type = destroyer model = 1 }
	division = { id = { type = 13016 id = 217 } name = "8th Destroyer Flotilla 	(B)" type = destroyer model = 1 }
	division = { id = { type = 13016 id = 218 } name = "2nd Submarine Flotilla 	(A)" type = submarine model = 0 }


	division = { id = { type = 13016 id = 2218 } name = "1st Transports" type = transport }
	division = { id = { type = 13016 id = 2219 } name = "2nd Transports" type = transport }
	division = { id = { type = 13016 id = 2220 } name = "3rd Transports" type = transport }
	division = { id = { type = 13016 id = 2221 } name = "4th Transports" type = transport }

	}

#Non-Associated Destroyers#

navalunit = {
	name = "11th Destroyer Flotilla"
	id = { type = 13016 id = 219 }
	location = 501 #Plymouth
	division = { id = { type = 13016 id = 220 } name = "11th Destroyer Flotilla (A)" type = destroyer model = 1 }
	division = { id = { type = 13016 id = 221 } name = "11th Destroyer Flotilla (B)" type = destroyer model = 1 }
	}

navalunit = {
	name = "15th Destroyer Flotilla (A)"
	id = { type = 13016 id = 222 }
	location = 487 #Actually based at Rosyth, but that is located in the same 	province as Edinburgh.
	division = { id = { type = 13016 id = 223 } name = "15th Destroyer Flotilla (A)" type = destroyer model = 1 }
	}

navalunit = {
	name = "15th Destroyer Flotilla (B)"
	id = { type = 13016 id = 224 }
	location = 491 #Actually based at Milford Haven, but that is located in the same province as Cardiff.
	division = { id = { type = 13016 id = 225 } name = "15th Destroyer Flotilla (B)" type = destroyer model = 1 }
	}

navalunit = {
	name = "16th Destroyer Flotilla"
	id = { type = 13016 id = 226 }
	location = 502 #Southampton - Should be Portsmouth but that province is in the wrong location.
	division = { id = { type = 13016 id = 227 } name = "16th Destroyer Flotilla" type = destroyer model = 1 }
	}

navalunit = {
	name = "19th Destroyer Flotilla"
	id = { type = 13016 id = 228 }
	location = 503 #Portsmouth - Should be Dover
	division = { id = { type = 13016 id = 229 } name = "19th Destroyer Flotilla (A)" type = destroyer model = 1 }
	division = { id = { type = 13016 id = 230 } name = "19th Destroyer Flotilla (B)" type = destroyer model = 1 }
	}

#Note on Non-Associated Destroyers
#
#These destroyers would form the backbone of the convoy escorts.  As of 1 Sept. 1939, there should be zero escorts for every British convoy.

#Mediterranean Fleet#

navalunit = {
	name = "Mediterranean Fleet"
	id = { type = 13016 id = 231 }
	location = 1099 #Alexandria
	division = { id = { type = 13016 id = 232 } name = "Queen Elizabeth" type = battleship model = 1 }
	division = { id = { type = 13016 id = 233 } name = "Barham" type = battleship model = 1 }
	division = { id = { type = 13016 id = 234 } name = "Valiant" type = battleship model = 1 }
	division = { id = { type = 13016 id = 235 } name = "Malaya" type = 	battleship model = 1 }
	division = { id = { type = 13016 id = 236 } name = "Revenge" type = battleship model = 1 }
	division = { id = { type = 13016 id = 237 } name = "Repulse" type = battleship model = 1 }
	division = { id = { type = 13016 id = 238 } name = "Courageous" type = carrier model = 0 }
	division = { id = { type = 13016 id = 239 } name = "Glorious" type =   carrier model = 0 }
	division = { id = { type = 13016 id = 240 } name = "Devonshire" type = cruiser model = 1 } #Heavy Cruiser
	division = { id = { type = 13016 id = 241 } name = "London" type = cruiser model = 1 } #Heavy Cruiser
	division = { id = { type = 13016 id = 242 } name = "Shropshire" type = 	cruiser model = 1 } #Heavy Cruiser
	division = { id = { type = 13016 id = 243 } name = "Sussex" type = cruiser  model = 1} #Heavy Cruiser
	division = { id = { type = 13016 id = 244 } name = "Berwick" type = cruiser model = 1 } #Heavy Cruiser
	division = { id = { type = 13016 id = 245 } name = "Exeter" type = cruiser model = 1} #Heavy Cruiser
	division = { id = { type = 13016 id = 246 } name = "York" type = cruiser model = 1 } #Heavy Cruiser
	division = { id = { type = 13016 id = 247 } name = "Coventry" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 248 } name = "Curlew" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 249 } name = "Delhi" type = cruiser model = 0 }#Light Cruiser
	division = { id = { type = 13016 id = 250 } name = "Despatch" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 251 } name = "Durban" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 252 } name = "Arethusa" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 253 } name = "1st Destroyer Flotilla (A)" type = destroyer model = 1 }
	division = { id = { type = 13016 id = 254 } name = "1st Destroyer Flotilla (B)" type = destroyer model = 0 }
	division = { id = { type = 13016 id = 255 } name = "2nd Destroyer Flotilla (A)" type = destroyer model = 1 }
	division = { id = { type = 13016 id = 256 } name = "2nd Destroyer Flotilla (B)" type = destroyer model = 0 }
	division = { id = { type = 13016 id = 257 } name = "3rd Destroyer Flotilla (A)" type = destroyer model = 1 }
	division = { id = { type = 13016 id = 258 } name = "3rd Destroyer Flotilla (B)" type = destroyer model = 0 }
	division = { id = { type = 13016 id = 259 } name = "1st Submarine Flotilla (A)" type = submarine model = 1 }
	division = { id = { type = 13016 id = 260 } name = "1st Submarine Flotilla (B)" type = submarine model = 0 }
	}

#America & West Indies Station#

navalunit = {
	name = "America & West Indies Station"
	id = { type = 13016 id = 261 }
	location = 222 #Bermuda
	division = { id = { type = 13016 id = 262 } name = "Dragon" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 263 } name = "Ajax" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 264 } name = "12th Destroyer Flotilla" type = destroyer model = 1 }
	}

#Africa Station#

navalunit = {
	name = "Africa Station"
	id = { type = 13016 id = 265 }
	location = 1042 #Freetown
	division = { id = { type = 13016 id = 266 } name = "Carlisle" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 267 } name = "17th Destroyer Flotilla (A)" type = destroyer model = 1 }
	}

#East Indies Station#

navalunit = {
	name = "East Indies Station"
	id = { type = 13016 id = 268 }
	location = 1480 #Trincomalee - Located in Colombo
	division = { id = { type = 13016 id = 269 } name = "Norfolk" type = cruiser model = 1 } #Heavy Cruiser
	division = { id = { type = 13016 id = 270 } name = "Diomede" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 271 } name = "Emerald" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 272 } name = "Enterprise" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 273 } name = "14th Destroyer Flotilla" type = destroyer model = 1 }
	}

#China Station#

navalunit = {
	name = "China Station"
	id = { type = 13016 id = 274 }
	location = 1717 #Hong Kong
	division = { id = { type = 13016 id = 275 } name = "Eagle" type = carrier model = 0 }
	division = { id = { type = 13016 id = 276 } name = "Cornwall" type = cruiser model = 1 } #Heavy Cruiser
	division = { id = { type = 13016 id = 277 } name = "Cumberland" type = cruiser model = 1 } #Heavy Cruiser
	division = { id = { type = 13016 id = 278 } name = "Kent" type = cruiser model = 1 }  #Heavy Cruiser
	division = { id = { type = 13016 id = 279 } name = "Suffolk" type = cruiser model = 1 } #Heavy Cruiser
	division = { id = { type = 13016 id = 280 } name = "Capetown" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 281 } name = "7th Destroyer Flotilla (A)" type = destroyer model = 1 }
	division = { id = { type = 13016 id = 282 } name = "7th Destroyer Flotilla (B)" type = destroyer model = 1 }
	division = { id = { type = 13016 id = 283 } name = "2nd Submarine Flotilla (B)" type = submarine model = 0 }
	division = { id = { type = 13016 id = 284 } name = "2nd Submarine Flotilla (C)" type = submarine model = 0 }
	}

#New Zealand Division#

navalunit = {
	name = "New Zealand Division"
	id = { type = 13016 id = 285 }
	location = 2135 #Auckland
	division = { id = { type = 13016 id = 286 } name = "Dunedin" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 287 } name = "Achilles" type = cruiser model = 0 } #Light Cruiser
	}

#Reserve Fleet#

navalunit = {
	name = "Reserve Fleet"
	id = { type = 13016 id = 288 }
	location = 502 
	division = { id = { type = 13016 id = 289 } name = "Warspite" type = battleship model = 1 }
	division = { id = { type = 13016 id = 290 } name = "Hermes" type = carrier model = 1 }
	division = { id = { type = 13016 id = 291 } name = "Effingham" type = cruiser model = 0 } #Heavy Cruiser
	division = { id = { type = 13016 id = 292 } name = "Frobisher" type = cruiser model = 0 } #Heavy Cruiser
	division = { id = { type = 13016 id = 293 } name = "Dorsetshire" type = cruiser model = 1 } #Heavy Cruiser
	division = { id = { type = 13016 id = 294 } name = "Hawkins" type = cruiser model = 0 } #Heavy Cruiser
	division = { id = { type = 13016 id = 295 } name = "Caledon" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 296 } name = "Calypso" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 297 } name = "Caradoc" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 298 } name = "Calcutta" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 299 } name = "Colombo" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 300 } name = "Cardiff" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 301 } name = "Ceres" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 302 } name = "Curacoa" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 303 } name = "Danae" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 304 } name = "Dauntless" type = cruiser model = 0 } #Light Cruiser
	division = { id = { type = 13016 id = 305 } name = "17th Destroyer Flotilla (B)" type = destroyer model = 0 }
	division = { id = { type = 13016 id = 306 } name = "18th Destroyer Flotilla (A)" type = destroyer model = 0 }
	}

#Royal Australian Navy
#
#HMAS Australia (CA)
#HMAS Canberra (CA)
#HMAS Hobart (CL) - Under Construction
#HMAS Perth (CL) - Under Construction
#HMAS Sydney (CL)

#Warships Under Construction#

development = {
	name = "Ark Royal"
	id = { type = 13016 id = 3000 }
	type = carrier
	model = 1
	cost = 15
	date = { year = 1938 month = november day = 17 }
	}

development = {
	name = "Aurora"
	id = { type = 13016 id = 3001 }
	type = cruiser #Light Cruiser
	model = 1
	cost = 9
	date = { year = 1937 month = november day = 12 }
	}

development = {
	name = "Penelope"
	id = { type = 13016 id = 3002 }
	type = cruiser #Light Cruiser
	model = 1
	cost = 9
	date = { year = 1936 month = november day = 13 }
	}

development = {
	name = "Birmingham"
	id = { type = 13016 id = 3003 }
	type = cruiser #Light Cruiser
	model = 1
	cost = 9
	date = { year = 1937 month = november day = 18 }
	}

development = {
	name = "Glasgow"
	id = { type = 13016 id = 3004 }
	type = cruiser #Light Cruiser
	model = 1
	cost = 9
	date = { year = 1937 month = september day = 9 }
	}

development = {
	name = "Newcastle"
	id = { type = 13016 id = 3005 }
	type = cruiser #Light Cruiser
	model = 1
	cost = 9
	date = { year = 1937 month = march day = 5 }
	}

development = {
	name = "Sheffield"
	id = { type = 13016 id = 3006 }
	type = cruiser #Light Cruiser
	model = 1
	cost = 9
	date = { year = 1937 month = august day = 25 }
	}

development = {
	name = "Southampton"
	id = { type = 13016 id = 3007 }
	type = cruiser #Light Cruiser
	model = 1
	cost = 9
	date = { year = 1937 month = march day = 6 }
	}

development = {
	name = "18th Destroyer Flotilla (B)"
	type = destroyer
	model = 1
	cost = 6
	id = { type = 13016 id = 3008 }
	date = { year = 1936 month = june }
	}

development = {
	name = "19th Destroyer Flotilla (A)"
	type = destroyer
	model = 1
	cost = 6
	id = { type = 13016 id = 3009 }
	date = { year = 1936 month = september }
	}

development = {
	name = "19th Destroyer Flotilla (B)"
	type = destroyer
	model = 1
	cost = 6
	id = { type = 13016 id = 3010 }
	date = { year = 1937 month = january }
	}

development = {
	name = "4th Destroyer Flotilla (A)"
	type = destroyer
	model = 1
	cost = 6
	id = { type = 13016 id = 3011 }
	date = { year = 1937 month = may }
	}

development = {
	name = "4th Destroyer Flotilla (B)"
	type = destroyer
	model = 1
	cost = 6
	id = { type = 13016 id = 3012 }
	date = { year = 1937 month = august }
	}

development = {
	name = "4th Submarine Flotilla (A)"
	type = submarine
	model = 0
	cost = 3
	id = { type = 13016 id = 3013 }
	date = { year = 1936 month = october }
	}

development = {
	name = "4th Submarine Flotilla (B)"
	type = submarine
	model = 0
	cost = 3
	id = { type = 13016 id = 3014 }
	date = { year = 1937 month = september }
	}

	transports = 100

    convoy = { 
        id = { type = 17120 id = 3314 } 
        transports = 28
        escorts = 0
        path = { 1450 1795 1764 1781 1776 1777 1476 1475 1327 1326 1161 1152 470 460 2151 455 453 1014 962 473 505 501 } 
		supplies = no
        } 
    convoy = { 
        id = { type = 17120 id = 3316 } 
        transports = 22 
        escorts = 0
        path = { 1480 1485 1483 1476 1475 1327 1326 1161 1152 470 460 2151 455 453 1014 962 473 505 491 } 
		supplies = no
        } 
    convoy = { 
        id = { type = 17120 id = 3318 } 
        transports = 5 
        escorts = 0
        path = { 493 515 486 } 
		supplies = no
        } 
    convoy = { 
        id = { type = 17120 id = 3321 } 
        transports = 22 
        escorts = 0
        path = { 1091 888 895 899 940 943 1001 1002 1008 994 1010 1014 962 473 920 517 516 502 } 
		supplies = no
        } 
    convoy = { 
        id = { type = 17120 id = 3324 } 
        transports = 25
        escorts = 0
        path = { 1100 886 888 895 899 940 943 1001 1002 1008 994 1010 1014 962 473 505 500 } 
		supplies = no
        } 
    convoy = { 
        id = { type = 17120 id = 3327 } 
        transports = 14 
        escorts = 0
        path = { 1063 1062 1055 463 464 455 453 1014 962 473 505 515 489 } 
		supplies = no
        } 
    convoy = { 
        id = { type = 17121 id = 3317 } 
        transports = 25 
        escorts = 0
        path = { 1788 1795 1764 1781 1776 1777 1476 1475 1327 1326 1161 1152 470 460 2151 455 453 1014 962 473 505 501 } 
		supplies = no
        } 

    convoy = { 
        id = { type = 14712 id = 2798 } 
        transports = 22 
        escorts = 0 
        rubber = no 
        coal = no 
        steel = no 
        oil = no 
        supplies = yes 
        path = { 502 516 517 920 473 962 1014 1010 994 1008 1002 1001 943 940 899 895 888 886 1100 } 
        } 
    convoy = { 
        id = { type = 14712 id = 2800 } 
        transports = 23 
        escorts = 0 
        rubber = no 
        coal = no 
        steel = no 
        oil = no 
        supplies = yes 
        path = { 502 516 517 920 473 962 1014 453 455 464 460 470 1152 1161 1326 1327 1475 1476 1484 1485 1480 } 
        } 
    convoy = { 		  
        id = { type = 14712 id = 2804 } 
        transports = 25 
        escorts = 0 
        rubber = no 
        coal = no 
        steel = no 
        oil = no 
        supplies = yes 
        path = { 502 516 517 920 473 962 1014 453 455 464 460 470 1152 1161 1326 1325 1328 1474 1473 1472 1470 1459 } 
        } 
    convoy = { 
        id = { type = 14712 id = 2806 } 
        transports = 25 
        escorts = 0 
        rubber = no 
        coal = no 
        steel = no 
        oil = no 
        supplies = yes 
        path = { 489 515 505 473 962 1014 453 455 464 460 467 468 1161 1326 1327 1475 1476 1754 1761 1769 1766 } 
        } 
    convoy = { 
        id = { type = 14712 id = 2808 } 
        transports = 30 
        escorts = 0 
        rubber = no 
        coal = no 
        steel = no 
        oil = no 
        supplies = yes 
        path = { 486 515 505 473 962 1014 453 455 464 460 470 1152 1161 1326 1327 1475 1476 1777 1776 1781 1764 1795 1798 1725 1723 1717 } 
        } 
    convoy = { 
        id = { type = 14712 id = 2811 } 
        transports = 10 
        escorts = 0 
        rubber = no 
        coal = no 
        steel = no 
        oil = no 
        supplies = yes 
        path = { 500 505 473 962 1014 1010 989 } 
        } 
    convoy = { 
        id = { type = 14712 id = 2813 } 
        transports = 15 
        escorts = 0 
        rubber = no 
        coal = no 
        steel = no 
        oil = no 
        supplies = yes 
        path = { 501 920 473 962 1014 1010 994 1008 1002 1001 943 940 899 896 } 
        } 


} 



