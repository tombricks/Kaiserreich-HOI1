# Chile
country = { 
    tag = CHL
	alignment = { x = 20 y = -40 }

	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200

	capital = 372
	manpower = 140
	

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
		342 372 379 393 400 339 376 
	}
    controlledprovinces = {
		342 372 379 393 400 339 376 
	}
    nationalprovinces =   {
		342 372 379 393 400 339 376  
	}
	
	landunit = {
		id = { type = 30054 id = 1 }
		name = "1st Army"
		location = 372
		division = {
			id = { type = 30054 id = 100 }
			name = "1st Military District"
			strength = 100
			type = infantry
			extra = artillery
		}
		division = {
			id = { type = 30054 id = 101 }
			name = "2nd Military District"
			strength = 100
			type = infantry
		}
		division = {
			id = { type = 30054 id = 102 }
			name = "3rd Military District"
			strength = 100
			type = bergsjaeger
		}
		division = {
			id = { type = 30054 id = 103 }
			name = "1st Cavalry"
			strength = 100
			type = cavalry
		}
	}
	
	navalunit = {
		id = { type = 30055 id = 1 }
		name = "Chilean Navy"
		location = 379
		
		# These have five DDs each:
		division = { id = { type = 30055 id = 100 } name = "1st Destroyer Division" type = destroyer model = 0 }
		division = { id = { type = 30055 id = 101 } name = "2nd Destroyer Division" type = destroyer model = 0 }
		
		# Built 1915
		division = { id = { type = 30055 id = 102 } name = "Almirante Latorre" type = battleship model = 0 }
		
		# Gunboat built 1930
		division = { id = { type = 30055 id = 103 } name = "Araucano" type = cruiser model = 0 }
	}
} 