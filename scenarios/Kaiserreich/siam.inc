  country = { 
    tag = SIA
	alignment = { x = 30 y = -20 }

	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200

	capital = 1744

	manpower = 430

	techlevels = { 
		12000 13000 11000 14000 1000 1100 2000 5000 6000 9000 10000 8000
		8100 3000 3100 4000 4100 4200 4300
	 }
	 techapps = {
		12001 11001 11004 14001 14014 1001 6003 6004 3002 3005 4001 4101
		4102 4201 4202  4203  4204 3101 14005 1107
		4301 4302 4303
	}

    ownedprovinces =      {
	1742 1596 1729 1743 1744 1746 1747 1600 

	 }
    controlledprovinces = {
	1742 1596 1729 1743 1744 1746 1747 1600 

	  }
    nationalprovinces =   {
	1742 1596 1729 1743 1744 1746 1747 1600 1730 1731 1739

	  }



	landunit = {
		location = 1744
		name = "Royal Thai Army"			
        id = { type = 11744 id = 1 } 
	division = {
        id = { type = 11744 id = 2 } 
			name = "1st Division"	
			type = infantry
			extra = antitank
			strength = 90
		}
	division = {
        id = { type = 11744 id = 3 } 
			name = "2nd Division"	
			type = infantry
			strength = 70
		}
	division = {
        id = { type = 11744 id = 4 } 
			name = "3rd Division"	
			type = militia
			strength = 70
		}
	}
	navalunit = {
		location = 1744
		name = "Royal Thai Navy"			
        id = { type = 11744 id = 5 } 
	division = {
        id = { type = 11744 id = 6 } 
			name = "Submarines"	
			type = submarine
			model = 0
		}
	}
	airunit = {
		location = 1744
		name = "Royal Thai Airforce"			
        id = { type = 11744 id = 7 } 
	division = {
        id = { type = 11744 id = 8 } 
			name = "1st Fighter Squadron"	
			type = fighter
			model = 0
			strength = 50
		}
	division = {
        id = { type = 11744 id = 9 } 
			name = "1st Bomber Squadron"	
			type = tactical_bomber
			model = 0
			strength = 44
		}
	}} 
