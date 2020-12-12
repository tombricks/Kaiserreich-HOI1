country = { 
    tag = POR
	alignment = { x = 0 y = -30 }

	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200

	capital = 975
	manpower = 210

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
		986 976 974 975 964 
		#africa
		1176 1179 1318 1136 1141 451 456 1036 1142 1132 35 39 1999 1122
		#asia
		2007 1722 1866 

	 }
    controlledprovinces = {
		986 976 974 975 964 
		#africa
		1176 1179 1318 1136 1141 451 456 1036 1142 1132 35 39 1999 1122
		#asia
		2007 1722 1866 

	  }
    nationalprovinces =   {
		986 976 974 975 964 
		#africa
		1176 1179 1318 1136 1141 451 456 1036 1142 1132 35 39 1999 1122 
		#asia
		2007 1722 1866 

	  }
	  
	landunit = {
		id = { type = 14000 id = 1000 } 
		location = 975
		name = "Portuguese Army"

		division = {
	        id = { type = 14000 id = 1001 } 
			name = "1st Division"
			type = infantry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 14000 id = 1002 } 
			name = "2nd Division"
			type = infantry
			strength  = 100
			organisation = 30
		}
	}
	navalunit = {
		id = { type = 14000 id = 1003 }
		location = 975
		name = "1st Transport"

		division = { 
		 id = { type = 14000 id = 1004 }
		 name = "1st Transport"
		 type = transport
					  }
			   }
		navalunit = {
		id = { type = 14000 id = 1005 }
		location = 975
		name = "2st Transport"

		division = { 
		 id = { type = 14000 id = 1006 }
		 name = "2st Transport"
		 type = transport
					  }
			   }

		#############################
		#############################
		# Supplies to Angola
	convoy = { 
		id = { type = 14000 id = 1008 } 
		transports = 15
		escorts = 1
		rubber = no 
		coal = no 
		steel = no 
		oil = no
		supplies = yes
		path = { 975 979 962 1014 453 455 464 463 1055 1137 1138 1136 }
	}
	
	# Supplies to Mocambique
	convoy = { 
		id = { type = 14000 id = 1009 } 
		transports = 18
		escorts = 1
		rubber = no 
		coal = no 
		steel = no 
		oil = no
		supplies = yes
		path = { 975 979 962 1014 453 455 464 463 1055 1137 1152 1161 1326 1325 1177 1176 }
	} 
	# Supplies to Cap Verde
	convoy = { 
		id = { type = 14000 id = 1010 } 
		transports = 10
		escorts = 1
		rubber = no 
		coal = no 
		steel = no 
		oil = no
		supplies = yes
		path = { 975 979 962 1014 453 458 456 }
	}
	# Supplies to Azores
	convoy = { 
		id = { type = 14000 id = 1011 } 
		transports = 10
		escorts = 1
		rubber = no 
		coal = no 
		steel = no 
		oil = no
		supplies = yes
		path = { 975 979 962 450 449 451 }
	}
} 
