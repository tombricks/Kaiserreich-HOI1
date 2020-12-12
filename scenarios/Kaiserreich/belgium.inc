#Eben Emmel
province = {	id = 557	landfort = 2	}


country = { 
    tag = BEL
	alignment = { x = 40 y = -20 }
	capital = 552
	manpower = 230

	techlevels = { 
		12000 13000 11000 14000 1000 1100 2000 5000 6000 9000 10000 8000
		8100 3000 3100 4000 4100 4200 4300
	 }
	 techapps = {
		12001 11001 11004 14001 14014 1001 6003 6004 3002 3005 4001 4101
		4102 4201 4202  4203  4204 3101 14005 1107
		4301 4302 4303
	}


	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200


    ownedprovinces =      {
	 548 552 
	 #kongo
	1192 1131 1187 1186 1129 1130 1115 1189 1185 1135 36 

	 }
    controlledprovinces = {
	 548 552 
	 #kongo
	1192 1131 1187 1186 1129 1130 1115 1189 1185 1135 36 

	  }
    nationalprovinces =   {
	 548 552 
	 #kongo
	1192 1131 1187 1186 1129 1130 1115 1189 1185 1135 36 

	  }
###BELGIAN OOB####
		##HoI Beta Phase##
		##################

		landunit = {
		id = { type = 25005 id = 1 }
		location = 552
		name = "Ie Korps"

		division = {
		id = { type = 25006 id = 1 }
		name = "1e Infanterie Divisie"
		type = infantry
		extra = artillery
				  }
			   }

		###################
		###################

		landunit = {
		id = { type = 25005 id = 2 }
		location = 552 
		name = "IIe Korps"

		division = {
		id = { type = 25006 id = 2 }
		name = "2e Infanterie Divisie"
		type = infantry
		extra = artillery
				  }

		division = {
		id = { type = 25006 id = 3 }
		name = "3e Infanterie Divisie"
		type = infantry
		extra = engineer
				  }

			   }

		#####################
		#####################

		landunit = {
		id = { type = 25026 id = 3 }
		location = 552 
		name = "IIIe Korps"

		division = {
		id = { type = 25006 id = 4 }
		name = "4e Infanterie Divisie"
		type = infantry
		extra = artillery
				  }
			}

		#####################
		#####################

		landunit = {
		id = { type = 25005 id = 4 }
		location = 548
		name = "IVe Korps"

		division = {
		id = { type = 25006 id = 5 }
		name = "5 Infanterie Divisie"
		type = infantry
		extra = engineer
				  }

		division = {
		 id = { type = 25006 id = 6 }
		 name = "6e Infanterie Divisie"
		 type = infantry
		 extra = artillery
				  }

		#######################
		#######################

		landunit = {
		id = { type = 25005 id = 5 }
		location = 548
		name = "Ve Korps"

		division = {
		id = { type = 25006 id = 7 }
		name = "7e Infanterie Divisie"
		type = infantry
		extra = artillery
				  }

		########################
		########################

		landunit = {
		id = { type = 25005 id = 6 }
		location = 557
		name = "VIe Korps"

		division = {
		id = { type = 25006 id = 8 }
		name = "8e Infanterie Divisie"
		type = infantry
		extra = artillery
				  }

		division = {
		id = { type = 25006 id = 9 }
		name = "9e Infanterie Divisie"
		type = infantry  
		extra = engineer
				  }

		###########################
		###########################

		landunit = {
		id = { type = 25005 id = 7 }
		location = 557 
		name = "VIIe Korps"

		division = { 
		id = { type = 25006 id = 10 }
		name = "1e Divisie Ardeense Jagers"
		type = bergsjaeger
				  }
		  }

		############################
		############################

		landunit = {
		id = { type = 25005 id = 8 }
		location = 552 
		name = "Korps Cavalerie"

		division = { 
		id = { type = 25006 id = 11 }
		name = "1e Divisie Gidsen & Lansiers"
		type = motorized
				  }

		division = { 
		id = { type = 25006 id = 12 } 
		name = "1e Divisie Jagers te Paard"
		type = cavalry
				  }
		}


		#############################
		#############################

		landunit = {
		id = { type = 25005 id = 9 }
		location = 1130
		name = "Koninklijke Koloniale Garde"

		division = { 
		 id = { type = 25006 id = 13 }
		 name = "1e Koloniale Garde"
		 type = infantry
					  }
			   }

		#############################
		#############################
		navalunit = {
		id = { type = 25005 id = 14 }
		location = 548
		name = "1e Transporte"

		division = { 
		 id = { type = 25006 id = 15 }
		 name = "1e Transporte"
		 type = transport
					  }
			   }

		#############################
		#############################
		navalunit = {
		id = { type = 25005 id = 16 }
		location = 548
		name = "2e Transporte"

		division = { 
		 id = { type = 25006 id = 17 }
		 name = "2e Transporte"
		 type = transport
					  }
			   }

#############################
#############################
#Supplies to Belgian Congo
	convoy = { 
        id = { type = 17120 id = 1 } 
        transports = 20
        escorts = 0
        path = { 548 504 516 517 920 473 962 450 454 455 2151 460 470 1137 1139 1135 } 
		supplies = yes
		rubber = no
		oil = no
		steel = no
		coal = no
        } 
#Resources from Belgian Congo
	convoy = { 
        id = { type = 17120 id = 2 } 
        transports = 20
        escorts = 0
        path = { 1135 1139 1137 470 460 2151 455 454 450 962 473 920 517 516 504 548 } 
		supplies = no
		rubber = yes
		oil = no
		steel = no
		coal = no
        } 
#####################################
} 

