country = { 
    tag = SPR
	alignment = { x = 30 y = 0 }

	techlevels = { 
		12000 13000 11000 14000 1000 1100 2000 5000 6000 9000 10000 8000
		8100 3000 3100 4000 4100 4200 4300
	 }
	 techapps = {
		12001 11001 11004 14001 14014 1001 6003 6004 3002 3005 4001 4101
		4102 4201 4202  4203  4204 3101 14005 1107
		4301 4302 4303
	}

	manpower = 750
		# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200

	dissent = 60
	capital = 972

    ownedprovinces =      {
	952 954 953 969 970 956 959 957 966 967 978 972 980 971 981 996 983 977 987 988 991 995 990 997 1000 998 1017 1018 1019 1020 941 1009 1027 1121
	 }
    controlledprovinces = {
	952 954 953 969 970 956 959 957 966 967 978 972 980 971 981 996 983 977 987 988 991 995 990 997 1000 998 1017 1018 1019 1020 941 1009 1027 1121
	  }
    nationalprovinces =   {
	952 954 953 969 970 956 959 957 966 967 978 972 980 971 981 996 983 977 987 988 991 995 990 997 1000 998 1017 1018 1019 1020 941 1009 1027 1121
	  }


#
#
# Spanish Troops
#
#
	                                    
	#All those ships were completed by the end of 1936. I'm not sure if the current industrial
	#of Spain can handle that, however. Maybe the startdates should be further pushed back in time
	
	development = {
		id = { type = 25000 id = 300 }
		name = "Baleares"
		type = cruiser
		cost = 15
		date = { year = 1935 month = december }
	
	}
	
	development = {
		id = { type = 25000 id = 301 }
		name = "Canarias"
		type = cruiser
		cost = 15
		date = { year = 1935 month = december }
	}
	
	development = {
		id = { type = 25000 id = 302 }
		name = "Destroyer Flotilla"
		type = destroyer
		cost = 12
		date = { year = 1935 month = december }
	}
	
	development = {
		id = { type = 25000 id = 303 }
		name = "Destroyer Flotilla"
		type = destroyer
		cost = 12
		date = { year = 1935 month = december }
	}
	
	landunit = {
		id = { type = 25000 id = 1 }
		location = 972
		name = "1er Cuerpo del Ejército"
	
		division = {
			id = { type = 25001 id = 1 }
			name = "1a de Infantería"
			type = infantry
		}
	
		division = {
			id = { type = 25000 id = 2 }
			name = "2a de Infantería"
			type = infantry
		}
	
		division = {
			id = { type = 25000 id = 3 }
			name = "1a de Caballería"
			type = cavalry
		}
	
		division = {
			id = { type = 25000 id = 17 }
			name = "Autoametralladoras-cañon"
			type = panzer
			strength= 30
		}
	}
	
	landunit = {
		id = { type = 25000 id = 202 }
		location = 969
		name = "2o Cuerpo del Ejército"
	
		division = {
			id = { type = 25000 id = 4 }
			name = "3a de Infantería"
			type = infantry
		}
	
		division = {
			id = { type = 25000 id = 5 }
			name = "4a de Infantería"
			type = infantry
		}
	
		division = {
			id = { type = 25000 id = 6 }
			name = "5a de Infantería"
			type = infantry
		}
	
		division = {
			id = { type = 25000 id = 16 }
			name = "Brigadas de Montaña"
			type = bergsjaeger
		}
	}
	
	landunit = {
		id = { type = 25000 id = 6663 }
		location = 959
		name = "3er Cuerpo del Ejército"
	
		division = {
			id = { type = 25000 id = 7 }
			name = "6a de Infantería"
			type = infantry
		}
	
		division = {
			id = { type = 25000 id = 8 }
			name = "7a de Infantería"
			type = infantry
		}
	
		division = {
			id = { type = 25000 id = 9 }
			name = "8a de Infantería"
			type = infantry
			extra = artillery
		}
	}
	
	landunit = {
		id = { type = 25000 id = 34 }
		location = 997
		name = "Comandancia de Baleares"
	
		division = {
			id = { type = 25000 id = 10 }
			name = "Comandancia de Baleares"
			type = infantry
			strength=30
		}
	}
	
	landunit = {
		id = { type = 25000 id = 3325 }
		location = 1020
		name = "Comandancia de Canarias"
	
		division = { id = { type = 25000 id = 11 }
		name = "Comandancia de Canarias"
		type = infantry
		strength=30
	}
	}
	
	landunit = {
		id = { type = 25000 id = 206 }
		location = 1009
		name = "Ejército de África"
	
		division = {
			id = { type = 25000 id = 12 }
			name = "Circunscripción Occidental"
			type = infantry
			organisation=35
		}
	
		division = {
			id = { type = 25000 id = 13 }
			name = "Circunscripción Oriental"
			type = infantry
			organisation=35
		}
	}
	
	landunit = {
		id = { type = 25000 id = 607 }
		location = 1027
		name = "Fuerzas del Sahara"
	
		division = {
			id = { type = 25000 id = 14 }
			name = "Fuerzas del Sahara"
			type = infantry
			strength = 30
		}
	}
	
	landunit = {
		id = { type = 25000 id = 598 }
		location = 1192
		name = "Guardias Coloniales"
	
		division = {
			id = { type = 25000 id = 15 }
			name = "Guardias Coloniales"
			type = militia
			strength=30
		}
	}
	
	#Some naval units were clearly outdated or in bad fighting shape. Strength has been reduced in those cases.
	
	navalunit = { location = 988 id = { type = 25000 id = 112 } name = "Base Naval Cádiz"
	division = { id = { type = 25000 id = 113 } name = "República" strength = 60 type = cruiser }
	division = { id = { type = 25000 id = 114 } name = "Grupo de Escolta" strength = 100 type = destroyer }
	}
	
	navalunit = { location = 1027 id = { type = 25000 id = 400 } name = "Grupo Méndez Núñez"
	division = { id = { type = 25000 id = 115 } name = "Méndez Núñez" strength = 100 type = cruiser }
	}
	
	navalunit = { location = 959 id = { type = 25000 id = 401 } name = "Escuadrón de Batalla"
	division = { id = { type = 25000 id = 402 } name = "Jaime I" strength = 50 type = battleship }
	division = { id = { type = 25000 id = 403 } name = "España" strength = 100 type = battleship }
	division = { id = { type = 25000 id = 404 } name = "Libertad" strength = 100 type = cruiser }
	division = { id = { type = 25000 id = 405 } name = "Miguel de Cervantes" strength = 100 type = cruiser }
	division = { id = { type = 25000 id = 406 } name = "Almirante Cervera" strength = 100 type = cruiser }
	division = { id = { type = 25000 id = 407 } name = "1st Escort Group" strength = 100 type = destroyer }
	division = { id = { type = 25000 id = 408 } name = "2nd Escort Group" strength = 100 type = destroyer }
	}
	
	navalunit = { location = 996 id = { type = 25000 id = 409 } name = "Destroyer Fleet"
	division = { id = { type = 25000 id = 123 } name = "1er Escuadrón" strength = 100 type = destroyer }
	division = { id = { type = 25000 id = 124 } name = "2o Escuadrón" strength = 100 type = destroyer }
	}
	
	navalunit = { location = 996 id = { type = 25000 id = 116 } name = "Submarine Flotilla"
	division = { id = { type = 25000 id = 410 } name = "C-Group" strength = 100 type = submarine }
	}
	
	navalunit = { location = 997 id = { type = 25000 id = 117 } name = "Submarine Flotilla"
	division = { id = { type = 25000 id = 411 } name = "B-Group" strength = 75 type = submarine }
	}
	
	airunit = { location = 972 id = { type = 25000 id = 412 } name = "1a Escuadra Aérea"
	division = { id = { type = 25000 id = 413 } name = "Bomber Wing" strength = 30 type = tactical_bomber }
	division = { id = { type = 25000 id = 414 } name = "Fighter Wing" strength = 30 type = fighter }
	}
	
	airunit = { location = 995 id = { type = 25000 id = 415 } name = "2a Escuadra Aérea"
	division = { id = { type = 25000 id = 416 } name = "Bomber Wing" strength = 30 type = tactical_bomber }
	division = { id = { type = 25000 id = 417 } name = "Fighter Wing" strength = 30 type = fighter }
	}
	
	airunit = { location = 970 id = { type = 25000 id = 418 } name = "3a Escuadra Aérea"
	division = { id = { type = 25000 id = 419 } name = "Bomber Wing" strength = 30 type = strategic_bomber }
	division = { id = { type = 25000 id = 420 } name = "Fighter Wing" strength = 30 type = fighter }
	}
	
	airunit = { location = 1009 id = { type = 25000 id = 421 } name = "Fuerzas Aéreas del África"
	division = { id = { type = 25000 id = 422 } name = "Fighter/Bomber Wing" strength = 30 type = dive_bomber }
	division = { id = { type = 25000 id = 423 } name = "Bomber Wing" strength = 30 type = strategic_bomber }
	}
	

 # Supplies to the Baleares
	convoy = { 
		id = { type = 25001 id = 10 } 
		transports = 8
		escorts = 0
		rubber = no 
		coal = no 
		steel = no 
		oil = no
		supplies = yes
		path = { 909 1001 997 }
	}
	
	# Supplies to the Canaries
	convoy = { 
		id = { type = 25001 id = 11 } 
		transports = 8
		escorts = 0
		rubber = no 
		coal = no 
		steel = no 
		oil = no
		supplies = yes
		path = { 988 993 1014 1015 1019 }
	} 
} 
