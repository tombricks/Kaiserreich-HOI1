country = { 
    tag = LAT
	alignment = { x = 0 y = -60 }

	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200

	capital = 709

	techlevels = { 
		12000 13000 11000 14000 1000 1100 2000 5000 6000 9000 10000 8000
		8100 3000 3100 4000 4100 4200 4300 
	 }
	 techapps = {
		12001 11001 11004 14001 14014 1001 6003 6004 3002 3005 4001 4101
		4102 4201 4202  4203  4204 3101 14005 1107
		4301 4302 4303
	}
	manpower = 60

    ownedprovinces =      {
		709 708 712 707
	 }
    controlledprovinces = {
		709 708 712 707
	  }
    nationalprovinces =   {
		709 708 712 707
	  }

    #Latvian Army
	landunit = {
        id = { type = 23225 id = 1 } 
		location = 708
		name = "Latvian Army"

		division = {
	        id = { type = 23225 id = 2 } 
			name = "1st Division"
			type = infantry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 23225 id = 3 } 
			name = "2nd Division"
			type = infantry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 23225 id = 4 } 
			name = "3rd Division"
			type = infantry
			strength  = 100
			organisation = 30
		}

		division = {
	        id = { type = 23225 id = 5 } 
			name = "4th Division"
			type = infantry
			strength  = 100
			organisation = 30
		}

	}

	navalunit = {
        id = { type = 23222 id = 1 } 
		location = 709
		name = "Latvian Fleet"

		division = {
	        id = { type = 23223 id = 2 } 
			name = "Ronis&Spidola"
			type = submarine
			model = 0
			strength  = 20
			organisation = 30
		}
	}

	airunit = {
        id = { type = 23228 id = 1 } 
		location = 709
		name = "Latvian Airforce"

		division = {
	        id = { type = 23228 id = 2 } 
			name = "1st Squadron"
			type = fighter
			model = 0
			strength  = 50
			organisation = 30
		}
		division = {
	        id = { type = 23228 id = 3 } 
			name = "2nd Squadron"
			type = fighter
			model = 0
			strength  = 50
			organisation = 30
		}
	}


} 

