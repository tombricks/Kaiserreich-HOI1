# Venezuela

country = { 
    tag = VEN
	alignment = { x = 60 y = 0 }

	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200

	capital = 277
	manpower = 100

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
		282 277 305 307 278 
	}
    controlledprovinces = {
		282 277 305 307 278 
	}
    nationalprovinces =   {
		282 277 305 307 278 
	}
	
	# Rather wild estimations
	landunit = {
		id = { type = 30058 id = 45 }
		name = "Venezuelan Army"
		location = 277
		division = {
			id = { type = 30058 id = 4500 }
			name = "1st Infantry"
			strength = 100
			type = infantry
		}
		division = {
			id = { type = 30058 id = 4501 }
			name = "2nd Infantry"
			strength = 100
			type = militia
		}
		division = {
			id = { type = 30058 id = 4502 }
			name = "1st Cavalry"
			strength = 100
			type = cavalry
		}
	} 
	navalunit = {
		id = { type = 30059 id = 30 }
		name = "1st Destroyer Division"
		location = 277
		
		division = { id = { type = 30059 id = 3000 } name = "1st Destroyer Division" type = destroyer model = 0 strength = 50 }
	}
} 