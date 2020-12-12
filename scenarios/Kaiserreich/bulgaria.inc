

country = { 
    tag = BUL
    alignment = { x = -10 y = -50 }
	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200

	manpower = 180
	capital = 750

	techlevels = { 
		12000 13000 11000 14000 1000 1100 2000 5000 6000 9000 10000 8000
		8100 3000 3100 4000 4100 4200 4300
	 }
	 techapps = {
		12001 11001 11004 14001 14014 1001 6003 6004 3002 3005 4001 4101
		4102 4201 4202  4203  4204 3101 14005 1107
		4301 4302 4303
	}

    ownedprovinces      = { 750 756 871 869 755 868 761 872 }
    controlledprovinces = {	750 756 871 869 755 868 761 872 }
    nationalprovinces   = {	750 756 871 869 755 868 761 872 }


#####################
####BULGARIAN OOB####
#####################

landunit = {
 id = { type = 28003 id = 1 }
 location = 750
 name = "1st Army Corps"

  division = {
   id = { type = 28003 id = 2 }
   name = "1st Infantry Division"
   strength = 100
   type = infantry
             }

  division = {
   id = { type = 28003 id = 3 }
   name = "7th Infantry Division"
   strength = 100
   type = infantry
             }

  division = {
   id = { type = 28003 id = 4 }
   name = "1st Cavalry Division"
   strength = 100
   type = cavalry
             }
           }

#############################
##############################

landunit = {
 id = { type = 28003 id = 5 }
 location = 871
 name = "2nd Army Corps"

  division = {
   id = { type = 28003 id = 6 }
   name = "2nd Infantry Division"
   strength = 100
   type = infantry
   extra = artillery
             }

  division = {
   id = { type = 28003 id = 7 }
   name = "8th Infantry Division"
   strength = 100
   type = infantry
             }

  division = {
   id = { type = 28003 id = 8 }
   name = "10th Infantry Division"
   strength = 100
   type = infantry
             }

           }

############################
#############################

landunit = {
 id = { type = 28003 id = 9 }
 location = 869
 name = "3rd Army Corps"

  division = {
   id = { type = 28003 id = 10 }
   name = "3rd Infantry Division"
   strength = 100
   type = infantry
             }

  division = {
   id = { type = 28003 id = 11 }
   name = "4th Infantry Division"
   strength = 100
   type = infantry
             }
           }

################################
################################

landunit = {
 id = { type = 28003 id = 12 }
 location = 756
 name = "4th Army Corps"

  division = {
   id = { type = 28003 id = 13 }
   name = "5th Infantry Division"
   strength = 100
   type = infantry
   extra = artillery
             }

  division = {
   id = { type = 28003 id = 14 }
   name = "6th Infantry Division"
   strength = 100
   type = infantry
             }

  division = {
   id = { type = 28003 id = 15 }
   name = "9th Infantry Division"
   strength = 100
   type = infantry
             }

           }

###############################
###############################

landunit = {
 id = { type = 28003 id = 16 }
 location = 750
 name = "5th Army Corps"

  division = {
   id = { type = 28003 id = 17 }
   name = "14th Infantry Division"
   strength = 100
   type = infantry
             }

  division = {
   id = { type = 28003 id = 18 }
   name = "15th Infantry Division"
   strength = 100
   type = infantry
             }

  division = {
   id = { type = 28003 id = 19 }
   name = "2nd Cavalry Division"
   strength = 100
   type = cavalry
             }
           }


###############################
###############################

airunit = {
 id = { type = 28003 id = 24 }
 location = 750
 name = "Bulgarian Army Air Force"

  division = {
   id = { type = 28003 id = 25 }
   name = "2nd Fighter Wing"
   strength = 30 
   type = fighter
   model = 0
             }

  division = {
   id = { type = 28003 id = 26 }
   name = "5th Bomber Wing"
   strength = 30 
   type = tactical_bomber
   model = 0
             }

  division = {
   id = { type = 28003 id = 27 }
   name = "6th Fighter Wing"
   strength = 30 
   type = fighter
   model = 0
             }

         }

############################
#############################
 

} 


