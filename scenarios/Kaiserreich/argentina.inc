#Argentina
country = { 
    tag = ARG
	alignment = { x = 20 y = -40 }
	manpower = 450
	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200

	capital = 384

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
		365 373 374 370 384 385 386 383 392 380 391 396 398 401 410 369 
	}
    controlledprovinces = {
		365 373 374 370 384 385 386 383 392 380 391 396 398 401 410 369 
	}
    nationalprovinces =   {
		365 373 374 370 384 385 386 383 392 380 391 396 398 401 410 369 
	}
	
	landunit = {
		id = { type = 30051 id = 1 }
		name = "1st Army"
		location = 384 # Buenos Aires
# Leader? Arturo Rawson? Pedro Ramirez? Edelmiro Farrell?
		
		division = {
			id = { type = 30051 id = 100 }
			name = "1st Military District"
			strength = 100
			type = infantry
			extra = artillery
		}
		division = {
			id = { type = 30051 id = 101 }
			name = "2nd Military District"
			strength = 100
			type = infantry
		}
		division = {
			id = { type = 30051 id = 102 }
			name = "3rd Military District"
			strength = 100
			type = infantry
		}
		division = {
			id = { type = 30051 id = 103 }
			name = "4th Military District"
			strength = 100
			type = militia
		}
		division = {
			id = { type = 30051 id = 104 }
			name = "5th Military District"
			strength = 100
			type = militia
		}
		division = {
			id = { type = 30051 id = 105 }
			name = "1st Cavalry"
			strength = 100
			type = cavalry
		}
	}
	
	landunit = {
		id = { type = 30051 id = 2 }
		name = "1st Mountain Corps"
		location = 374
		
		division = {
			id = { type = 30051 id = 200 }
			name = "1st Mountain"
			strength = 100
			type = bergsjaeger
		}
	}
	
	airunit = {
		id = { type = 30051 id = 10 }
		name = "1st Air Force"
		location = 384
		
		division = {
			id = { type = 30051 id = 1000 }
			name = "1st Fighter Division"
			strength = 50
			type = fighter
			model = 0
		}
	}

	# CAs commissioned in 1931, based on the Italian "Trento" class:
	navalunit = {
		name = "Veinticinco De Mayo"
		id = { type = 30050 id = 1 }
		location = 385 # Mar del Plata
		division = { id = { type = 30050 id = 100 } name = "Veinticinco De Mayo" type = cruiser model = 0 } # CA
	}
	navalunit = {
		name = "Almirante Brown"
		id = { type = 30050 id = 2 }
		location = 385 # Mar del Plata
		division = { id = { type = 30050 id = 200 } name = "Almirante Brown" type = cruiser model = 0 } # CA
	}
	
	# BB Dreadnaughts commissioned in 1914 and 1915:
	navalunit = {
		name = "Moreno"
		id = { type = 30050 id = 3 }
		location = 385 # Mar del Plata
		division = { id = { type = 30050 id = 300 } name = "Moreno" type = battleship model = 0 } # BB
	}
	navalunit = {
		name = "Rivadavia"
		id = { type = 30050 id = 4 }
		location = 385 # Mar del Plata
		division = { id = { type = 30050 id = 400 } name = "Rivadavia" type = battleship model = 0 } # BB
	}
	
	# Destroyer Division pre-1930 (4 ships):
	navalunit = {
		name = "1st Destroyer Division"
		id = { type = 30050 id = 6 }
		location = 385 # Mar del Plata
		division = { id = { type = 30050 id = 600 } name = "1st Destroyer Division" type = destroyer model = 0 } # DD
	}
	
	# Destroyer Division pre-1930 (4 ships):
	navalunit = {
		name = "2nd Destroyer Division"
		id = { type = 30050 id = 7 }
		location = 385 # Mar del Plata
		division = { id = { type = 30050 id = 700 } name = "2nd Destroyer Division" type = destroyer model = 0 } # DD
	}
	
	# Submarine Division, pre-1936? (3 ships):
	navalunit = {
		name = "1st Submarine Division"
		id = { type = 30050 id = 10 }
		location = 385 # Mar del Plata
		division = { id = { type = 30050 id = 1000 } name = "1st Submarine Division" type = submarine model = 0 } # Sub
	}
	
	development = {
		name = "La Argentina"
		type = cruiser #Light Cruiser
		model = 1
		cost = 7 #Half the Cost of a Level Zero Cruiser
		date = { year = 1938 month = january }
		id = { type = 30050 id = 11 }
	}
} 