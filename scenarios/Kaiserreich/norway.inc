province = {	id = 664	landfort = 0 coastalfort = 3 }#Oslofjorden
province = {	id = 663	landfort = 0 coastalfort = 2 }#Kristiansand
province = {	id = 674	landfort = 0 coastalfort = 2 }#Trondheim/Agdenes
province = {	id = 671	landfort = 0  coastalfort = 3 } #Bergen


country = { 
    tag = NOR
	alignment = { x = 0 y = 0 }
	
	ai = "NE_minor.ai"

	techlevels = { 
		12000 13000 11000 14000 1000 1100 2000 5000 6000 9000 10000 8000
		8100 3000 3100 4000 4100 4200 4300
	 }
	 techapps = {
		12001 11001 11004 14001 14014 1001 6003 6004 3002 3005 4001 4101
		4102 4201 4202  4203  4204 3101 14005 1107
		4301 4302 4303
	}
	
	manpower = 100

	capital = 664
    ownedprovinces =      {
		664 663 662 671 670 668 669 674 676 680 816 817 
	 }
    controlledprovinces = {
		664 663 662 671 670 668 669 674 676 680 816 817 
	  }
    nationalprovinces =   {
		664 663 662 671 670 668 669 674 676 680 816 817 
	  }

	#Norwegian merchant marine is INSANE!
	  transports = 200
	  escorts = 5

	landunit = {
		location = 664
		name = "Royal Norweigan Army"
		leader = 9600
        id = { type = 13000 id = 1 } 
		division = {
        id = { type = 13000 id = 2 } 
			name = "1st Division"
			type = infantry
		}
	}

	landunit = {
		location = 668
		name = "2nd Division"
		leader = 9603
        id = { type = 13000 id = 3 } 
		division = {
        id = { type = 13000 id = 4 } 
			name = "2nd Division"
			type = infantry
		}
	}
	landunit = {
		location = 663
		name = "3rd Division"
		leader = 9604
        id = { type = 13000 id = 5 } 
		division = {      id = { type = 13000 id = 6 } 	name = "3rd Division"	type = infantry	}
	}

	landunit = {
		location = 671
		name = "4th Division"
		leader = 9605
        id = { type = 13000 id = 7 } 
		division = {      id = { type = 13000 id = 8 } 	name = "4th Division"	type = infantry	}
	}

	landunit = {
		location = 674
		name = "5th Division"
		leader = 9606
        id = { type = 13000 id = 9 } 
		division = {      id = { type = 13000 id = 10 } 	name = "5th Division"	type = infantry	}
	}

	landunit = {
		location = 680
		name = "6th Division"
		leader = 9607
        id = { type = 13000 id = 11 } 
		division = {      id = { type = 13000 id = 12 } 	name = "6th Division"	type = infantry	}
	}


	navalunit = {
		location = 663
		name = "1st Naval District"
		leader = 9611
        id = { type = 13000 id = 20 } 
		division = {      id = { type = 13000 id = 21 }  strength = 30	name = "1st Submarine"	type = submarine model = 0	}
		division = {      id = { type = 13000 id = 22 }  strength = 30	name = "2nd Submarine"	type = submarine model = 0	}
	}

	navalunit = {
		location = 671
		name = "2nd Naval District"
		leader = 9610
        id = { type = 13000 id = 23 } 
		division = {      id = { type = 13000 id = 24 } 	name = "1st Hunter"	type = destroyer model = 0	}
	}

	navalunit = {
		location = 680
		name = "3rd Naval District"
		leader = 9609
        id = { type = 13000 id = 25 } 
		division = {      id = { type = 13000 id = 26 }   name = "Norge"	type = cruiser model = 0	}
		division = {      id = { type = 13000 id = 30 }   name = "Eidsvold"	type = cruiser model = 0	}
		division = {      id = { type = 13000 id = 29 }   strength = 30	name = "3rd Submarine"	type = submarine model = 0	}
	}

	navalunit = {
		location = 664
		name = "Naval Reserves"
		leader = 9608
        id = { type = 13000 id = 27 } 
		division = { id = { type = 13000 id = 28 } name = "Harald Harfagre" type = cruiser model = 0 }
		division = { id = { type = 13000 id = 31 } name = "Tordenskiold"	type = cruiser model = 0 }
	}



} 
