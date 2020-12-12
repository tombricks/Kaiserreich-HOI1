country = { 
    tag = IRQ
	alignment = { x = 30 y = -60 }
	puppet = ENG
	control = ENG

	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200
	manpower = 105

	capital = 	1272

    ownedprovinces =      {
1271 1272 1267 1280 1281 1355 1354 
	 }
    controlledprovinces = {
1271 1272 1267 1280 1281 1355 1354 
	  }
    nationalprovinces =   {
1271 1272 1267 1280 1281 1355 1354 
	  }


################
####IRAQ OOB####
################

airunit = {
 id = { type = 28006 id = 1 }
 name = "Royal Army Air Force"
 location = 1354
  
  division = {
   id = { type = 28006 id = 2 }
   name = "1st Fighter Wing"
   strength = 30
   type = fighter
   model = 0
             }

          }

#########################
#########################

landunit = {
 id = { type = 28006 id = 3 }
 name = "Royal Iraqi Army"
 location = 1272

  division = { 
   id = { type = 28006 id = 4 }
   name = "1st Infantry Division"
   strength = 100
   type = infantry
             }

  division = { 
   id = { type = 28006 id = 5 }
   name = "2nd Infantry Division"
   strength = 100
   type = infantry
             }

  division = { 
   id = { type = 28006 id = 6 }
   name = "3rd Infantry Division"
   strength = 100
   type = infantry
             }

  division = { 
   id = { type = 28006 id = 7 }
   name = "4th Infantry Division"
   strength = 100
   type = infantry
             }

  division = { 
   id = { type = 28006 id = 8 }
   name = "1st Motorized Division"
   strength = 30
   type = motorized
             }
         }

######################
######################
}