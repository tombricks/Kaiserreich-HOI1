# Uruguay

country = { 
    tag = URU
	alignment = { x = 30 y = -20 }

	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200

	capital = 368
	manpower = 60

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
		368
	}
    controlledprovinces = {
		368
	}
    nationalprovinces =   {
		368
	}
	
	landunit = {
		id = { type = 30056 id = 40 }
		name = "Army of Uruguay"
		location = 368
		division = {
			id = { type = 30056 id = 4000 }
			name = "1st Infantry"
			strength = 100
			type = infantry
			extra = artillery
		}
	}
	
	navalunit = {
		id = { type = 30057 id = 20 }
		name = "Uruguay"
		location = 368
		
		# Build date unknown, but definitely prior to 1936.
		division = { id = { type = 30057 id = 2000 } name = "Uruguay" type = cruiser model = 0 }
	}
} 
