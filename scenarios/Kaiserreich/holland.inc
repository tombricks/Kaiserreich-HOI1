country = { 
    tag = HOL
	alignment = { x = 50 y = -10 }

	capital = 550
	

	techlevels = { 
		12000 13000 11000 14000 1000 1100 2000 5000 6000 9000 10000 8000
		8100 3000 3100 4000 4100 4200 4300
	 }
	 techapps = {
		12001 11001 11004 14001 14014 1001 6003 6004 3002 3005 4001 4101
		4102 4201 4202  4203  4204 3101 14005 1107
		4301 4302 4303
	}

	manpower = 260

	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200


    ownedprovinces =      {
	#Homeland
	 590 550 561 551
	#Indonesia
	1756 1757 1760 1767 1768 1773 1774 1772 1771 1785 1786 1791 1792 1793 1794 1780 1779 1950 1951 1956 1955 1954 1952 2029 2012 2010 2011 2030 1969 1968 1970 1971 1982 1983 1984 1985 1986 1987 2019 2028 2008 
	#Dutch Carribean
	311 283 



	 }
    controlledprovinces = {
	#Homeland
	 590 550 561 551
	#Indonesia
	1756 1757 1760 1767 1768 1773 1774 1772 1771 1785 1786 1791 1792 1793 1794 1780 1779 1950 1951 1956 1955 1954 1952 2029 2012 2010 2011 2030 1969 1968 1970 1971 1982 1983 1984 1985 1986 1987 2019 2028 2008 
	#Dutch Carribean
	311 283 



	  }
    nationalprovinces =   {
	#Homeland
	 590 550 561 551
	#Indonesia
	1756 1757 1760 1767 1768 1773 1774 1772 1771 1785 1786 1791 1792 1793 1794 1780 1779 1950 1951 1956 1955 1954 1952 2029 2012 2010 2011 2030 1969 1968 1970 1971 1982 1983 1984 1985 1986 1987 2019 2028 2008 
	#Dutch Carribean
	311 283 


	  }


	development = {
        id = { type = 14200 id = 2210 } 
		name = "Tromp"
		type = cruiser
		cost = 25
		date = { year = 1937 month = june }
	}
	transports = 150
	escorts = 10

	landunit = {
	        id = { type = 14200 id = 10 } 
			location = 550
			name = "1st Army Corps"
			division = { id = { type = 14200 id = 1 } name = "1st Division"	type = infantry	extra = artillery }
			division = { id = { type = 14200 id = 2 } name = "2nd Division"	type = infantry	}
	}
	landunit = {
	        id = { type = 14200 id = 11 } 
			location = 561
			name = "2nd Army Corps"
			division = { id = { type = 14200 id = 3 } name = "3rd Division"	type = infantry	extra = artillery }
			division = { id = { type = 14200 id = 4 } name = "4th Division"	type = infantry	}
	}
	landunit = {
	        id = { type = 14200 id = 12 } 
			location = 551
			name = "3rd Army Corps"

			division = { id = { type = 14200 id = 5 } name = "5th Division"	type = infantry	extra = artillery }
			division = { id = { type = 14200 id = 6 } name = "6th Division"	type = infantry	}
	}
	landunit = {
	        id = { type = 14200 id = 13 } 
			location = 590
			name = "4th Army Corps"

			division = { id = { type = 14200 id = 7 } name = "7th Division"	type = infantry	extra = artillery }
			division = { id = { type = 14200 id = 8 } name = "8th Division"	type = infantry	}
	}

	landunit = {
	        id = { type = 14200 id = 14 } 
			location = 1780
			name = "East Indies Army"

			division = { id = { type = 14200 id = 20 } name = "Ie Divise, Java"	type = infantry	}
			division = { id = { type = 14200 id = 21 } name = "IIe Divise, Java"	type = infantry	}
			division = { id = { type = 14200 id = 22 } name = "IIIe Divise, Java"	type = infantry	}
			
	}

	navalunit = {
	        id = { type = 14200 id = 100 } 
			location = 550
			name = "Dutch Fleet"
			division = { id = { type = 14200 id = 101 } name = "De Ruyter"	type = cruiser model = 0 }
			division = { id = { type = 14200 id = 102 } name = "Java"	type = cruiser model = 0 }
			division = { id = { type = 14200 id = 103 } name = "Sumatra"	type = cruiser model = 0 }
			division = { id = { type = 14200 id = 104 } name = "Admiralen I"	type = destroyer model = 0 }
			division = { id = { type = 14200 id = 105 } name = "Admiralen II"	type = destroyer model = 0 }
			division = { id = { type = 14200 id = 106 } name = "1st Transport" type = transport }
	}

#Supplies to Batavia
	convoy = { 
        id = { type = 14200 id = 107 } 
        transports = 30
        escorts = 0
        path = { 550 504 516 517 920 473 962 450 454 455 2151 460 470 1137 1152 1161 1326 1325 1328 1474 1476 1777 1776 1780 } 
		supplies = yes
		rubber = no
		oil = no
		steel = no
		coal = no
        } 
#Supplies to Oosthaven
	convoy = { 
        id = { type = 14200 id = 108 } 
        transports = 30
        escorts = 0
        path = { 550 504 516 517 920 473 962 450 454 455 2151 460 470 1137 1152 1161 1326 1325 1328 1474 1476 1777 1776 1774 } 
		supplies = yes
		rubber = no
		oil = no
		steel = no
		coal = no
        } 
#Supplies to Dutch Guyana
	convoy = { 
        id = { type = 14200 id = 109 } 
        transports = 20
        escorts = 5
        path = { 550 504 516 517 920 473 962 450 454 423 314 311 } 
		supplies = yes
		rubber = no
		oil = no
		steel = no
		coal = no
        }
#Supplies to Curacao
	convoy = { 
        id = { type = 14200 id = 110 } 
        transports = 15
        escorts = 0
        path = { 550 504 516 517 920 473 962 450 454 423 280 279 283 } 
		supplies = yes
		rubber = no
		oil = no
		steel = no
		coal = no
        }
} 
