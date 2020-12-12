# Bolivia
country = { 
    tag = BOL
	alignment = { x = 10 y = -10 }
	manpower = 80
	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200



	techlevels = { 
		12000 13000 11000 14000 1000 1100 2000 5000 6000 9000 10000 8000
		8100 3000 3100 4000 4100 4200 4300
	 }
	 techapps = {
		12001 11001 11004 14001 14014 1001 6003 6004 3002 3005 4001 4101
		4102 4201 4202  4203  4204 3101 14005 1107
		4301 4302 4303
	}


	capital = 343

    ownedprovinces =      {
		350 348 347 343 334 349 
	}
    controlledprovinces = {
		350 348 347 343 334 349 
	}
    nationalprovinces =   {
		350 348 347 343 334 349 
# Claim on Chaco
		364
	}
	
	landunit = {
		id = { type = 30051 id = 40 }
		name = "Bolivian Army"
		location = 343
		
		division = {
			id = { type = 30051 id = 4000 }
			name = "1st Infantry"
			strength = 90
			type = infantry
			extra = artillery
		}
		division = {
			id = { type = 30051 id = 4001 }
			name = "2nd Infantry"
			strength = 90
			type = militia
		}
		division = {
			id = { type = 30051 id = 4002 }
			name = "3nd Infantry"
			strength = 70
			type = militia
		}
		division = {
			id = { type = 30051 id = 4003 }
			name = "1st Cavalry"
			strength = 60
			type = cavalry
		}
	}
} 