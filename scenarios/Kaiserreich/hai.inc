# Haiti

country = { 
    tag = HAI
    alignment = { x = 40 y = -20 }
	manpower = 80
	
	# Resource Reserves
	oil		= 30
	steel	= 30
	coal	= 50
	rubber	= 50

	capital = 	261

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
		261 
	}
    controlledprovinces = {
		261 
	}
    nationalprovinces =   {
		261 
	}
	
	# Very rough estimation: 
	landunit = {
		id = { type = 30054 id = 53 }
		name = "Army of Haiti"
		location = 261
		division = {
			id = { type = 30054 id = 5301 }
			name = "1st Infantry"
			strength = 50
			type = infantry
		}
	}
} 
