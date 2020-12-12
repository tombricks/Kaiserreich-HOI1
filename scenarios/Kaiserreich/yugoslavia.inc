country = { 
    tag = YUG
	alignment = { x = -40 y = -40 }

	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200

	capital = 735

	techlevels = { 
		12000 13000 11000 14000 1000 1100 2000 5000 6000 9000 10000 8000
		8100 3000 3100 4000 4100 4200 4300
	 }
	 techapps = {
		12001 11001 11004 14001 14014 1001 6003 6004 3002 3005 4001 4101
		4102 4201 4202  4203  4204 3101 14005 1107
		4301 4302 4303
	}

	  manpower = 470

    ownedprovinces      = { 737 735 752 751 }
    controlledprovinces = { 737 735 752 751 }
    nationalprovinces   = { 737 735 752 751 }


##########################
####YUGOSLAVIAN OOB####
##########################

landunit = {
 id = { type = 10739 id = 1 }
 location = 738
 name = "4th Army"

  division = {
   id = { type = 10738 id = 1 }
   name = "27 Savska"
   strength = 70
   type = infantry
   extra = artillery
                }

         }

#########################
##########################

landunit = {
 id = { type = 10739 id = 2 }
 location = 738
 name = "7th Army"

  division = {
   id = { type = 10738 id = 4 }
   name = "32 Triglavski"
   strength = 70
   type = infantry
   extra = artillery
                }

  division = {
   id = { type = 10738 id = 5 }
   name = "Triglavski"
   strength = 70
   type = bergsjaeger
                }

  division = {
   id = { type = 10738 id = 9 }
   name = "1st Cavalry"
   strength = 70
   type = cavalry
             }

         }

#########################
##########################

landunit = {
 id = { type = 10739 id = 3 }
 name = "1st Army"
 location = 741

  division = {
   id = { type = 10738 id = 10 }
   name = "7 Potiska"
   strength = 70
   type = infantry
   extra = artillery
             }

  division = {
   id = { type = 10738 id = 11 }
   name = "3rd Cavalry"
   strength = 70
   type = cavalry
             }
          }

#############################
#############################


landunit = {
 id = { type = 10739 id = 4 }
 location = 735
 name = "2nd Army"

  division = { 
   id = { type = 10738 id = 15 }
   name = "10 Basanska"
   strength = 70
   type = infantry
             }

  division = { 
   id = { type = 10738 id = 16 }
   name = "17 Vrbaska"
   strength = 70
   type = infantry
             }
          }

############################
############################

landunit = {
 id = { type = 10739 id = 5 }
 location = 753
 name = "3rd Army"

  division = { 
   id = { type = 10738 id = 18 }
   name = "13 Hercegovacka"
   strength = 70
   type = infantry
             }

  division = { 
   id = { type = 10738 id = 19 }
   name = "15 Zetska"
   strength = 70
   type = infantry
             }

          }

##############################
###############################

landunit = {
 id = { type = 10739 id = 6 }
 location = 751
 name = "3rd Territorial Army"

  division = { 
   id = { type = 10738 id = 23 }
   name = "5 Sumadijska"
   strength = 70
   type = infantry
             }

  division = { 
   id = { type = 10738 id = 24 }
   name = "20 Bregalnicka"
   strength = 70
   type = infantry
             }

  division = { 
   id = { type = 10738 id = 27 }
   name = "Ibarska"
   strength = 70
   type = infantry
             }

          }

###############################
###############################

landunit = {
 id = { type = 10739 id = 7 }
 location = 738
 name = "5th Independant Army"

  division = { 
   id = { type = 10738 id = 28 }
   name = "8 Krajinska"
   strength = 70
   type = infantry
             }

  division = { 
   id = { type = 10738 id = 29 }
   name = "9 Timocka"
   strength = 70
   type = infantry
             }

  division = { 
   id = { type = 10738 id = 32 }
   name = "2nd Cavalry"
   strength = 70
   type = cavalry
             }

          }

###############################
###############################

landunit = {
 id = { type = 10739 id = 8 }
 location = 753
 name = "6th Independant Army"

  division = { 
   id = { type = 10738 id = 33 }
   name = "3 Dunavska"
   strength = 70
   type = infantry
             }

  division = { 
   id = { type = 10738 id = 37 }
   name = "4th Cavalry"
   strength = 70
   type = cavalry
             }

          }

############################
############################

airunit = {
 location = 738
 id = { type = 10739 id = 9 }
 name = "Royal Yugoslavian Air Force"

  division = {
   id = { type = 10738 id = 42 }
   name = "1st Fighter Wing" 
   strength = 30 
   type = fighter
   model = 0
             }

  division = {
   id = { type = 10738 id = 44 }
   name = "4th Bomber Wing" 
   strength = 30 
   type = tactical_bomber
   model = 0
             }
         }

###########################
###########################

navalunit = {
 id = { type = 10739 id = 10 }
 name = "Yugoslav Fleet"
 location = 747

    division = { id = { type = 10738 id = 45 } name = "1st Destroyer Division" type = destroyer model = 0 }
    division = { id = { type = 10738 id = 46 } name = "1st Submarine Division" type = submarine model = 0 }
       }


} 
