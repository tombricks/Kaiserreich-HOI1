province = {	id = 872	landfort = 5	}
province = {	id = 874	landfort = 5	}

country = { 
    tag = GRE
	alignment = { x = 50 y = -20 }
	manpower = 220

	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200

	capital = 891

	techlevels = { 
		12000 13000 11000 14000 1000 1100 2000 5000 6000 9000 10000 8000
		8100 3000 3100 4000 4100 4200 4300
	 }
	 techapps = {
		12001 11001 11004 14001 14014 1001 6003 6004 3002 3005 4001 4101
		4102 4201 4202  4203  4204 3101 14005 1107
		4301 4302 4303
	}


    ownedprovinces      = {	889 875 2163 890 891 2159 874 887 2152 }
    controlledprovinces = {	889 875 2163 890 891 2159 874 887 2152 }
    nationalprovinces   = {	889 875 2163 890 891 2159 874 887 2152 }


#################
####GREEK OOB####
#################

landunit = {
 id = { type = 28004 id = 1 }
 location = 891
 name = "1st Corps"

  division = {
   id = { type = 28004 id = 2 }
   name = "2nd Infantry Division"
   strength = 67
   type = infantry
             }

  division = {
   id = { type = 28004 id = 3 }
   name = "3rd Infantry Division"
   strength = 67
   type = infantry
             }

  division = {
   id = { type = 28004 id = 4 }
   name = "4th Infantry Division"
   strength = 67
   type = infantry
             }
          }

########################
########################

landunit = {
 id = { type = 28004 id = 5 }
 location = 875
 name = "2nd Corps"

  division = {
   id = { type = 28004 id = 6 }
   name = "1st Infantry Division"
   strength = 67
   type = infantry
             }

  division = {
   id = { type = 28004 id = 7 }
   name = "9th Infantry Division"
   strength = 67
   type = infantry
             }

          }

##########################
##########################

landunit = {
 id = { type = 28004 id = 8 }
 location = 872
 name = "3rd Corps"

  division = {
   id = { type = 28004 id = 9 }
   name = "6th Infantry Division"
   strength = 67
   type = infantry
   extra = artillery
             }

  division = {
   id = { type = 28004 id = 10 }
   name = "10th Infantry Division"
   strength = 67
   type = infantry
             }

  division = {
   id = { type = 28004 id = 11 }
   name = "11th Infantry Division"
   strength = 67
   type = infantry
             }

  division = {
   id = { type = 28004 id = 12 }
   name = "17th Infantry Division"
   strength = 67
   type = infantry
             }

          }

#########################
#########################

landunit = {
 id = { type = 28004 id = 13 }
 location = 875
 name = "4th Corps"

  division = {
   id = { type = 28004 id = 14 }
   name = "7th Infantry Division"
   strength = 67
   type = infantry
             }

  division = {
   id = { type = 28004 id = 15 }
   name = "14th Infantry Division"
   strength = 67
   type = infantry
             }

          }

############################
#############################

landunit = {
 id = { type = 28004 id = 16 }
 location = 874
 name = "5th Corps"

  division = {
   id = { type = 28004 id = 17 }
   name = "12th Infantry Division"
   strength = 67
   type = infantry
             }

  division = {
   id = { type = 28004 id = 18 }
   name = "13th Infantry Division"
   strength = 67
   type = infantry
             }

          }

############################
############################

landunit = {
 id = { type = 28004 id = 19 }
 location = 887
 name = "6th Corps"

  division = {
   id = { type = 28004 id = 20 }
   name = "5th Infantry Division"
   strength = 67
   type = infantry
             }

  division = {
   id = { type = 28004 id = 21 }
   name = "8th Infantry Division"
   strength = 67
   type = infantry
             }

  division = {
   id = { type = 28004 id = 22 }
   name = "Cavalry Division"
   strength = 67
   type = cavalry
             }

          }

########################
########################
navalunit = {
		id = { type = 28004 id = 23 }
		location = 891
		name = "1st Transport"

		division = { 
		 id = { type = 28004 id = 24 }
		 name = "1st Transport"
		 type = transport
					  }
			   }

		#############################
		#############################
		navalunit = {
		id = { type = 28500 id = 25 }
		location = 872
		name = "2st Transport"

		division = { 
		 id = { type = 28500 id = 26 }
		 name = "2st Transport"
		 type = transport
					  }
			   }

		#############################
		#############################
		convoy = { 
        id = { type = 28500 id = 27 } 
        transports = 5
        escorts = 0
        path = { 891 892 884 887 } 
		supplies = yes
        }

} 
