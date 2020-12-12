country = {
	tag = JAP
	alignment = { x = 30 y = -80 }
	ai = "Japan.ai"

	capital = 1822

	diplomacy = {
		relation = { tag = MAN access = yes }
	}
	manpower = 2200

	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200


	techlevels = {
		12000 13000 13100 13200 11000 11100 11200 14000 1000 1100 1200 1300 2000 2100 5000 5100
		6000 6100 9000 9100 10000 10100 7000 7100 8000 8100 8200 3000 3100 4000 4100 4200 4300
		5200 5300 6200
	}
	techapps = {
		12001 13001 13002 13003 13004 13005 13006 13103 13201 11001 11002 11003 11004 11104 11102 14001 14005 14012 14014 14015 14016 1001 1201 1301
		2001 2002 2003 2005 2006 2101 5101 6001 6002 6003 6004 6006 6102 6103 6106 6107 6108 6109
		9001 10002 3002 3005 3006 3007 3101 4001 4101 4102 4201 4202 4203 4204 12004
		13003 13006 1203 5202 6007 6010 5001 5002 5003 5004 9004 13103 1103 1106 5102
		5103 5302 6201 6202 6205 6206
		4301 4302 4303 6012
	}



	transports = 400
	escorts = 20

	# Resources from Korea
	convoy = {
		id = { type = 28047 id = 5359 }
		transports = 40
		escorts = 10
		rubber = yes
		coal = yes
		steel = yes
		oil = yes
		supplies = no
		path = { 1676 1686 1682 }
	}
	#Resources from Taiwan
	convoy = {
		id = { type = 28047 id = 5363 }
		transports = 10
		escorts = 0
		rubber = yes
		coal = yes
		steel = yes
		oil = yes
		supplies = no
		path = { 1716 1720 1686 1682 }
	}

	# Supplies to Korea
	convoy = {
		id = { type = 28047 id = 6000 }
		transports = 20
		escorts = 2
		rubber = no
		coal = no
		steel = no
		oil = yes
		supplies = yes
		path = { 1682 1686 1676 }
	}


	ownedprovinces =      {
		1818 1819 1820 1821 1822 1823 1824 1825
		1682 1683 1684 1681 1677 1676 1678 1675 1673 1674 1671 1672 1668 1664 1665 1834 1833 1832 1835 1839 1841
		1666 1688 1716 1812 1894 1937 1998 2002 2004 1899 2035 1903  1919
		1909 1915 1836 1561 1923

		# Western Manchuria
		1554 1555 1556 1558 1623 1627
	}
	controlledprovinces = {
		1818 1819 1820 1821 1822 1823 1824 1825
		1682 1683 1684 1681 1677 1676 1678 1675 1673 1674 1671 1672 1668 1664 1665 1834 1833 1832 1835 1839 1841
		1666 1688 1716 1812 1894 1937 1998 2002 2004 1899 2035 1903  1919
		1909 1915 1836 1561 1923
		# Western Manchuria
		1554 1555 1556 1558 1623 1627
	}
	nationalprovinces =   {
		1818 1819 1820 1821 1822 1823 1824 1825
		1682 1683 1684 1681 1677 1676 1678 1675 1673 1674 1671 1672 1668 1664 1665 1834 1833 1832 1835 1839 1841
		1666 1688 1716 1812 1894 1937 1998 2002 2004 1899 2035 1903 1919
		1909 1915 1836 1561 1923 1942

	}


	landunit = {
		id = { type = 28047 id = 18 }
		name = "Imperial Guard"
		location = 1822

		division = {
			id = { type = 28047 id = 20 }
			name = "Imperial Guard Motorized Division"
			strength = 100
			type = motorized
			extra = artillery
		}
		division = {
			id = { type = 28047 id = 222220 }
			name = "Imperial Guard Cavalry Division"
			strength = 100
			type = cavalry
		}
	}

	landunit = {
		id = { type = 28047 id = 125 }
		name = "1st Division"
		location = 1561 #Sengo IRL

		division = {
			id = { type = 28047 id = 120 }
			name = "1st Mechanized Division"
			strength = 100
			type = mechanized
			extra = engineer
		}
		division = {
			id = { type = 28047 id = 121 }
			name = "1st Cavalry Division"
			strength = 100
			type = cavalry
		}
	}

	landunit = {
		id = { type = 28047 id = 122 }
		name = "2nd Division"
		location = 1558

		division = {
			id = { type = 28047 id = 123 }
			name = "2nd Motorized Division"
			strength = 100
			type = motorized
			extra = artillery
		}
		division = {
			id = { type = 28047 id = 124 }
			name = "2nd Cavalry Division"
			strength = 100
			type = cavalry
		}
	}

	landunit = {
		id = { type = 28047 id = 126 }
		name = "3rd Division"
		location = 1823

		division = {
			id = { type = 28047 id = 127 }
			name = "3rd Infantry Division"
			strength = 100
			type = infantry
			extra = engineer
			extra = artillery
		}
		division = {
			id = { type = 28047 id = 128 }
			name = "3rd Cavalry Division"
			strength = 100
			type = cavalry
		}
	}



	landunit = {
		id = { type = 28047 id = 129 }
		name = "4th Division"
		location = 1665

		division = {
			id = { type = 28047 id = 130 }
			name = "4th Infantry Division"
			strength = 100
			type = infantry
			extra = artillery
		}
	}

	landunit = {
		id = { type = 28047 id = 131 }
		name = "5th Division"
		location = 1682

		division = {
			id = { type = 28047 id = 132 }
			name = "5th Infantry Division"
			strength = 100
			type = infantry
			extra = engineer
		}
	}

	landunit = {
		id = { type = 28047 id = 133 }
		name = "6th Division"
		location = 1681

		division = {
			id = { type = 28047 id = 134 }
			name = "6th Infantry Division"
			strength = 100
			type = infantry
			extra = engineer
		}
	}

	landunit = {
		id = { type = 28047 id = 135 }
		name = "7th Division"
		location = 1833

		division = {
			id = { type = 28047 id = 136 }
			name = "7th Infantry Division"
			strength = 100
			type = infantry
			extra = artillery
		}

		division = {
			id = { type = 28047 id = 137 }
			name = "7th Infantry Division"
			strength = 100
			type = cavalry
		}
	}


	landunit = {
		id = { type = 28047 id = 138 }
		name = "8th Division"
		location = 1818

		division = {
			id = { type = 28047 id = 139 }
			name = "8th Infantry Division"
			strength = 100
			type = infantry
			extra = artillery
		}

		division = {
			id = { type = 28047 id = 140 }
			name = "8th Infantry Division"
			strength = 100
			type = cavalry
		}
	}


	landunit = {
		id = { type = 28047 id = 141 }
		name = "9th Division"
		location = 1824

		division = {
			id = { type = 28047 id = 142 }
			name = "9th Infantry Division"
			strength = 100
			type = infantry
			extra = artillery
		}
	}


	landunit = {
		id = { type = 28047 id = 143 }
		name = "10th Division"
		location = 1682

		division = {
			id = { type = 28047 id = 144 }
			name = "10th Infantry Division"
			strength = 100
			type = infantry
			extra = artillery
		}
	}
	landunit = {
		id = { type = 28047 id = 145 }
		name = "11th Division"
		location = 1683

		division = {
			id = { type = 28047 id = 146 }
			name = "11th Infantry Division"
			strength = 100
			type = infantry
			extra = artillery
		}
	}

	landunit = {
		id = { type = 28047 id = 147 }
		name = "12th Division"
		location = 1627

		division = {
			id = { type = 28047 id = 148 }
			name = "12th Mechanized Division"
			strength = 100
			type = mechanized
			extra = antiair
		}
	}

	landunit = {
		id = { type = 28047 id = 149 }
		name = "14th Division"
		location = 1820

		division = {
			id = { type = 28047 id = 150 }
			name = "14th Infantry Division"
			strength = 100
			type = infantry
			extra = artillery
		}
	}

	landunit = {
		id = { type = 28047 id = 151 }
		name = "16th Division"
		location = 1825

		division = {
			id = { type = 28047 id = 152 }
			name = "16th Infantry Division"
			strength = 100
			type = infantry
			extra = artillery
		}
	}

	landunit = {
		id = { type = 28047 id = 153 }
		name = "19th Division"
		location = 1676

		division = {
			id = { type = 28047 id = 154 }
			name = "19th Infantry Division"
			strength = 100
			type = infantry
			extra = artillery
		}
	}

	landunit = {
		id = { type = 28047 id = 1155 }
		name = "20th Division"
		location = 1674

		division = {
			id = { type = 28047 id = 156 }
			name = "20th Infantry Division"
			strength = 100
			type = infantry
			extra = antiair
		}
		division = {
			id = { type = 28047 id = 157 }
			name = "20th Cavalry Division"
			strength = 100
			type = cavalry
		}
	}


	landunit = {
		id = { type = 28047 id = 158 }
		name = "Taiwan Garrison"
		location = 1716

		division = {
			id = { type = 28047 id = 159 }
			name = "Taiwan Garrison"
			strength = 100
			type = infantry
			extra = antiair
		}
	}


	landunit = {
		id = { type = 28047 id = 160 }
		name = "1st Independent Brigade"
		location = 1665 #IRL ?

		division = {
			id = { type = 28047 id = 161 }
			name = "1st Independent Brigade"
			strength = 50
			type = infantry
		}
	}

	landunit = {
		id = { type = 28047 id = 162 }
		name = "2nd Independent Brigade"
		location =  1665 #IRL ?

		division = {
			id = { type = 28047 id = 163 }
			name = "2nd Independent Brigade"
			strength = 50
			type = infantry
		}
	}

	landunit = {
		id = { type = 28047 id = 164 }
		name = "1st Independent Garrison"
		location = 1558

		division = {
			id = { type = 28047 id = 165 }
			name = "1st Independent Garrison"
			strength = 25
			type = infantry
		}
	}

	landunit = {
		id = { type = 28047 id = 200 }
		name = "2nd Independent Garrison"
		location = 1623

		division = {
			id = { type = 28047 id = 201 }
			name = "2nd Independent Garrison"
			strength = 25
			type = infantry
		}
	}

	landunit = {
		id = { type = 28047 id = 202 }
		name = "3rd Independent Garrison"
		location = 1556

		division = {
			id = { type = 28047 id = 203 }
			name = "3rd Independent Garrison"
			strength = 25
			type = infantry
		}
	}

	landunit = {
		id = { type = 28047 id = 204 }
		name = "4th Independent Garrison"
		location = 1555

		division = {
			id = { type = 28047 id = 205 }
			name = "4th Independent Garrison"
			strength = 25
			type = infantry
		}
	}

	landunit = {
		id = { type = 28047 id = 206 }
		name = "5th Independent Garrison"
		location = 1558

		division = {
			id = { type = 28047 id = 207 }
			name = "5th Independent Garrison"
			strength = 25
			type = infantry
		}
	}

	landunit = {
		id = { type = 28047 id = 208 }
		name = "1st Cavalry Group"
		location = 1554

		division = {
			id = { type = 28047 id = 209 }
			name = "1st Hailar Cavalry Division"
			strength = 100
			type = Cavalry
			extra = artillery
		}
		division = {
			id = { type = 28047 id = 210 }
			name = "1st Hailar Mechanized Division"
			strength = 100
			type = mechanized
		}
	}


	landunit = {
		id = { type = 28047 id = 211 }
		name = "China Garrison Brigade"
		location = 1623

		division = {
			id = { type = 28047 id = 212 }
			name = "China Garrison"
			strength = 50
			type = Cavalry
			extra = artillery
		}
	}
	
	#######################################################################
	# Air UNITS!
	#######################################################################

	airunit =
	{
		location = 1821
		id = { type = 13016 id = 22186 }
		name = "1st/2nd/4th Air Regiment"

		division = { id = { type = 13016 id = 22187 } name = "1st/2nd/4th Air Regiment" type = tactical_bomber model = 0 }
	}

	airunit =
	{
		location = 1823
		id = { type = 13016 id = 2186 }
		name = "3rd/5th/7th Air Regiment"
		division = { id = { type = 13016 id = 2187 } name = "3rd/5th/7th Air Regiment"	type = tactical_bomber	model = 0 }
	}

	airunit =
	{
		location = 2004
		id = { type = 13016 id = 1786 }
		name = "6th/8th/14th Air Regiment"

		division = { id = { type = 13016 id = 1787 } name = "6th/8th/14th Air Regiment" type = tactical_bomber	model = 0 }
	}
	airunit =
	{
		location = 1665
		id = { type = 13016 id = 1886 }
		name = "9th/10th/12th Air Regiment"

		division = { id = { type = 13016 id = 1887 } name = "9th/10th/12th Air Regiment" type = tactical_bomber model = 0 }
	}
	airunit =
	{
		location = 1558
		id = { type = 13016 id = 9186 }
		name = "11th/15th/16th Air Regiment"

		division = { id = { type = 13016 id = 9187 }	name = "11th/15th Air Regiment"	type = tactical_bomber	model = 0 }
	}


	airunit =
	{
		location = 1682
		id = { type = 13016 id = 49186 }
		name = "1st Naval Air"

		division = { id = { type = 13016 id = 29187 }	name = "1st Nav. Division"	type = naval_bomber	model = 0 }
	}

	airunit =
	{
		location = 1822
		id = { type = 13016 id = 59186 }
		name = "2nd Naval Air"

		division = { id = { type = 13016 id = 329187 }	name = "2nd Nav. Division"	type = torpedo_plane	model = 0 }
	}





	########################
	###JAPANESE NAVAL OOB###
	##########1936##########
	########################

	navalunit = {
		id = { type = 18222 id = 1 }
		name = "1st BB Fleet"
		location = 1825

		division = { id = { type = 18222 id = 2 } name = "Kongo" type = battleship model = 1 }
		division = { id = { type = 18222 id = 4 } name = "Hiei" type = battleship model = 2 }
		division = { id = { type = 18222 id = 6 } name = "Haruna" type = battleship model = 2 }
	}

	navalunit = {
		id = { type = 18222 id = 7 }
		name = "2nd BB Fleet"
		location = 1825

		division = { id = { type = 18222 id = 8 } name = "Kirishima" type = battleship model = 1 }
		division = { id = { type = 18222 id = 10 } name = "Fuso" type = battleship model = 1 }
		division = { id = { type = 18222 id = 12 } name = "Yamashiro" type = battleship model = 1 }
	}

	navalunit = {
		id = { type = 18222 id = 13 }
		name = "3rd BB Fleet"
		location = 1822

		division = { id = { type = 18222 id = 14 } name = "Iie" type = battleship model = 1 }
		division = { id = { type = 18222 id = 16 } name = "Hyuga" type = battleship model = 2 }
		division = { id = { type = 18222 id = 18 } name = "Nagato" type = battleship model = 2 }
	}

	navalunit = {
		id = { type = 18222 id = 19 }
		name = "Mutsu"
		location = 1674

		division = { id = { type = 18222 id = 20 } name = "Mutsu" type = battleship model = 1 }
	}

	navalunit = {
		id = { type = 18222 id = 21 }
		name = "1st CA Fleet"
		location = 1825

		division = { id = { type = 18222 id = 22 } name = "Tatsuta" type = cruiser model = 0 seaattack = 4 seadefence = 4 }
		division = { id = { type = 18222 id = 24 } name = "Kuma" type = cruiser model = 0 seaattack = 4 seadefence = 4 }
		division = { id = { type = 18222 id = 27 } name = "Tama" type = cruiser model = 0 seaattack = 4 seadefence = 4 }
	}

	navalunit = {
		id = { type = 18222 id = 28 }
		name = "2nd CA Fleet"
		location = 1822

		division = { id = { type = 18222 id = 29 } name = "Kitakami" type = cruiser model = 0 seaattack = 4 seadefence = 4 }
		division = { id = { type = 18222 id = 31 } name = "Kiso" type = cruiser model = 0 seaattack = 4 seadefence = 4 }
		division = { id = { type = 18222 id = 33 } name = "Oi" type = cruiser model = 0 seaattack = 4 seadefence = 4 }

		division = { id = { type = 18222 id = 35 } name = "Nagara" type = cruiser model = 0 seaattack = 4 seadefence = 4 }
	}

	navalunit = {
		id = { type = 18222 id = 36 }
		name = "3rd CA Fleet"
		location = 1825

		division = { id = { type = 18222 id = 37 } name = "Natori" type = cruiser model = 0 seaattack = 4 seadefence = 4 }
		division = { id = { type = 18222 id = 39 } name = "Kinu" type = cruiser model = 0 seaattack = 4 seadefence = 4 }
		division = { id = { type = 18222 id = 41 } name = "Yura" type = cruiser model = 0 seaattack = 4 seadefence = 4 }
	}

	navalunit = {
		id = { type = 18222 id = 42 }
		name = "4th CA Fleet"
		location = 1674

		division = { id = { type = 18222 id = 43 } name = "Yubari" type = cruiser model = 1 seaattack = 4 seadefence = 4 }
		division = { id = { type = 18222 id = 45 } name = "Isuzu" type = cruiser model = 1 seaattack = 4 seadefence = 4 }
		division = { id = { type = 18222 id = 47 } name = "Sendai" type = cruiser model = 1 seaattack = 4 seadefence = 4 }
		division = { id = { type = 18222 id = 49 } name = "Abukuma" type = cruiser model = 1 seaattack = 4 seadefence = 4 }
		division = { id = { type = 18222 id = 51 } name = "Jintsu" type = cruiser model = 1 seaattack = 4 seadefence = 4 }
	}

	navalunit = {
		id = { type = 18222 id = 52 }
		name = "5th CA Fleet"
		location = 1825

		division = { id = { type = 18222 id = 53 } name = "Naka" type = cruiser model = 1 seaattack = 4 seadefence = 4 }
		division = { id = { type = 18222 id = 55 } name = "Kako" type = cruiser model = 1 }
		division = { id = { type = 18222 id = 57 } name = "Aoba" type = cruiser model = 1 }
		division = { id = { type = 18222 id = 59 } name = "Kinugasa" type = cruiser model = 1 }
		division = { id = { type = 18222 id = 61 } name = "Nachi" type = cruiser model = 1 }
		division = { id = { type = 18222 id = 63 } name = "Haguro" type = cruiser model = 1 }
	}

	navalunit = {
		id = { type = 18222 id = 64 }
		name = "6th CA Fleet"
		location = 1822

		division = { id = { type = 18222 id = 65 } name = "Myoko" type = cruiser model = 1 }
		division = { id = { type = 18222 id = 67 } name = "Ashigara" type = cruiser model = 1 }
		division = { id = { type = 18222 id = 69 } name = "Atago" type = cruiser model = 1 }
		division = { id = { type = 18222 id = 71 } name = "Takao" type = cruiser model = 1 }
		division = { id = { type = 18222 id = 73 } name = "Chokai" type = cruiser model = 0 }
	}

	navalunit = {
		id = { type = 18222 id = 74 }
		name = "7th CA Fleet"
		location = 1674

		division = { id = { type = 18222 id = 75 } name = "Maya" type = cruiser model = 0  }
		division = { id = { type = 18222 id = 77 } name = "Mikuma" type = cruiser model = 0  }
		division = { id = { type = 18222 id = 79 } name = "Mogami" type = cruiser model = 0  }
	}

	navalunit = {
		id = { type = 18222 id = 80 }
		name = "1st Carrier Group"
		location = 1825

		division = { id = { type = 18222 id = 81 } name = "Hosho" type = carrier model = 0  }
	}

	navalunit = {
		id = { type = 18222 id = 82 }
		name = "2nd Carrier Group"
		location = 1825

		division = { id = { type = 18222 id = 83 } name = "Akagi" type = carrier model = 1  }
	}

	navalunit = {
		id = { type = 18222 id = 84 }
		name = "3rd Carrier Group"
		location = 1822

		division = { id = { type = 18222 id = 85 } name = "Kaga" type = carrier model = 1 }
	}

	navalunit = {
		id = { type = 18222 id = 86 }
		name = "4th Carrier Group"
		location = 1674

		division = { id = { type = 18222 id = 87 } name = "Ryujo" type = carrier model = 0 }
	}

	navalunit = {
		id = { type = 18222 id = 88 }
		name = "1st Destroyer Fleet"
		location = 1823

		division = { id = { type = 18222 id = 89 } name = "1st Destroyer Flotilla" type = destroyer model = 0 }
		division = { id = { type = 18222 id = 90 } name = "2nd Destroyer Flotilla" type = destroyer model = 0 }
		division = { id = { type = 18222 id = 91 } name = "3rd Destroyer Flotilla" type = destroyer model = 0 }
		division = { id = { type = 18222 id = 92 } name = "4th Destroyer Flotilla" type = destroyer model = 0 }
		division = { id = { type = 18222 id = 93 } name = "5th Destroyer Flotilla" type = destroyer model = 0 }
		division = { id = { type = 18222 id = 94 } name = "6th Destroyer Flotilla" type = destroyer model = 0 }
		division = { id = { type = 18222 id = 102 } name = "1st Transport Flottila" type = transport model = 0 }
		division = { id = { type = 18222 id = 103 } name = "2nd Transport Flottila" type = transport model = 0 }
		division = { id = { type = 18222 id = 104 } name = "3rd Transport Flottila" type = transport model = 0 }
		division = { id = { type = 18222 id = 105 } name = "4th Transport Flottila" type = transport model = 0 }
	}

	navalunit = {
		id = { type = 18222 id = 95 }
		name = "2nd Destroyer Fleet"
		location = 1684

		division = { id = { type = 18222 id = 96 } name = "7th Destroyer Flotilla" type = destroyer model = 0 }
		division = { id = { type = 18222 id = 97 } name = "8th Destroyer Flotilla" type = destroyer model = 0 }
		division = { id = { type = 18222 id = 98 } name = "9th Destroyer Flotilla" type = destroyer model = 0 }
		division = { id = { type = 18222 id = 99 } name = "10th Destroyer Flotilla" type = destroyer model = 0 }
		division = { id = { type = 18222 id = 100 } name = "11th Destroyer Flotilla" type = destroyer model = 0 }
		division = { id = { type = 18222 id = 101 } name = "12th Destroyer Flotilla" type = destroyer model = 0 }
		division = { id = { type = 18222 id = 106 } name = "5th Transport Flottila" type = transport model = 0 }
		division = { id = { type = 18222 id = 107 } name = "6th Transport Flottila" type = transport model = 0 }
		division = { id = { type = 18222 id = 108 } name = "7th Transport Flottila" type = transport model = 0 }
		division = { id = { type = 18222 id = 109 } name = "8th Transport Flottila" type = transport model = 0 }
	}


}
