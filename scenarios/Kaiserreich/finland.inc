country = { 
    tag = FIN
	alignment = { x = 0 y = -20 }

	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200

	capital = 706
	manpower = 110

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
		787 803 795 802 706 705 800 801 796 797 799 798 813 812 821  819 702 
	 }
    controlledprovinces = {
		787 803 795 802 706 705 800 801 796 797 799 798 813 812 821  819 702 
	  }
    nationalprovinces =   {
		787 803 795 802 706 705 800 801 796 797 799 798 813 812 821  819 702 
	  }
landunit = {

	location = 802 # province id.
	leader = 9701 #id from leader database
	name = "The Isthmus Army"
	id = { type = 20000 id = 1 }
	
	division = {
		id = { type = 20000 id = 2 }
		type = infantry
		name = "1st Infantry"
		extra = artillery
	}
	
}

landunit = {

	location = 787 # province id.
	leader = 9702 #id from leader database
	name = "II Corps"
	id = { type = 20000 id = 3 }
	
	division = {
		id = { type = 20000 id = 4 }
		type = infantry
		name = "4th Infantry"
	}

	division = {
		id = { type = 20000 id = 5 }
		type = infantry
		name = "5th Infantry"
		extra = artillery
	}

	division = {
		id = { type = 20000 id = 6 }
		type = infantry
		name = "11th Infantry"
		extra = artillery
	}

	division = {
		id = { type = 20000 id = 7 }
		type = infantry
		name = "UML-Group"
	}
	
}		

landunit = {

	location = 787 # province id.
	leader = 9703 #id from leader database
	name = "III Corps"
	id = { type = 20000 id = 8 }
	
	division = {
		id = { type = 20000 id = 9 }
		type = infantry
		name = "8th Infantry"
		extra = artillery
	}

	division = {
		id = { type = 20000 id = 10 }
		type = infantry
		name = "10th Infantry"
		extra = artillery
	}

}		

landunit = {

	location = 803 # province id.
	leader = 9704 #id from leader database
	name = "IV Corps"
	id = { type = 20000 id = 11 }
	
	division = {
		id = { type = 20000 id = 12 }
		type = infantry
		name = "12th Infantry"
	}

	division = {
		id = { type = 20000 id = 13 }
		type = infantry
		name = "13th Infantry"
		extra = artillery
	}

}		

landunit = {

	location = 706 # province id.
	leader = 9700 #id from leader database
	name = "CinC reserves"
	id = { type = 20000 id = 14 }
	
	division = {
		id = { type = 20000 id = 15 }
		type = infantry
		name = "6th Infantry"
	}

	division = {
		id = { type = 20000 id = 16 }
		type = infantry
		name = "9th Infantry"
		extra = artillery
	}

	division = {
		id = { type = 20000 id = 23 }
		type = infantry
		name = "Kenttätäydennysprikaati"
	}

}		

landunit = {

	location = 795 # province id.
	leader = 9705 #id from leader database
	name = "Pohjois-Karjalan Ryhmä"
	id = { type = 20000 id = 17 }
	
	division = {
		id = { type = 20000 id = 18 }
		type = infantry
		name = "Pohjois-Karjalan Ryhmä"
	}
}

landunit = {

	location = 812 # province id.
	name = "Pohjois-Suomen Ryhmä"
	id = { type = 20000 id = 19 }
	
	division = {
		id = { type = 20000 id = 20 }
		type = infantry
		name = "Pohjois-Suomen Ryhmä"
	}
}

landunit = {

	location = 819 # province id.
	name = "Lapin Ryhmä"
	id = { type = 20000 id = 21 }
	
	division = {
		id = { type = 20000 id = 22 }
		type = infantry
		name = "Lapin Ryhmä"
	}
}

} 
