country = { 
    tag = SWE
	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200

	alignment = { x = 0 y = 0 }
	
	ai = "NE_minor.ai"

	manpower = 250
	capital =  2160

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
		653 654 659 660 661 665 691 2160 692 695 690 689 675 681 685 682 818 698 697 
	 }
    controlledprovinces = {
		653 654 659 660 661 665 691 2160 692 695 690 689 675 681 685 682 818 698 697 
	  }
    nationalprovinces =   {
		653 654 659 660 661 665 691 2160 692 695 690 689 675 681 685 682 818 698 697 
	  }

	#4 infantry divisions.
	landunit =	{
		location = 2160
		name = "1st Division"
        id = { type = 13360 id = 1 } 
		division = {      id = { type = 13360 id = 2 } 	 name = "1st Division"	type = infantry	}
		
	}
	landunit =	{
		location = 653
		name = "2nd Division"
        id = { type = 13360 id = 3 } 
		division = {      id = { type = 13360 id = 4 } 	 name = "2nd Division"	type = infantry	}
		
	}

	landunit =	{
		location = 660
		name = "3rd Division"
        id = { type = 13360 id = 5 } 
		division = {      id = { type = 13360 id = 6 } 	 name = "3rd Division"	type = infantry	}
		
	}

	landunit =	{
		location = 682
		name = "4th Division"
        id = { type = 13360 id = 7 } 
		division = {      id = { type = 13360 id = 8 } 	 name = "4th Division"	type = infantry	}
		
	}


	navalunit = {
		location = 2160
		name = "Svenska Flottan"
        id = { type = 13360 id = 10 } 
		division = { id = { type = 13360 id = 11 } name = "Sverige"	type = cruiser model = 0 }
		division = { id = { type = 13360 id = 12 } name = "Drottning Victoria" type = cruiser model = 0 }
		division = { id = { type = 13360 id = 13 } name = "Gustav V" type = cruiser model = 0 }
		division = { id = { type = 13360 id = 14 } name = "Gotland" type = cruiser model = 0 airattack = 5 }
		division = { id = { type = 13360 id = 15 } name = "Ehrenskold Group" type = destroyer model = 0 }
		division = { id = { type = 13360 id = 16 } name = "Transport Group" type = transport model = 0 }

	}
	convoy = { 
        id = { type = 17120 id = 310002 } 
        transports = 15 
        escorts = 3 
        rubber = no 
        coal = no 
        steel = no 
        oil = no 
        supplies = yes 
        path = { 2160 696 699 698 } 
        }
} 
