# Mexico
country = { 
    tag = MEX
    
    alignment = { x = -20 y = -20 }
    
	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200

	capital = 244

	techlevels = { 
		12000 13000 11000 14000 1000 1100 2000 5000 6000 9000 10000 8000
		8100 3000 3100 4000 4100 4200 4300
	}
	techapps = {
		12001 11001 11004 14001 14014 1001 6003 6004 3002 3005 4001 4101
		4102 4201 4202  4203  4204 3101 14005 1107
		4301 4302 4303
	}
	manpower = 550

    ownedprovinces =      {
		80 197 199 200 237 243 242 244 238 248 249 232 
	}
    controlledprovinces = {
		80 197 199 200 237 243 242 244 238 248 249 232 
	}
    nationalprovinces =   {
		80 197 199 200 237 243 242 244 238 248 249 232 
	}
	
	landunit = {
		id = { type = 30058 id = 1 }
		name = "1st Army"
		location = 244
		division = {
			id = { type = 30058 id = 100 }
			name = "Presidential Guard"
			strength = 100
			type = infantry
		}
		division = {
			id = { type = 30058 id = 101 }
			name = "1st Infantry"
			strength = 100
			type = infantry
		}
		division = {
			id = { type = 30058 id = 102 }
			name = "2nd Infantry"
			strength = 100
			type = infantry
		}
		division = {
			id = { type = 30058 id = 301 }
			name = "3rd Infantry"
			strength = 100
			type = infantry
		}
	} 
	landunit = {
		id = { type = 30058 id = 2 }
		name = "1st Cavalry Corps"
		location = 244
		division = {
			id = { type = 30058 id = 200 }
			name = "1st Cavalry"
			strength = 100
			type = cavalry
		}
		division = {
			id = { type = 30058 id = 201 }
			name = "2nd Cavalry"
			strength = 100
			type = cavalry
		}
	} 
	
	navalunit = {
		id = { type = 30059 id = 1 }
		name = "Mexican Navy"
		location = 238
		
		division = { id = { type = 30059 id = 100 } name = "1st Destroyer Division" type = destroyer model = 0 }
	}
	
	airunit = {
		id = { type = 30059 id = 2 }
		name = "Mexican Air Force"
		location = 244
		
		division = { id = { type = 30059 id = 200 } name = "1st Fighter Division" type = fighter model = 0 strength = 50 }
	}
} 
