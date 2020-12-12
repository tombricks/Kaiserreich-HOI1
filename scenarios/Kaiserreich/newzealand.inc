

  country = { 
    tag = NZL
	alignment = { x = 100 y = 0 }

	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200
	capital = 2140

	techlevels = { 
		12000 13000 11000 14000 1000 1100 2000 5000 6000 9000 10000 8000
		8100 3000 3100 4000 4100 4200 4300
	 }
	 techapps = {
		12001 11001 11004 14001 14014 1001 6003 6004 3002 3005 4001 4101
		4102 4201 4202  4203  4204 3101 14005 1107
		4301 4302 4303
	}
	manpower = 50


    ownedprovinces =      {
	2139 2137 2140 2135 2144 63 
	 }
    controlledprovinces = {
	2139 2137 2140 2135 2144 63 
	  }
    nationalprovinces =   {
	2139 2137 2140 2135 2144 63 
	  }


#####################
###NEW ZEALAND OOB###
#####################

landunit = {
 id = { type = 28001 id = 1 }
 name = "2nd NZ Expeditionary Force"
 location = 2135

  division = {
   id = { type = 28001 id = 2 }
   name = "2nd NZ Infantry Division"
   strength = 100
   type = infantry
   extra = engineer
             }
       }

##################
##################

landunit = {
 id = { type = 28001 id = 3 }
 name = "Northern Military District"
 location = 2135
 
  division = {
   id = { type = 28001 id = 4 }
   name = "1st Brigade Mounted Rifles"
   strength = 30
   type = cavalry
             }

  division = {
   id = { type = 28001 id = 5 }
   name = "1st Infantry Brigade"
   strength = 30
   type = infantry  
             }
        }

####################
####################

landunit = {
 id = { type = 28001 id = 6 }
 name = "Central Military District"
 location = 2140
 
  division = {
   id = { type = 28001 id = 7 }
   name = "2nd Brigade Mounted Rifles"
   strength = 30
   type = cavalry
             }

  division = {
   id = { type = 28001 id = 8 }
   name = "2nd Infantry Brigade"
   strength = 30
   type = infantry  
             }
        }

##################
##################

landunit = {
 id = { type = 28001 id = 9 }
 name = "Southern Military District"
 location = 2144
 
  division = {
   id = { type = 28001 id = 10 }
   name = "3rd Brigade Mounted Rifles"
   strength = 30
   type = cavalry
             }

  division = {
   id = { type = 28001 id = 11 }
   name = "3rd Infantry Brigade"
   strength = 30
   type = infantry  
             }
        }

####################
####################

navalunit = {
 id = { type = 28001 id = 12 }
 name = "New Zealand Squadron"
 location = 2135

  division = { 
   id = { type = 28001 id = 13 }
   name = "Leander"
   type = cruiser
	model = 0
	seadefence = 4
    seaattack = 4 
             }

  division = { 
   id = { type = 28001 id = 14 }
   name = "Achilles"
   type = cruiser
   model = 0 
   seadefence = 4
   seaattack = 4 
             }
  division = { 
   id = { type = 28001 id = 15 }
   name = "Transport Flotilla"
   type = transport
   model = 0 
             }
         }



} 