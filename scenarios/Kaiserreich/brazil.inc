# Brazil

country = { 
    tag = BRA
	alignment = { x = 70 y = -30 }
	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200
	manpower = 1100

	techlevels = { 
		12000 13000 11000 14000 1000 1100 2000 5000 6000 9000 10000 8000
		8100 3000 3100 4000 4100 4200 4300
	 }
	 techapps = {
		12001 11001 11004 14001 14014 1001 6003 6004 3002 3005 4001 4101
		4102 4201 4202  4203  4204 3101 14005 1107
		4301 4302 4303
	}
	capital = 356

    ownedprovinces =      {
		318 323 322 321 313 310 332 327 326 352 351 354 355 356 358 360 359 367 331 303 330 333 362 
	}
    controlledprovinces = {
		318 323 322 321 313 310 332 327 326 352 351 354 355 356 358 360 359 367 331 303 330 333 362 
	}
    nationalprovinces =   {
		318 323 322 321 313 310 332 327 326 352 351 354 355 356 358 360 359 367 331 303 330 333 362 
	}
	
	landunit = {
		id = { type = 30052 id = 1 }
		name = "1st Army"
		location = 356
		
		division = {
			id = { type = 30052 id = 100 }
			name = "1st Military District"
			strength = 100
			type = infantry
			extra = artillery
		}
		division = {
			id = { type = 30052 id = 101 }
			name = "2nd Military District"
			strength = 100
			type = infantry
		}
		division = {
			id = { type = 30052 id = 102 }
			name = "3rd Military District"
			strength = 100
			type = militia
		}
		division = {
			id = { type = 30052 id = 103 }
			name = "4th Military District"
			strength = 100
			type = militia
		}
	}
	landunit = {
		id = { type = 30052 id = 2 }
		name = "2nd Army"
		location = 359
		
		division = {
			id = { type = 30052 id = 200 }
			name = "5th Military District"
			strength = 100
			type = infantry
		}
		division = {
			id = { type = 30052 id = 203 }
			name = "1st Cavalry"
			strength = 100
			type = cavalry
		}
	}
	
	airunit = {
		id = { type = 30052 id = 3 }
		name = "1st Air Force"
		location = 355
		
		division = {
			id = { type = 30052 id = 300 }
			name = "1st Fighter Division"
			strength = 50
			type = fighter
			model = 0
		}
	}
	
	# BB Dreadnaught built in 1910:
	# In poor condition
	navalunit = {
		name = "Sao Paolo" 
		id = { type = 30053 id = 2 }
		location = 356
		division = { id = { type = 30053 id = 200 }  name = "Sao Paolo" type = battleship model = 0 seaattack = 7 seadefence = 7 } # BB
	}
	
	# Cruiser/Gunboat built in 1912
	navalunit = {
		name = "Belmonte" 
		id = { type = 30053 id = 3 }
		location = 356
		division = { id = { type = 30053 id = 300 } name = "Belmonte" type = cruiser model = 0 } # CA
	}
	
	# One destroyer "Maranhao" and 2 very light cruisers "Bahia" class (1910-13).
	navalunit = {
		name = "1st Destroyer Division" 
		id = { type = 30053 id = 4 }
		location = 356
		division = { id = { type = 30053 id = 400 } name = "1st Destroyer Division" type = destroyer model = 0 }
	}
	
	# Sister ship to Sao Paolo, being heavily refitted and modified.
	development = {
		name = "Minas Gerais"
		type = battleship
		model = 1
		date = { year = 1937 month = march }
	   id = { type = 30053 id = 2299 }
	}
} 