country = { 
    tag = DEN
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

	manpower = 110

	capital = 594
    ownedprovinces =      {
	  655 594 596 652 441 442 432
	 }
    controlledprovinces = {
	  655 594 596 652 441 442 432
	  }
    nationalprovinces =   {
	  655 594 596 652 441 442 432
	}

	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200


	landunit = {
		location = 595
		name = "2nd Jydske"
		leader = 9500
        id = { type = 14000 id = 40 } 
		division = {
        id = { type = 14000 id = 41 } 
			name = "2nd Jydske"
			type = infantry
		}
	}
	landunit = {
		location = 594
		name = "1st Sjaellenske"
		leader = 9502
        id = { type = 14000 id = 42 } 
		division = {
        id = { type = 14000 id = 43 } 
			name = "1st Sjaellenske"
			type = infantry
		}
	}
###################################
###DANISH NAVY OOB1939#############
###################################

navalunit = {
		name = "Den Danske Fl�de"
        id = { type = 14000 id = 44 } 
		location = 594

		division = {
			id = { type = 14000 id = 45 } 
			name = "Niels Juel"
			type = cruiser
			model = 0
			strength  = 80
				}
		division = {
			id = { type = 14000 id = 46 } 
			name = "Peder Skram"
			type = cruiser
			model = 0
			strength  = 80
				}
		division = {
			id = { type = 14000 id = 47 } 
			name = "1. Ub�dsdivision"
			type = submarine
			model = 0
			strength  = 100
				}
		division = {
			id = { type = 14000 id = 48 } 
			name = "2. Ub�dsdivision"
			type = submarine
			model = 0
			strength  = 100
				}
	}
################################################################
#Supplies to Bornholm
convoy = { 
        id = { type = 17120 id = 210002 } 
        transports = 15 
        escorts = 1 
        rubber = no 
        coal = no 
        steel = no 
        oil = no 
        supplies = yes 
        path = { 594 657 600 652 } 
        }
} 
