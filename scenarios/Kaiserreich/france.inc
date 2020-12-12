
#Maginot line
province = {	id = 555	landfort = 10 }
province = {	id = 542	landfort = 10 }
province = {	id = 554	landfort = 10 }



country = {
	tag = FRA
	alignment = { x = 60 y = 0 }
	ai = "France.ai"

	capital = 527

	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200




	manpower = 1270

	techlevels = {
		12000 13000 13100 11000 14000 1000 1100 1200 1300 2000 2100
		5000 5100 6000 6100 9000 9100 10000 8000 8100 8200 3000 3100 4000 4100 4200 4300 12100
	}
	techapps = {
		12001 13004 11001 11002 11004 14001 14005 14014 1001 1201 1301 2001 2002 2003 2005 2006
		2101 5101 6001 6002 6003 6004 10002 3002 3005 3006 3101 4001 4101 4102 4201 4202
		4203 4204 12004 13006 1203 14003 14008 1107 1205 2004 2103 2104 9003 9006
		4301 4302 4303  6012

	}

	diplomats = 25





	transports = 100
	escorts = 5


	allowed = {
		mechanized = yes
	}




	convoy = {
		id = { type = 14712 id = 3378 }
		transports = 45
		escorts = 0
		rubber = yes
		coal = yes
		steel = yes
		oil = yes
		supplies = no
		path = { 1083 899 909 939 930 }
	}
	convoy = {
		id = { type = 14712 id = 3381 }
		transports = 40
		escorts = 0
		rubber = yes
		coal = yes
		steel = yes
		oil = yes
		supplies = no
		path = { 1607 1738 1737 1740 1770 1769 1761 1754 1476 1475 1327 1326 1161 1152 470 460 2151 455 453 1014 962 473 921 924 922 }
	}
	convoy = {
		id = { type = 14712 id = 3384 }
		transports = 20
		escorts = 0
		rubber = yes
		coal = yes
		steel = yes
		oil = yes
		supplies = no
		path = { 1273 1208 884 892 894 904 909 939 930 }
	}
	convoy = {
		id = { type = 14712 id = 3387 }
		transports = 30
		escorts = 0
		rubber = no
		coal = no
		steel = no
		oil = no
		supplies = yes
		path = { 536 540 920 473 962 1014 453 455 464 460 470 1152 1161 1326 1327 1475 1476 1754 1761 1769 1770 1740 1737 1738 1607 }
	}
	convoy = {
		id = { type = 14712 id = 3650 }
		transports = 14
		escorts = 0
		rubber = yes
		coal = yes
		steel = yes
		oil = yes
		supplies = no
		path = { 929 943 940 899 1083 }
	}


	ownedprovinces =      {
		#europe
		556 543 525 529 528 518 522 544 524 935 545 928 929 927 945 944 926 934 915 917 523 918 923 922
		948 949 950 951 535 534 531 532 537 538 919 536 520 527 526 533 539 947 930 931 937
		#Carribean
		312 271 269
		#North Africa
		1083 1081 1080 1082 1079 1078 1077 1004 1005 1003 1006 1007 1012 1011 1022 1023 1024 1072 1026 1025
		#French West Africa
		1030 1033 1041 1044 1046 1045 1043 1052 1048 1049 1047 1050 1053 1051 1056 1060 1061 1076 1075 1073 1074 31
		#French Eq. Africa
		1108 1109 1111 1112 1113 1114 1116 1117 1118 1120 1124 1126 1128 1127
		#French Indochina
		1603 1608 1607 1604 1728 1727 1736 1735 1734 1733 1732 1731 1739 1730
		#misc french
		1322 1319 1329 1269 1270 1274 1273 1268 1289 2158 2126 67



	}
	controlledprovinces = {
		#europe
		556 554 543 525 529 528 518 522 544 524 935 545 928 929 927 945 944 926 934 915 917 523 918 923 922
		948 949 950 951 535 534 531 532 537 538 919 536 520 527 526 533 539 947 930 931 937 555 542
		#Carribean
		312 271 269
		#North Africa
		1083 1081 1080 1082 1079 1078 1077 1004 1005 1003 1006 1007 1012 1011 1022 1023 1024 1072 1026 1025
		#French West Africa
		1030 1033 1041 1044 1046 1045 1043 1052 1048 1049 1047 1050 1053 1051 1056 1060 1061 1076 1075 1073 1074 31
		#French Eq. Africa
		1108 1109 1111 1112 1113 1114 1116 1117 1118 1120 1124 1126 1128 1127
		#French Indochina
		1603 1608 1607 1604 1728 1727 1736 1735 1734 1733 1732 1731 1739 1730
		#misc french
		1322 1319 1329 1269 1270 1274 1273 1268 1289 2158 2126 67


	}
	nationalprovinces =   {
		#europe
		556 554 543 525 529 528 518 522 544 524 935 545 928 929 927 945 944 926 934 915 917 523 918 923 922
		948 949 950 951 535 534 531 532 537 538 919 536 520 527 526 533 539 947 930 931 937 555 542
		#Carribean
		312 271 269
		#North Africa
		1083 1081 1080 1082 1079 1078 1077 1004 1005 1003 1006 1007 1012 1011 1022 1023 1024 1072 1026 1025
		#French West Africa
		1030 1033 1041 1044 1046 1045 1043 1052 1048 1049 1047 1050 1053 1051 1056 1060 1061 1076 1075 1073 1074 31
		#French Eq. Africa
		1108 1109 1111 1112 1113 1114 1116 1117 1118 1120 1124 1126 1128 1127
		#French Indochina
		1603 1608 1607 1604 1728 1727 1736 1735 1734 1733 1732 1731 1739 1730
		#misc french
		1322 1319 1329 1269 1270 1274 1273 1268 1289 2158 2126 67


	}



	##################
	####FRENCH OOB####
	##################

	landunit = {
		id = { type = 28008 id = 1 }
		name = "7e Arm�e"
		location = 556
		leader = 24130 #Giraud

		division = {
			id = { type = 28008 id = 2 }
			name = "4e d'Infanterie"
			type = infantry
		}

		division = {
			id = { type = 28008 id = 3 }
			name = "21e/60e d'Infanterie"
			type = infantry
		}


		division = {
			id = { type = 28008 id = 5 }
			name = "1e L�g�re M�canique"
			type = panzer
			model = 2
		}

		division = {
			id = { type = 28008 id = 6 }
			name = "4e/25e d'Infanterie Motoris�e"
			strength = 70
			type = motorized
		}

	}

	########################

	landunit = {
		id = { type = 28008 id = 8 }
		name = "1re Arm�e"
		location = 520
		leader = 24040

		division = {
			id = { type = 28008 id = 9 }
			name = "1re Cuirass�e"
			type = mechanized
		}


		division = {
			id = { type = 28008 id = 10 }
			name = "1re/32e d'Infanterie"
			type = infantry
			extra = antitank
		}


		division = {
			id = { type = 28008 id = 11 }
			name = "2e/3re L�g�re M�canique "
			type = panzer
			model = 2
		}



		division = {
			id = { type = 28008 id = 15 }
			name = "12e/15e d'Infanterie Motoris�e"
			type = motorized
		}



		division = {
			id = { type = 28008 id = 17 }
			name = "2e/5e d'Infanterie Nord-Africaine"
			type = infantry
			extra = antitank
		}
	}

	#####################
	#####################

	landunit = {
		id = { type = 28008 id = 18 }
		name = "9e Arm�e"
		location = 527
		leader = 24131

		division = {
			id = { type = 28008 id = 19 }
			name = "1re/4e L�g�re de Cavalerie"
			type = cavalry
		}


		division = {
			id = { type = 28008 id = 21 }
			name = "4e/53re d'Infanterie"
			type = infantry
		}


		division = {
			id = { type = 28008 id = 23 }
			name = "1re/5e d'Infanterie Motoris�e"
			strength = 70
			type = motorized
		}

		division = {
			id = { type = 28008 id = 24 }
			name = "18e/22e d'Infanterie"
			type = infantry
		}

	}

	############################

	landunit = {
		id = { type = 28008 id = 26 }
		name = "2e Arm�e"
		location = 522
		leader = 24087

		division = {
			id = { type = 28008 id = 27 }
			name = "2e/3e L�g�re de Cavalerie"
			type = cavalry
		}

		division = {
			id = { type = 28008 id = 29 }
			name = "71e/3e d'Infanterie"
			type = infantry
			extra = antitank
		}

		division = {
			id = { type = 28008 id = 31 }
			name = "41e/55e d'Infanterie"
			strength = 70
			type = infantry
		}

		division = {
			id = { type = 28008 id = 32 }
			name = "1re/3e d'Infanterie Coloniale"
			type = infantry
		}


	}

	###################
	###################


	landunit = {
		id = { type = 28008 id = 35 }
		name = "3e Arm�e"
		location = 555
		leader = 24058

		division = {
			id = { type = 28008 id = 36 }
			name = "3e L�g�re de Cavalerie"
			strength = 75
			type = cavalry
		}

		division = {
			id = { type = 28008 id = 37 }
			name = "6e/7e d'Infanterie"
			type = infantry
		}

		division = {
			id = { type = 28008 id = 39 }
			name = "6e/8e d'Infanterie"
			type = infantry
		}


		division = {
			id = { type = 28008 id = 41 }
			name = "2e/6e d'Infanterie Nord-Africaine"
			type = infantry
			extra = antitank
		}


		division = {
			id = { type = 28008 id = 43 }
			name = "26e/56e d'Infanterie"
			type = infantry
		}

		division = {
			id = { type = 28008 id = 45 }
			name = "42e/51e d'Infanterie"
			type = infantry
		}

		division = {
			id = { type = 28008 id = 47 }
			name = "20e/58e d'Infanterie"
			type = infantry
		}

	}

	#######################
	########################

	landunit = {
		id = { type = 28008 id = 49 }
		name = "4e Arm�e"
		location = 526
		leader = 24132


		division = {
			id = { type = 28008 id = 51 }
			name = "11e d'Infanterie"
			strength = 70
			type = infantry
		}

		division = {
			id = { type = 28008 id = 52 }
			name = "45e/47e d'Infanterie"
			type = infantry
		}

		division = {
			id = { type = 28008 id = 54 }
			name = "52e/58e d'Infanterie d'Afrique"
			type = infantry
		}

	}

	######################

	landunit = {
		id = { type = 28008 id = 55 }
		name = "5e Arm�e"
		location = 543
		leader = 24046


		division = {
			id = { type = 28008 id = 57 }
			name = "24e/44e d'Infanterie"
			strength = 70
			type = infantry
		}

		division = {
			id = { type = 28008 id = 58 }
			name = "31e/16e d'Infanterie"
			type = bergsjaeger
		}


		division = {
			id = { type = 28008 id = 61 }
			name = "70e/35e d'Infanterie"
			type = infantry
			extra = antitank
		}

		division = {
			id = { type = 28008 id = 62 }
			name = "30e/62e d'Infanterie"
			type = infantry
			extra = antitank
		}


	}

	##########################

	landunit = {
		id = { type = 28008 id = 64 }
		name = "8e Arm�e"
		location = 537
		leader = 24133

		division = {
			id = { type = 28008 id = 65 }
			name = "13e/27e d'Infanterie"
			strength = 70
			type = infantry
			extra = antitank
		}


		division = {
			id = { type = 28008 id = 67 }
			name = "19e d'Infanterie"
			strength = 70
			type = infantry
		}

		division = {
			id = { type = 28008 id = 68 }
			name = "54e/67e d'Infanterie"
			type = infantry
		}

	}

	##############################

	landunit = {
		id = { type = 28008 id = 70 }
		name = "Arm�e des Alpes"
		location = 931
		leader = 24106

		division = {
			id = { type = 28008 id = 71 }
			name = "8e/65e d'Infanterie"
			type = bergsjaeger
		}

		division = {
			id = { type = 28008 id = 72 }
			name = "64e/66e d'Infanterie"
			type = bergsjaeger
		}

	}

	########################

	landunit = {
		id = { type = 28008 id = 76 }
		name = "XIX R�gion Militaire"
		location = 1077
		leader = 24052

		division = {
			id = { type = 28008 id = 77 }
			name = "85e/181e d'Infanterie d'Afrique"
			type = infantry
		}

		division = {
			id = { type = 28008 id = 79 }
			name = "182e/183e d'Infanterie d'Afrique"
			strength = 60
			type = infantry
		}

	}

	###########################

	landunit = {
		id = { type = 28008 id = 82 }
		name = "Arm�e de Tun�sie"
		location = 1081
		leader = 24070

		division = {
			id = { type = 28008 id = 83 }
			name = "83e/84e d'Infanterie d'Afrique"
			strength = 100
			type = infantry
			extra = antitank
		}

		division = {
			id = { type = 28008 id = 85 }
			name = "81e/88e d'Infanterie d'Afrique"
			type = infantry
		}


		division = {
			id = { type = 28008 id = 88 }
			name = "6e de L�g�re Cavalerie"
			strength = 65
			type = cavalry
		}

	}

	##########################

	landunit = {
		id = { type = 28008 id = 89 }
		name = "Troupes de Maroc"
		location = 1011
		leader = 24037

		division = {
			id = { type = 28008 id = 90 }
			name = "3e Marocaine"
			strength = 60
			type = infantry
			extra = antitank
		}
	}

	#############################

	landunit = {
		id = { type = 28008 id = 91 }
		name = "Troupes d'Indochine"
		location = 1733

		division = {
			id = { type = 28008 id = 92 }
			name = "Division de Tonkin"
			strength = 65
			type = infantry
		}

		division = {
			id = { type = 28008 id = 93 }
			name = "Division de Cochinchine-Cambodge"
			strength = 60
			type = infantry
		}

	}


	landunit = {
		id = { type = 28008 id = 94 }
		name = "Corps Exp�ditionnaire"
		location = 518

		division = {
			id = { type = 28008 id = 95 }
			name = "1re L�g�re d`Infanterie"
			strength = 100
			type = infantry
		}

		division = {
			id = { type = 28008 id = 96 }
			name = "1re/2e de Chasseurs"
			strength = 100
			type = bergsjaeger
		}

	}
	###########################



	navalunit = {
		id = { type = 28008 id = 98 }
		name = "1st Fleet"
		location = 538

		division = { id = { type = 28008 id = 99 } name = "B�arn" type = carrier model = 0 }
		division = { id = { type = 28008 id = 126 } name = "Primauguet" type = cruiser model = 0 seadefence = 4 seaattack = 4 }
		division = { id = { type = 28008 id = 127 } name = "Duguay-Trouin" type = cruiser model = 0 seadefence = 4 seaattack = 4 }
		division = { id = { type = 28008 id = 129 } name = "Lamotte-Picquet" type = cruiser model = 0 seadefence = 4 seaattack = 4 }
		division = { id = { type = 28008 id = 131 } name = "La Galissonni�re" type = cruiser model = 0  seadefence = 4 seaattack = 4 }
	}

	navalunit = {
		id = { type = 28008 id = 100 }
		name = "2nd Fleet"
		location = 929

		division = { id = { type = 28008 id = 101 } name = "Courbet" type = battleship model = 0 }
		division = { id = { type = 28008 id = 103 } name = "Paris" type = battleship model = 0 }
		division = { id = { type = 28008 id = 118 } name = "Suffren" type = cruiser model = 0 }
		division = { id = { type = 28008 id = 116 } name = "Dusquesne" type = cruiser model = 0 }
		division = { id = { type = 28008 id = 133 } name = "Jeanne d'Arc" type = cruiser model = 0  seadefence = 4 seaattack = 4 }
		division = { id = { type = 28008 id = 139 } name = "Jaguar & gr" type = destroyer model = 0 }
		division = { id = { type = 28008 id = 144 } name = "L�opard & gr" type = destroyer model = 0 }
	}

	navalunit = {
		id = { type = 28008 id = 104 }
		name = "3rd Fleet"
		location = 1077

		division = { id = { type = 28008 id = 105 } name = "Jean Bart" type = battleship model = 0 }
		division = { id = { type = 28008 id = 109 } name = "Bretagne" type = battleship model = 0 }
		division = { id = { type = 28008 id = 120 } name = "Foch" type = cruiser model = 0 }
		division = { id = { type = 28008 id = 115 } name = "Tourville" type = cruiser model = 0 }
		division = { id = { type = 28008 id = 135 } name = "Pluton" type = cruiser model = 0 seadefence = 4 seaattack = 4 }
		division = { id = { type = 28008 id = 152 } name = "Aigle & gr" type = destroyer model = 0 }
		division = { id = { type = 28008 id = 157 } name = "Epervier & gr" type = destroyer model = 0 }
	}

	navalunit = {
		id = { type = 28008 id = 110 }
		name = "4th Fleet"
		location = 538

		division = { id = { type = 28008 id = 111 } name = "Lorraine" type = battleship model = 0 }
		division = { id = { type = 28008 id = 113 } name = "Provence" type = battleship model = 0 }
		division = { id = { type = 28008 id = 122 } name = "Colbert" type = cruiser model = 0 }
		division = { id = { type = 28008 id = 124 } name = "Dupleix" type = cruiser model = 0 }
		division = { id = { type = 28008 id = 137 } name = "Emile-Bertin" type = cruiser model = 0 seadefence = 4 seaattack = 4 }
		division = { id = { type = 28008 id = 165 } name = "Le Malin & gr" type =  destroyer model = 0 }
	}




	navalunit = {
		id = { type = 28008 id = 171 }
		name = "1re de Soumarins"
		location = 948

		division = { id = { type = 28008 id = 172 } name = "Redoutable & gr" type = submarine model = 0 }
		division = { id = { type = 28008 id = 177 } name = "Vengeur & gr" type = submarine model = 0 }
	}

	navalunit = {
		id = { type = 28008 id = 181 }
		name = "2e de Soumarins"
		location = 1011

		division = { id = { type = 28008 id = 182 } name = "Casabianca & gr" type = submarine model = 0 }
		division = { id = { type = 28008 id = 187 } name = "B�veziers & gr" type = submarine model = 0 }
	}

	navalunit = {
		id = { type = 28008 id = 191 }
		name = "1re de Soumarins"
		location = 1077

		division = { id = { type = 28008 id = 192 } name = "Le Conqu�rant & gr" type = submarine model = 0 }
		division = { id = { type = 28008 id = 197 } name = "Monge & gr" type = submarine model = 0 }
	}

	navalunit = {
		id = { type = 28008 id = 198 }
		location = 518
		name = "Transport Exp�ditionnaire"

		division = { id = { type = 28008 id = 199 } name = "1er Transport" type = transport }
		division = { id = { type = 28008 id = 200 } name = "2e Transport" type = transport }
		division = { id = { type = 28008 id = 201 } name = "3e Transport" type = transport }

	}
	navalunit = {
		id = { type = 28008 id = 202 }
		location = 536
		name = "Transport G�nerale"

		division = { id = { type = 28008 id = 203 } name = "4e Transport" type = transport }
		division = { id = { type = 28008 id = 204 } name = "5e Transport" type = transport }
		division = { id = { type = 28008 id = 205 } name = "6e Transport" type = transport }

	}

	### France Air OOB 1936 ###
	airunit = { location = 929 leader = 24258 id = { type = 28008 id = 206 } name = "1st Bomber Wing"
	division = { id = { type = 28008 id = 207 } name = "1st Bomber Wing" strength = 100 type = tactical_bomber }
	}
	 
	airunit = { location = 542 leader = 24174 id = { type = 28008 id = 210 } name = "2nd Bomber Wing"
	division = { id = { type = 28008 id = 211 } name = "2nd Bomber Wing" strength = 100 type = tactical_bomber }
	}
	 
	airunit = { location = 544 leader = 24193 id = { type = 28008 id = 214 } name = "3d Bomber Wing"
	division = { id = { type = 28008 id = 215 } name = "3d Bomber Wing" strength = 100 type = tactical_bomber }
	}
	 
	airunit = { location = 1273 leader = 24259 id = { type = 28008 id = 218 } name = "4th Bomber Wing"
	division = { id = { type = 28008 id = 219 } name = "4th Bomber Wing" strength = 100 type = tactical_bomber }
	}
	 
	airunit = { location = 1011 leader = 24257 id = { type = 28008 id = 222 } name = "5th Bomber Wing"
	division = { id = { type = 28008 id = 223 } name = "5th Bomber Wing" strength = 100 type = tactical_bomber }
	}
	 
	airunit = { 
		location = 554 
		leader = 24202 
		id = { type = 28008 id = 226 } 
		name = "1st Fighter Wing"
		division = { 
			id = { type = 28008 id = 227 } 
			name = "1st Fighter Wing" 
			strength = 100 
			type = fighter 
		}
	}
	 
	airunit = { location = 926 leader = 24164 id = { type = 28008 id = 230 } name = "2nd Fighter Wing"
	division = { id = { type = 28008 id = 231 } name = "2nd Fighter Wing" strength = 100 type = fighter }
	}
	 
	airunit = { location = 1011 leader = 24207 id = { type = 28008 id = 234 } name = "3d Fighter Wing"
	division = { id = { type = 28008 id = 235 } name = "3d Fighter Wing" strength = 100 type = fighter }
	}



}




