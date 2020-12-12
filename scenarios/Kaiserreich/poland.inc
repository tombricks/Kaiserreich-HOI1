country = { 
    tag = POL
	alignment = { x = 50 y = -10 }

	capital = 643

	techlevels = { 
		12000 13000 11000 14000 1000 1100 2000 5000 6000 9000 10000 8000
		8100 3000 3100 4000 4100 4200 4300
	 }
	 techapps = {
		12001 11001 11004 14001 14014 1001 6003 6004 3002 3005 4001 4101
		4102 4201 4202  4203  4204 3101 14005 1107
		4301 4302 4303
	}

	manpower = 820

	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200


    ownedprovinces = { 643 642 637 639 640 638 720 723 }
    controlledprovinces = { 643 642 637 639 640 638 720 723 }
    nationalprovinces = { 643 642 637 639 640 638 720 723 }
    
	landunit = {
	        id = { type = 14410 id = 1 } 
			location = 638
			name = "Army Krakow"
			leader = 8007
			division = { id = { type = 14400 id = 10 } name = "6th Infantry"	type = infantry	}
			division = { id = { type = 14400 id = 11 } name = "7th Infantry"	type = infantry	}
			division = { id = { type = 14400 id = 4 } name = "22nd Mountaineer"	type = bergsjaeger	}
			division = { id = { type = 14400 id = 3 } name = "21st Mountaineer"	type = bergsjaeger	}
			division = { id = { type = 14400 id = 26 } name = "23rd Infantry"	type = infantry	}
	}

	landunit = {
	        id = { type = 14410 id = 2 } 
			location = 639
			name = "Army Lodz"
			leader = 8004
			division = { id = { type = 14400 id = 6 } name = "2nd Infantry"	type = infantry	}
			division = { id = { type = 14400 id = 14 } name = "10th Infantry"	type = infantry	}
			division = { id = { type = 14400 id = 32 } name = "29th Infantry"	type = infantry	}
	}

	landunit = {
	        id = { type = 14410 id = 3 } 
			location = 723
			leader = 8013
			name = "Army Lublin"
			division = { id = { type = 14400 id = 23 } name = "18th Infantry"	type = infantry	}
			division = { id = { type = 14400 id = 31 } name = "28th Infantry"	type = infantry	}
			division = { id = { type = 14400 id = 33 } name = "30th Infantry"	type = infantry	}
	}

	landunit = {
	        id = { type = 14410 id = 4 } 
			location = 649
			name = "Army Modlin"
			leader = 8010
			division = { id = { type = 14400 id = 12 } name = "8th Infantry"	type = infantry	}
			division = { id = { type = 14400 id = 25 } name = "20th Infantry"	type = infantry	}
	}

	landunit = {
	        id = { type = 14410 id = 5 } 
			location = 645
			name = "Army Pomorze"
			leader = 8001
			division = { id = { type = 14400 id = 8 } name = "4th Infantry"	type = infantry	}
			division = { id = { type = 14400 id = 21 } name = "16th Infantry"	type = infantry	}
			division = { id = { type = 14400 id = 13 } name = "9th Infantry"	type = infantry	}
			division = { id = { type = 14400 id = 19 } name = "15th Infantry"	type = infantry	}
			division = { id = { type = 14400 id = 30 } name = "27th Infantry"	type = infantry	}
	}

	landunit = {
	        id = { type = 14410 id = 6 } 
			location = 606
			name = "Army Poznan"
			leader = 8005
			division = { id = { type = 14400 id = 18 } name = "14th Infantry"	type = infantry	}
			division = { id = { type = 14400 id = 22 } name = "17th Infantry"	type = infantry	}
			division = { id = { type = 14400 id = 28 } name = "25th Infantry"	type = infantry	}
			division = { id = { type = 14400 id = 29 } name = "26th Infantry"	type = infantry	}

	}

	landunit = {
	        id = { type = 14410 id = 7 } 
			location = 725
			name = "Army Prusy"
			leader = 8011
			division = { id = { type = 14400 id = 7 } name = "3rd Infantry"	type = infantry	}
			division = { id = { type = 14400 id = 16 } name = "12th Infantry"	type = infantry	}
			division = { id = { type = 14400 id = 17 } name = "13th Infantry"	type = infantry	}
			division = { id = { type = 14400 id = 24 } name = "19th Infantry"	type = infantry	}
	}

	landunit = {
	        id = { type = 14410 id = 8 } 
			location = 643
			name = "Army Warszawa"
			division = {   id = { type = 14400 id = 2 } 	name = "2nd Cavalry"	type = cavalry	}
			division = { id = { type = 14400 id = 5 } name = "1st Infantry"	type = infantry	}
			division = { id = { type = 14400 id = 9 } name = "5th Infantry"	type = infantry	}
			division = { id = { type = 14400 id = 15 } name = "11th Infantry"	type = infantry	}
			division = { id = { type = 14400 id = 27 } name = "24th Infantry"	type = infantry	}
	}


	navalunit = {
		id = { type = 14410 id = 49 }
			name = "1st Destroyer Flotilla"
			location = 645 #Danzig
			division = { id = { type = 14410 id = 50 } name = "1st Destroyer Flotilla" strength = 40 type = destroyer model = 0 }
	}

	navalunit = {
		id = { type = 14410 id = 51 }
			name = "1st Submarine Flotilla"
			location = 645 #Danzig
			division = { id = { type = 14410 id = 52 } name = "1st Submarine Flotilla" type = submarine model = 0 }
	}


} 
