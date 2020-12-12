province = {	id = 613	landfort = 7	}
province = {	id = 578	landfort = 7	}
province = {	id = 616	landfort = 7	}
province = {	id = 617	landfort = 7	}


country = { 

    tag = CZE
	alignment = { x = 60 y = 0 }
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

	manpower = 450

	capital = 615

    ownedprovinces      = {	615 612 578 617 613 616 619 614 }
    controlledprovinces = {	615 612 578 617 613 616 619 614 }
    nationalprovinces   = {	615 612 578 617 613 616 619 614 }


#################################
#Czech army
#################################


	#The 8th Corps, based as reserves in Slovakia
	landunit = {
        id = { type = 23000 id = 1 } 
		location = 619
		leader = 18016
		name = "VIII Corps"

		division = {
	        id = { type = 23001 id = 1 } 
			name = "9th Division"
			type = infantry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 23001 id = 2 } 
			name = "15th Division"
			type = infantry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 23001 id = 3 } 
			name = "21st Division"
			type = infantry
			strength  = 100
			organisation = 30
		}

	}

	#General Reserves, based in Moravia
	landunit = {
        id = { type = 23010 id = 1 } 
		location = 615
		leader = 18017
		name = "General Reserves"

		division = {
	        id = { type = 23011 id = 1 } 
			name = "1st Fast Division"
			type = panzer
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 23011 id = 2 } 
			name = "4th Division"
			type = infantry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 23011 id = 3 } 
			name = "12th Division"
			type = infantry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 23011 id = 4 } 
			name = "13th Division"
			type = motorized
			strength  = 100
			organisation = 30
		}

		division = {
	        id = { type = 23011 id = 5 } 
			name = "16th Division"
			type = infantry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 23011 id = 6 } 
			name = "22nd Division"
			type = infantry
			strength  = 100
			organisation = 30
		}



	}


    #1st Army - in Bohemia
	landunit = {
        id = { type = 23020 id = 1 } 
		location = 578
		name = "1st Army"
		leader = 18040

		division = {
	        id = { type = 23021 id = 2 } 
			name = "18th Division"
			type = infantry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 23021 id = 3 } 
			name = "2nd Division"
			type = infantry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 23021 id = 4 } 
			name = "5th Division"
			type = infantry
			strength  = 100
			organisation = 30
		}

		division = {
	        id = { type = 23021 id = 5 } 
			name = "3rd Division"
			type = infantry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 23021 id = 6 } 
			name = "17th Division"
			type = infantry
			strength  = 100
			organisation = 30
		}



	}
	# 2nd Army - N-Moravia
	landunit = {
        id = { type = 23030 id = 1 } 
		location = 613
		name = "2nd Army"
		leader = 18026

		division = {
	        id = { type = 23031 id = 2 } 
			name = "8th Division"
			type = infantry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 23031 id = 3 } 
			name = "7th Division"
			type = infantry
			strength  = 100
			organisation = 30
		}
	}

	# 4th Army - Slovakia
	landunit = {
        id = { type = 23040 id = 1 } 
		location = 618
		name = "4th Army"
		leader = 18034

		division = {
	        id = { type = 23041 id = 2 } 
			name = "3rd Fast Division"
			type = panzer
			model = 0
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 23041 id = 3 } 
			name = "10th Division"
			type = infantry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 23041 id = 4 } 
			name = "11th Division"
			type = infantry
			strength  = 100
			organisation = 30
		}
	}
	# 3rd Army - S-Morawia
	landunit = {
        id = { type = 23050 id = 1 } 
		location = 617
		name = "3rd Army"
		leader = 18041

		division = {
	        id = { type = 23051 id = 2 } 
			name = "2nd Fast Division"
			type = panzer
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 23051 id = 3 } 
			name = "4th Fast Division"
			type = panzer
			model = 0
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 23051 id = 4 } 
			name = "14th Division"
			type = motorized
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 23051 id = 5 } 
			name = "19th Division"
			type = infantry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 23051 id = 6 } 
			name = "6th Division"
			type = infantry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 23051 id = 7 } 
			name = "20th Division"
			type = infantry
			strength  = 100
			organisation = 30
		}
	}



} 
