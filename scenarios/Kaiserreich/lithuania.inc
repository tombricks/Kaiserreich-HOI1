country = { 
    tag = LIT
	alignment = { x = 0 y = -60 }

	capital = 715
	techlevels = { 
		12000 13000 11000 14000 1000 1100 2000 5000 6000 9000 10000 8000
		8100 3000 3100 4000 4100 4200 4300
	 }
	 techapps = {
		12001 11001 11004 14001 14014 1001 6003 6004 3002 3005 4001 4101
		4102 4201 4202  4203  4204 3101 14005 1107
		4301 4302 4303
	}


	manpower = 75
	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200

    ownedprovinces =      {
		711 713 714 715   
	 }
    controlledprovinces = {
		711 713 714 715 
	  }
    nationalprovinces =   {
		711 713 714 715 716 
	  }
############################################
####Lithuanian Army#########################
############################################

	landunit = {
        id = { type = 30021 id = 1 } 
		location = 715
		name = "Lithuanian Army"

		division = {
	        id = { type = 30021 id = 2 } 
			name = "1st Division"
			type = infantry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 30021 id = 3 } 
			name = "2nd Division"
			type = infantry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 30021 id = 4 } 
			name = "3rd Division"
			type = infantry
			strength  = 100
			organisation = 30
		}
	
	airunit = {
        id = { type = 30021 id = 5 } 
		location = 715
		name = "Lithuanian Airforce"

		division = {
	        id = { type = 30021 id = 6 } 
			name = "1st Squadron"
			type = fighter
			model = 0
			strength  = 45
			organisation = 50
		}
	}
#####################################################


} 

