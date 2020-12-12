
  country = { 
    tag = CAN
	alignment = { x = 100 y = 0 }
	
	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200
	manpower = 330

	techlevels = { 
		12000 13000 11000 14000 1000 1100 2000 5000 6000 9000 10000 8000
		8100 3000 3100 4000 4100 4200 4300 
			 }
	 techapps = {
		12001 11001 11004 14001 14014 1001 6003 6004 3002 3005 4001 4101
		4102 4201 4202  4203  4204 3101 14005 1107
		4301 4302 4303
	}


	capital = 128

    ownedprovinces =      {
	99 100 107 108 136 137 128 149 160 161 148 153  154 2199  10	 4
	 }
    controlledprovinces = {
	99 100 107 108 136 137 128 149 160 161 148 153  154 2199 10 4
	  }
    nationalprovinces =   {
	99 100 107 108 136 137 128 149 160 161 148 153  154 2199 10 4
	  }


###CANADIAN OOB###
#######1936#######
##################

landunit = { 
 id = { type = 11128 id = 1 }
 name = "Canadian Army"
 location = 149

  division = {
   id = { type = 11128 id = 2 }
   name = "1st Canadian Division"
   strength = 100
   type = infantry
   extra = artillery
             }

  division = {
   id = { type = 11128 id = 3 }
   name = "2nd Canadian Division"
   strength = 100
   type = infantry
             }
          }

###CANADIAN NAVAL OOB###
######ALL SCENARIOS#####
########################

navalunit = {
 id = { type = 11128 id = 7 }
 name = "1st Destroyer Division"
 location = 161

  division = { id = { type = 11128 id = 8 } name = "1st Destroyer Division" type = destroyer model = 0 }
  division = { id = { type = 11128 id = 9 } name = "1st Transport Detachment" type = transport model = 0 }
       }
} 

