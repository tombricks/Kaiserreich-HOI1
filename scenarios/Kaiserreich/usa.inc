country = { 
    tag = USA
	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200

	alignment = { x = 100 y = 0 }
	
	ai = "USA.ai"
	
	diplomacy = {
        relation = { tag = PHI access = yes }
			}

	techlevels = { 
		12000 13000 11000 11100 14000 1000 1100 1200 1300 2000 5000 6000 9000 9100 10000
		8000 8100 8200 3000 3100 4000 4100 4200 4300 7000 7100 6100 13100 5100
	 }
	 techapps = {
		12001 11001 11004 14001 14014 1001 1301 2001 2002 2003 2005 6001 6002 6003 6004
		3002 3005 4001 4101 4102 4201 4202 4203 4204 1203 9003 9006 7001 7002 13004 10002
		3101 11104 14015 6006 6102 6106 6005 6011 6101 10003 6009 5101 3006 2004 3007 13003
		6010 5003 5004 13103 6008 6104 6109 1204
		4301 4302 4303 6012
	}
	manpower = 3840


	transports = 40

    convoy = { 		  
        id = { type = 14712 id = 5434 } 
        transports = 15 
        escorts = 0 
        rubber = no 
        coal = no 
        steel = no 
        oil = yes 
        supplies = yes 
        path = { 158 95 85 15 24 22 } 
        } 

	convoy = { 
        id = { type = 14712 id = 5435 } 
        transports = 15 
        escorts = 0 
        rubber = no 
        coal = no 
        steel = no 
        oil = yes 
        supplies = yes 
        path = { 211 214 234 231 230 258 288 } 
        } 


	capital = 178
    ownedprovinces =      {
		177 178 150 129 125 124 122 182 181 183 216 212 217 211 210 184 189 121 188 187 116 135 117 112 192 193 114 113 105 106 97 104 90 191 195 194 208 196 209 204 203 87 86 91 89 94 92  
		8 155 156 158
		#usa-carribean
		288 267 
		#usa-pacific
		22 28 34 9 6 5 2 1880 1863 45 1889 17 1883 1942 

	 }
    controlledprovinces = {
		177 178 150 129 125 124 122 182 181 183 216 212 217 211 210 184 189 121 188 187 116 135 117 112 192 193 114 113 105 106 97 104 90 191 195 194 208 196 209 204 203 87 86 91 89 94 92  
		8 155 156 158
		#usa-carribean
		288 267 
		#usa-pacific
		22 28 34 9 6 5 2 1880 1863 45 1889 17 1883 1942 



	  }
    nationalprovinces =   {
		177 178 150 129 125 124 122 182 181 183 216 212 217 211 210 184 189 121 188 187 116 135 117 112 192 193 114 113 105 106 97 104 90 191 195 194 208 196 209 204 203 87 86 91 89 94 92  
		8 155 156 158
		#usa-carribean
		288 267 
		#usa-pacific
		22 28 34 9 6 5 2 1880 1863 45 1889 17 1883 1942 

	  }


	landunit = {
		location = 181
		name = "1st Division"
        id = { type = 12000 id = 1 } 
		division = {  id = { type = 12000 id = 2 } name = "1st Division"	type = infantry	}
	}
	landunit = {
		location = 125
		name = "2nd Division"
        id = { type = 12000 id = 3 } 
		division = {  id = { type = 12000 id = 4 } name = "2nd Division"	type = infantry	}
	}
	landunit = {
		location = 92
		name = "3rd Division"
        id = { type = 12000 id = 5 } 
		division = {  id = { type = 12000 id = 6 } name = "3rd Division"	type = infantry	}
	}
	landunit = {
		location = 203
		name = "1st Cavalry"
        id = { type = 12000 id = 7 } 
		division = {  id = { type = 12000 id = 8 } name = "1st Cavalry"	type = cavalry	}
	}
	landunit = {
		location = 1804
		name = "Philippine Division"
        id = { type = 12000 id = 9 } 
		division = {  id = { type = 12000 id = 10 } name = "Phillipine Division"	type = infantry	}
	}




#
#LOS  ANGELES
#
#1st Fighter Group (3 squadrons)
	airunit = {
		location = 92
        id = { type = 12000 id = 20 } 
		name="1st Fighter Group"
		division = {  id = { type = 12000 id = 21 } name = "1st Fighter Group"	type = fighter model = 0 }
	}

#
#SEATTLE
#
#2nd Bombardment Group (Heavy) (2 squadrons)
#
	airunit = {
		location = 97
        id = { type = 12000 id = 22 } 
		name="2nd Bombardment Group"
		division = {  id = { type = 12000 id = 23 } name = "2nd Bombardment Group"	type = strategic_bomber model = 0 strength = 66	}
	}

#HOUSTON
#
#3rd Bombardment Group (Light) (dive bombers) (2 squadrons)
	airunit = {
		location = 203
        id = { type = 12000 id = 24 } 
		name="3rd Bombardment Group"
		division = {  id = { type = 12000 id = 25 } name = "3rd Bombardment Group"	type = dive_bomber model = 0 strength = 66	}
	}

#
#CANAL ZONE
#
#6th Bombardment Group (Heavy) (1 squadron)
#
	airunit = {
		location = 288
        id = { type = 12000 id = 26 } 
		name="6th Bombardment Group"
		division = {  id = { type = 12000 id = 27 } name = "6th Bombardment Group"	type = tactical_bomber model = 0 strength = 30	}
	}

#SALT LAKE CITY
#
#7th Bombardment Group (Heavy) (1 squadron)
	airunit = {
		location = 91
        id = { type = 12000 id = 28 } 
		name="7th Bombardment Group"
		division = {  id = { type = 12000 id = 29 } name = "7th Bombardment Group"	type = tactical_bomber model = 0 strength = 30			}
	}

#
#NEW YORK
#
#8th Fighter Group (2 squadrons)
#9th Bombardment Group (1 squadron)
	airunit = {
		location = 124
        id = { type = 12000 id = 30 } 
		name="US Airforce"
		division = {  id = { type = 12000 id = 31 } name = "8th Fighter Group"	type = fighter model = 0 strength = 60			}
		division = {  id = { type = 12000 id = 32 } name = "9th Bombardment Group"	type = tactical_bomber model = 0 strength = 30			}
	}





#                            BBs 15 
#                            CVs 4 
#                            CA/CLs 26 
#                            DDs 106(individual ships) 
#                            SSs 49 (individual subs) 
#1936 US Navy OOB
#
#US PACIFIC FLEET-SAN DIEGO, CALIFORNIA
#
#Battleship Division 1
#Nevada, Arizona, Pennsylvania
	navalunit = {
		name = "Battleship Division 1"
        id = { type = 12000 id = 200 } 
		location = 92
		division = { id = { type = 30010 id = 197 } name = "Lexington" strength = 100 type = carrier model = 1 } 
		division = {	id = { type = 12400 id = 2001 } 	name = "Nevada"	type = battleship model = 0 }
		division = {	id = { type = 12400 id = 2002 } 	name = "Arizona"	type = battleship model = 0 }
		division = {	id = { type = 12400 id = 2003 } 	name = "Pennsylvania"	type = battleship model = 0 }
	}
#
#Battleship Division 2
#Oklahoma, Tennessee, California
	navalunit = {
		name = "Battleship Division 2"
        id = { type = 12000 id = 201 } 
		location = 92
		division = { id = { type = 30010 id = 198 } name = "Saratoga" strength = 100 type = carrier model = 0 } 
		division = {	id = { type = 12400 id = 2004 } 	name = "Oklahoma"	type = battleship model = 0 }
		division = {	id = { type = 12400 id = 2005 } 	name = "Tennessee"	type = battleship model = 0 }
		division = {	id = { type = 12400 id = 2006 } 	name = "California"	type = battleship model = 0 }
	}
#
#Battleship Division 4
#Colorado, West Virginia, Maryland
	navalunit = {
		name = "Battleship Division 4"
        id = { type = 12000 id = 202 } 
		location = 92
		division = {	id = { type = 12400 id = 2007 } 	name = "Colorado"	type = battleship model = 0 }
		division = {	id = { type = 12400 id = 2008 } 	name = "West Virginia"	type = battleship model = 0 }
		division = {	id = { type = 12400 id = 2009 } 	name = "Maryland"	type = battleship model = 0 }
	}
#
#Cruiser Division 3
#Richmond, Trenton, Concord
	navalunit = {
		name = "Cruiser Division 3"
        id = { type = 12000 id = 203 } 
		location = 92
		division = {	id = { type = 12400 id = 2011 } 	name = "Richmond"	type = cruiser model = 1 }
		division = {	id = { type = 12400 id = 2012 } 	name = "Trenton"	type = cruiser model = 1 }
		division = {	id = { type = 12400 id = 2013 } 	name = "Concord"	type = cruiser model = 1 }
	}
#
#Cruiser Division 9
#Phoenix, Boise, Honolulu, St. Louis
	navalunit = {
		name = "Cruiser Division 9"
        id = { type = 12000 id = 204 } 
		location = 92
		division = {	id = { type = 12400 id = 2021 } 	name = "Phoenix"	type = cruiser model = 1 }
		division = {	id = { type = 12400 id = 2022 } 	name = "Boise"	type = cruiser model = 1 }
		division = {	id = { type = 12400 id = 2033 } 	name = "Honolulu"	type = cruiser model = 1 }
		division = {	id = { type = 12400 id = 2034 } 	name = "St.Louis"	type = cruiser model = 1 }
	}
#
#Cruiser Division 4
#Pensacola, Salt Lake City, Chicago, Indianapolis
	navalunit = {
		name = "Cruiser Division 4"
        id = { type = 12000 id = 205 } 
		location = 92
		division = {	id = { type = 12400 id = 2061 } 	name = "Pensacola"	type = cruiser model = 1 }
		division = {	id = { type = 12400 id = 2062 } 	name = "Salt Lake City"	type = cruiser model = 1 }
		division = {	id = { type = 12400 id = 2063 } 	name = "Chicago"	type = cruiser model = 1 }
		division = {	id = { type = 12400 id = 2064 } 	name = "Indianapolis"	type = cruiser model = 1 }
	}
#
#Cruiser Division 5
#Northampton, Chester, Louisville, Portland
	navalunit = {
		name = "Cruiser Division 5"
        id = { type = 12000 id = 206 } 
		location = 92
		division = {	id = { type = 12400 id = 2041 } 	name = "Northampton"	type = cruiser model = 1 }
		division = {	id = { type = 12400 id = 2042 } 	name = "Chester"	type = cruiser model = 1 }
		division = {	id = { type = 12400 id = 2043 } 	name = "Louisville"	type = cruiser model = 1 }
		division = {	id = { type = 12400 id = 2044 } 	name = "Portland"	type = cruiser model = 1 }
	}
#
#Cruiser Division 6
#New Orleans, Astoria, Minneapolis, San Francisco
	navalunit = {
		name = "Cruiser Division 6"
        id = { type = 12000 id = 207 } 
		location = 92
		division = {	id = { type = 12400 id = 2051 } 	name = "New Orleans"	type = cruiser model = 1 }
		division = {	id = { type = 12400 id = 2052 } 	name = "Astoria"	type = cruiser model = 1 }
		division = {	id = { type = 12400 id = 2053 } 	name = "Minneapolis"	type = cruiser model = 1 }
		division = {	id = { type = 12400 id = 2054 } 	name = "San Fransisco"	type = cruiser model = 1 }
	}
#
#63 destoyers.  12 destroyer units..
#
	navalunit = {
		name = "Pacific Destroyers"
        id = { type = 12000 id = 2207 } 
		location = 92
		division = {	id = { type = 12400 id = 2301 } 	name = "1st Pac. Destroyers"	type = destroyer model = 0 }
		division = {	id = { type = 12400 id = 2302 } 	name = "2nd Pac. Destroyers"	type = destroyer model = 0 }
		division = {	id = { type = 12400 id = 2303 } 	name = "3rd Pac. Destroyers"	type = destroyer model = 0 }
		division = {	id = { type = 12400 id = 2304 } 	name = "4th Pac. Destroyers"	type = destroyer model = 0 }
		division = {	id = { type = 12400 id = 2305 } 	name = "5th Pac. Destroyers"	type = destroyer model = 0 }
		division = {	id = { type = 12400 id = 2306 } 	name = "6th Pac. Destroyers"	type = destroyer model = 0 }
		division = {	id = { type = 12400 id = 2307 } 	name = "7th Pac. Destroyers"	type = destroyer model = 0 }
		division = {	id = { type = 12400 id = 2308 } 	name = "8th Pac. Destroyers"	type = destroyer model = 0 }
		division = {	id = { type = 12400 id = 2309 } 	name = "9th Pac. Destroyers"	type = destroyer model = 0 }
		division = {	id = { type = 12400 id = 2310 } 	name = "10th Pac. Destroyers"	type = destroyer model = 0 }
		division = {	id = { type = 12400 id = 2311 } 	name = "11th Pac. Destroyers"	type = destroyer model = 0 }
		division = {	id = { type = 12400 id = 2312 } 	name = "12th Pac. Destroyers"	type = destroyer model = 0 }
		}

#
# 24 Submarines = 5 submarine units
#
	navalunit = {
		name = "Pacific Submarines"
        id = { type = 12000 id = 2208 } 
		location = 92
		division = {	id = { type = 12400 id = 2331 } 	name = "1st Pac. Submarines"	type = submarine model = 0 }
		division = {	id = { type = 12400 id = 2332 } 	name = "2nd Pac. Submarines"	type = submarine model = 0 }
		division = {	id = { type = 12400 id = 2333 } 	name = "3rd Pac. Submarines"	type = submarine model = 0 }
		division = {	id = { type = 12400 id = 2334 } 	name = "4th Pac. Submarines"	type = submarine model = 0 }
		division = {	id = { type = 12400 id = 2335 } 	name = "5th Pac. Submarines"	type = submarine model = 0 }
		}



navalunit = { location = 1978  id = { type = 12000 id = 3004 } name = "Asiatic Fleet"
division = { id = { type = 12000 id = 3005 } name = "3 Destroyer Division" strength = 100 type = destroyer model = 0 } # 
division = { id = { type = 12000 id = 3006 } name = "13 Destroyer Division" strength = 100 type = destroyer model = 0 } # 
division = { id = { type = 12000 id = 3007 } name = "33 Destroyer Division" strength = 100 type = destroyer model = 0 } # 
division = { id = { type = 12000 id = 3008 } name = "4 Submarine Division" strength = 100 type = submarine model = 0 } # 
division = { id = { type = 12000 id = 3009 } name = "10 Submarine Division" strength = 100 type = submarine model = 0 } # 
}
navalunit = { location = 1978  id = { type = 12000 id = 13004 } name = "14 Submarine Division"
division = { id = { type = 12000 id = 3012 } name = "14 Submarine Division" strength = 100 type = submarine model = 0 } # 
}
navalunit = { location = 106  id = { type = 12000 id = 3014 } name = "Seattle Fleet"
division = { id = { type = 12000 id = 3015 } name = "Marblehead" strength = 100 type = cruiser model = 0 } # 
division = { id = { type = 12000 id = 3016 } name = "5 Destroyer Division" strength = 100 type = destroyer model = 0 } # 
}
navalunit = { location = 212  id = { type = 12000 id = 3018 } name = "Columbia Fleet"
division = { id = { type = 12000 id = 3019 } name = "Houston" strength = 100 type = cruiser model = 0 } # 
division = { id = { type = 12000 id = 3020 } name = "5 Submarine Division" strength = 100 type = submarine model = 0 } # 
}
navalunit = { location = 288   id = { type = 12000 id = 3022 } name = "Carribean Fleet"
division = { id = { type = 12000 id = 3023 } name = "21 Destroyer Division" strength = 100 type = destroyer model = 0 } # 
division = { id = { type = 12000 id = 3024 } name = "6 Submarine Division" strength = 100 type = submarine model = 0 } # 
}
navalunit = { location = 181   id = { type = 12000 id = 3026 } name = "Battleship Division 3"
division = { id = { type = 12000 id = 3027 } name = "New Mexico" strength = 100 type = battleship model = 0 } # 
division = { id = { type = 12000 id = 3028 } name = "Mississippi" strength = 100 type = battleship model = 0 } # 
division = { id = { type = 12000 id = 3029 } name = "Idaho" strength = 100 type = battleship model = 0 } # 
}
navalunit = { location = 181   id = { type = 12000 id = 3031 } name = "Battleship Division 5"
division = { id = { type = 12000 id = 3032 } name = "Arkansas" strength = 100 type = battleship model = 0 } # 
division = { id = { type = 12000 id = 3033 } name = "New York" strength = 100 type = battleship model = 0 } # 
division = { id = { type = 12000 id = 3034 } name = "Texas" strength = 100 type = battleship model = 0 } # 
}
navalunit = { location = 181   id = { type = 12000 id = 3036 } name = "Battleship Division 6"
division = { id = { type = 12000 id = 3037 } name = "Washington" strength = 100 type = battleship model = 0 } # 
}
navalunit = { location = 181   id = { type = 12000 id = 3039 } name = "Cruiser Division 2"
division = { id = { type = 12000 id = 3040 } name = "Omaha" strength = 100 type = cruiser model = 1 } # 
division = { id = { type = 12000 id = 3041 } name = "Milwaukee" strength = 100 type = cruiser model = 1 } # 
division = { id = { type = 12000 id = 3042 } name = "Cincinnati" strength = 100 type = cruiser model = 1 } # 
division = { id = { type = 12000 id = 3043 } name = "Memphis" strength = 100 type = cruiser model = 1 } # 
}
navalunit = { location = 181  id = { type = 12000 id = 3045 } name = "Cruiser Division 7"
division = { id = { type = 12000 id = 3046 } name = "Augusta" strength = 100 type = cruiser model = 1 } # 
division = { id = { type = 12000 id = 3047 } name = "Tuscaloosa" strength = 100 type = cruiser model = 1 } # 
division = { id = { type = 12000 id = 3048 } name = "Quincy" strength = 100 type = cruiser model = 1 } # 
}



navalunit = { location = 181  id = { type = 30010 id = 183 } name = "Ranger Taskforce"
division = { id = { type = 30010 id = 184 } name = "Ranger" strength = 100 type = carrier model = 0 } # 
division = { id = { type = 30010 id = 185 } name = "1st Atl  Destroyers" strength = 100 type = destroyer model = 0 } # 
division = { id = { type = 30010 id = 186 } name = "2nd Atl  Destroyers" strength = 100 type = destroyer model = 0 } # 
division = { id = { type = 30010 id = 187 } name = "3rd Atl  Destroyers" strength = 100 type = destroyer model = 0 } # 
}
navalunit = { location = 181   id = { type = 30010 id = 189 } name = "Yorktown Taskforce"
division = { id = { type = 30010 id = 190 } name = "Yorktown" strength = 100 type = carrier model = 1 } # 
division = { id = { type = 30010 id = 191 } name = "4th Atl  Destroyers" strength = 100 type = destroyer model = 0 } # 
division = { id = { type = 30010 id = 192 } name = "5th Atl  Destroyers" strength = 100 type = destroyer model = 0 } # 
division = { id = { type = 30010 id = 193 } name = "6th Atl  Destroyers" strength = 100 type = destroyer model = 0 } # 
}
navalunit = { location = 181 id = { type = 30010 id = 195 } name = "Atl Submarine Division"
division = { id = { type = 30010 id = 196 } name = "Atl Submarine Division" strength = 100 type = submarine model = 0 } # 
}







} 

