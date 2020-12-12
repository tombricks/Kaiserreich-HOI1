# Cuba

country = { 
    tag = CUB
	alignment = { x = 40 y = -20 }
	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200

	manpower = 120
	capital = 229 

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
		229 259 
	}
    controlledprovinces = {
		229 259 
	}
    nationalprovinces =   {
		229 259 
	}
	
	# Rather wild estimations
	landunit = {
		id = { type = 30058 id = 40 }
		name = "Cuban Army"
		location = 229
		division = {
			id = { type = 30058 id = 4000 }
			name = "1st Infantry"
			strength = 100
			type = infantry
		}
		division = {
			id = { type = 30058 id = 4001 }
			name = "1st Cavalry"
			strength = 100
			type = cavalry
		}
	} 
	
	navalunit = {
		id = { type = 30059 id = 35 }
		name = "1st Destroyer Division"
		location = 229
		
		division = { id = { type = 30059 id = 3500 } name = "1st Destroyer Division" type = destroyer model = 0 strength = 50 }
	}
} 