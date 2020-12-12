

country = { 
    tag = TUR
	alignment = { x = 30 y = -30 }

	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200

	capital = 1213

	techlevels = { 
		12000 13000 11000 14000 1000 1100 2000 5000 6000 9000 10000 8000
		8100 3000 3100 4000 4100 4200 4300
	 }
	 techapps = {
		12001 11001 11004 14001 14014 1001 6003 6004 3002 3005 4001 4101
		4102 4201 4202  4203  4204 3101 14005 1107
		4301 4302 4303
	}

	manpower = 490

    ownedprovinces =      {
		 873 877 879 878 882 1210 1214 881 1213 1212 1215 1262 1263 1264 1261 1217 1218 
		1216 1265 1266 
	 }
    controlledprovinces = {
		873 877 879 878 882 1210 1214 881 1213 1212 1215 1262 1263 1264 1261 1217 1218 
		1216 1265 1266 
	  }
    nationalprovinces =   {
		873 877 879 878 882 1210 1214 881 1213 1212 1215 1262 1263 1264 1261 1217 1218 
		1216 1265 1266 
	  }


######Turkey `36 ######

navalunit = {
		location = 873
                                name = "Turkish Fleet"
                                id = { type = 25630 id = 1 } 

        division = { 
                                 id = { type = 25631 id = 1 }
                 	name = "Yavuz"
                  	type = cruiser
				model = 0
                 	}


		#These are CL's#
         division = { 
                                id = { type = 25631 id = 2 }
                	name = "Midili"
                	type = cruiser 
			model = 0                                 
			seadefence = 4 seaattack = 4
                      	}

           division = { 
                                id = { type = 25631 id = 3 }
                   	name = "Peyk-I"	
                                type = cruiser
					model = 0                                 
					seadefence = 4 seaattack = 4
                	}
		

          division = { 
                                id = { type = 25631 id = 4 }
                       	name = "Submarine Flotilla"
                      	type = submarine
				model = 0
                                strength = 80
                 	}

          division = { 
                                id = { type = 25631 id = 5 } 
                      	name = "Destroyer Flotilla"
                  	type = destroyer
				model = 0
                                strength = 80 
                                }
            }



        landunit = {
		location = 873
		name = "I. Army Corps"
	              id = { type = 25632 id = 1 }
 
                              division = {
                              id = { type = 25633 id = 1 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "1./2. Division"
		}

		division = {
                                id = { type = 25633 id = 2 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "3./4. Division"
		}
}

        landunit = {
		location = 877
		name = "II. Army Corps"
	              id = { type = 25632 id = 2 }
 
                              division = {
                              id = { type = 25633 id = 3 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "5./6. Division"
		}
}

        landunit = {
		location = 879
		name = "III. Army Corps"
	              id = { type = 25632 id = 3 }
 
                              division = {
                              id = { type = 25633 id = 4 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "7./8. Division"
		}

}

        landunit = {
		location = 1213
		name = "IV. Army Corps"
	              id = { type = 25632 id = 4 }
 
                              division = {
                              id = { type = 25633 id = 5 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "9./10. Division"
		}

}

        landunit = {
		location = 1262
		name = "V. Army Corps"
	              id = { type = 25632 id = 5 }
 
                              division = {
                              id = { type = 25633 id = 6 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "11./12. Division"
		}

}

        landunit = {
		location = 1264
		name = "VI. Army Corps"
	              id = { type = 25632 id = 6 }
 
                              division = {
                              id = { type = 25633 id = 7 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "13./14. Division"
		}
}

        landunit = {
		location = 1210
		name = "VII. Army Corps"
	              id = { type = 25632 id = 7 }
 
                              division = {
                              id = { type = 25633 id = 8 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "15./16. Division"
		}
}


        landunit = {
		location = 882
		name = "VIII. Army Corps"
	              id = { type = 25632 id = 8 }
 
                              division = {
                              id = { type = 25633 id = 9 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "17./18. Division"
		}
}

        landunit = {
		location = 881
		name = "IX. Army Corps"
	              id = { type = 25632 id = 9 }
 
                              division = {
                              id = { type = 25633 id = 10 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "19./20. Division"
		}
}

        landunit = {
		location = 1263
		name = "Mountain Corps"
	              id = { type = 25632 id = 10 }
 
                              division = {
                              id = { type = 25633 id = 11 } 
			type = bergsjaeger
			strength  = 80
			organisation = 30
			name = "Mountain Brigades"
		}
}
        landunit = {
		location = 1218
		name = "Cavalry Corps"
	              id = { type = 25632 id = 11 }
 
                              division = {
                              id = { type = 25633 id = 12 } 
			type = cavalry
			strength  = 100
			organisation = 30
			name = "1./2. Division"
		}
                              division = {
                              id = { type = 25633 id = 13 } 
			type = cavalry
			strength  = 100
			organisation = 30
			name = "3./4. Division"
		}
                              division = {
                              id = { type = 25633 id = 14 } 
			type = cavalry
			strength  = 50
			organisation = 30
			name = "5. Division"
		}
}

        airunit = {
		location = 1213
		name = "I/Turk Hava Kuvvetleri"
	               id = { type = 25634 id = 1 }
 
                              division = {
                              id = { type = 25635 id = 1 } 
			type = fighter
			model = 0
			strength  = 48
			organisation = 30
			name = "1. Fighter Division "  
		}
#mainly polish and various other fighters#
                              division = {
                              id = { type = 25635 id = 2 } 
			type = tactical_bomber
			model = 0
			strength  = 52
			organisation = 30
			name = "1. Bomber Division"
		}
# various assortment of "crap" planes
	}
} 
