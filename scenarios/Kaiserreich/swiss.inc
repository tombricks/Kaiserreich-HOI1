
#Swiss defenses
province = {	id = 564	landfort = 3	}
province = {	id = 541	landfort = 3 }
province = {	id = 914	landfort = 3 }
province = {	id = 936	landfort = 3 }



country = { 

    tag = SCH
	alignment = { x = 0 y = 0 }

	capital = 541
	techlevels = { 
		12000 13000 11000 14000 1000 1100 2000 5000 6000 9000 10000 8000
		8100 3000 3100 4000 4100 4200 4300
	 }
	 techapps = {
		12001 11001 11004 14001 14014 1001 6003 6004 3002 3005 4001 4101
		4102 4201 4202  4203  4204 3101 14005 1107
		4301 4302 4303
	}

	manpower = 400

	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200


    ownedprovinces =      {
		564 541 914 936 
	 }
    controlledprovinces = {
		564 541 914 936 
	  }
    nationalprovinces =   {
		564 541 914 936 
	  }



#####################
####Swiss 36OOB####
#####################

landunit = {
 id = { type = 26400 id = 1 }
 location = 564
 name = "1st Army Corps"
 leader = 129001

  division = {
   id = { type = 26400 id = 2 }
   name = "1st Infantry Division"
   strength = 100
   type = infantry
             }
}

#############################
##############################

landunit = {
 id = { type = 26400 id = 3 }
 location = 541
 name = "2nd Army Corps"
 leader = 129004

  division = {
   id = { type = 26400 id = 4 }
   name = "2nd Infantry Division"
   strength = 100
   type = infantry
}

   division = {
   id = { type = 26400 id = 5 }
   name = "I Gebirgsjäger"
   strength = 30
   type = bergsjaeger
             }

           }

############################
#############################

landunit = {
 id = { type = 26400 id = 6 }
 location = 914
 name = "3rd Army Corps"
 leader = 129002

  division = {
   id = { type = 26400 id = 7 }
   name = "3rd Infantry Division"
   strength = 100
   type = infantry
             }

  division = {
   id = { type = 26400 id = 8 }
   name = "4th Infantry Division"
   strength = 100
   type = infantry
             }

division = {
   id = { type = 26400 id = 9 }
   name = "II Gebirgsjäger"
   strength = 30
   type = bergsjaeger
             }

           }

################################
################################

landunit = {
 id = { type = 26400 id = 10 }
 location = 936
 name = "4th Army Corps"
 leader = 129006

  division = {
   id = { type = 26400 id = 11 }
   name = "5th Infantry Division"
   strength = 100
   type = infantry
             }

  division = {
   id = { type = 26400 id = 12 }
   name = "6th Infantry Division"
   strength = 100
   type = infantry
             }

division = {
   id = { type = 26400 id = 13 }
   name = "III Gebirgsjäger"
   strength = 30
   type = bergsjaeger
             }

           }

airunit = {
 id = { type = 26400 id = 14 }
 location = 541
 name = "Swiss Army Air Force"
 leader = 129010

  division = {
   id = { type = 26400 id = 15 }
   name = "Kampfgeschwader I"
   strength = 40 
   type = tactical_bomber
   model = 0
             }
         }

############################
#############################
 





} 
