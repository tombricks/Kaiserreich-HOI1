# Peru

country = { 
    tag = PRU
	alignment = { x = 30 y = -20 }

	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200

	capital = 335
	manpower = 190

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
		293 336 335 337 338 
	}
    controlledprovinces = {
		293 336 335 337 338 
	}
    nationalprovinces =   {
		293 336 335 337 338 
#claims on Ecuador
		300
	}
	
	landunit = {
		id = { type = 30056 id = 1 }
		name = "1st Army"
		location = 335
		division = {
			id = { type = 30056 id = 100 }
			name = "1st Military District"
			strength = 100
			type = infantry
		}
		division = {
			id = { type = 30056 id = 101 }
			name = "2nd Military District"
			strength = 100
			type = infantry
		}
		division = {
			id = { type = 30056 id = 102 }
			name = "3rd Military District"
			strength = 100
			type = infantry
		}
		division = {
			id = { type = 30056 id = 103 }
			name = "4th Military District"
			strength = 100
			type = infantry
		}
	}
	
	navalunit = {
		id = { type = 30057 id = 1 }
		name = "Peruvian Navy"
		location = 335
		
		# Two DDs:
		division = { id = { type = 30057 id = 100 } name = "1st Destroyer Division" type = destroyer model = 0 strength = 50 }
		
		# Built 1907:
		division = { id = { type = 30057 id = 101 } name = "Almirante Grau" type = cruiser model = 0 seaattack = 4 seadefence = 4 }
		division = { id = { type = 30057 id = 102 } name = "Coronel Bolognesi" type = cruiser model = 0 seaattack = 4 seadefence = 4 }
		
		# Submarine division:
		division = { id = { type = 30057 id = 103 } name = "1st Submarine Division" type = submarine model = 0 }
	}
} 