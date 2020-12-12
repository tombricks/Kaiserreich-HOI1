
country = { 
    tag = AUS
	alignment = { x = 40 y = -30 }

	manpower = 200
	techlevels = { 
		12000 13000 11000 14000 1000 1100 2000 5000 6000 9000 10000 8000
		8100 3000 3100 4000 4100 4200 4300
	 }
	 techapps = {
		12001 11001 11004 14001 14014 1001 6003 6004 3002 3005 4001 4101
		4102 4201 4202  4203  4204 3101 14005 1107
		4301 4302 4303
	}

	capital = 621

	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200


    ownedprovinces =      {
	565 573 571 623 621 610 611 620 563 570 569 624
	 }
    controlledprovinces = {
	565 573 571 623 621 610 611 620 563 570 569 624
	  }
    nationalprovinces =   {
	565 573 571 623 621 610 611 620 563 570 569 624
	  }

	landunit ={
	id = { type = 14000 id = 9000 } 
		location = 621
		name = "I. Corps"


		division = {
	        id = { type = 14000 id = 9001 } 
			name = "Schnelle Division"
			type = panzer
			model = 0
			strength  = 70
			organisation = 50
		}
		division = {
	        id = { type = 14000 id = 9002 } 
			name = "1. Division"
			type = infantry
			strength  = 100
			organisation = 50
		}
		division = {
	        id = { type = 14000 id = 9003 } 
			name = "2. Division"
			type = infantry
			strength  = 100
			organisation = 50
		}
		division = {
	        id = { type = 14000 id = 9004 } 
			name = "3. Division"
			type = infantry
			strength  = 100
			organisation = 50
		}
	}

	landunit ={
	id = { type = 14000 id = 9005 } 
		location = 611
		name = "II. Corps"


		division = {
	        id = { type = 14000 id = 9006 } 
			name = "4. Division"
			type = infantry
			strength  = 100
			organisation = 50
		}
	}

	landunit ={
		id = { type = 14000 id = 9007 } 
		location = 623
		name = "III. Corps"


		division = {
	        id = { type = 14000 id = 9009 } 
			name = "5. Division"
			type = infantry
			strength  = 100
			organisation = 50
		}
	}

	landunit ={
		id = { type = 14000 id = 9008 } 
		location = 573
		name = "IV. Corps"


		division = {
	        id = { type = 14000 id = 9011 } 
			name = "6. Division"
			type = infantry
			strength  = 100
			organisation = 50
		}
	}

	landunit ={
		id = { type = 14000 id = 9010 } 
		location = 571
		name = "V. Corps"


		division = {
	        id = { type = 14000 id = 9012 } 
			name = "7. Division"
			type = infantry
			strength  = 100
			organisation = 50
		}
	}

	landunit ={
		id = { type = 14000 id = 9013 } 
		location = 610
		name = "VI. Corps"


		division = {
	        id = { type = 14000 id = 9014 } 
			name = "8. Division"
			type = infantry
			strength  = 30
			organisation = 50
		}
	}

} 

