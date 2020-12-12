
country = { 
    tag = CHI
	alignment = { x = 50 y = -10 }

	capital = 1695
	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200

	manpower = 5000

    ownedprovinces =      {
	1626 1622 1625 1563 1564 1565 1569 1568 1574 1573 1613 1617 1616 
	1691 1618 1692 1693 1620 1694 1621 1699 1698 1696 1697 1715  1714 1713  
	1711 1706 1707 1606 1614 1615 1612 1710 1695 1543 1544 1551 1572  
	1611 1601 1602 1504 1542 1548 1567 1624 1562 
	 }
    controlledprovinces = {
	1626 1622 1625 1563 1564 1565 1569 1568 1574 1573 1613 1617 1616 
	1691 1618 1692 1693 1620 1694 1621 1699 1698 1696 1697 1715  1714 1713  
	1711 1706 1707 1606 1614 1615 1612 1710 1695 1543 1544 1551 1572  
	1611 1601 1602 1504 1542 1548 1567 1624 1562 
	  }
    nationalprovinces =   {
	1626 1622 1625 1563 1564 1565 1569 1568 1567 1571 1574 1570 1573 1613 1617 1616 1691  1618 1692 1693 1620 1694 1621 1699 1698 1696 1697 1715  1714 1713  1712 1711 1709 1703 1704  1706 1707 1708 1705 1701 1702 1700 1724 1609 1606 1614 1615 1612 1577 1576 1503 1506 1575 1512 1505 
	1710 1695 1504 1543 1544 1551 1572 1548 1611 1601 1602 1562 1624 
	1510 1579 1502 1440 1511 1433 1508  1432 1507 1513 1509  1542 1541 1514 
	  }


	navalunit = {
		location = 1698 #Shanghai
		name = "Chinese Navy"
        id = { type = 11695 id = 1 } 
	division = {      
		id = { type = 11695 id = 2 }   
		name = "Hai-Chi"	
		type = cruiser
		model = 0
		seadefence = 4
		seaattack = 4 	
		}
	division = {      
		id = { type = 11695 id = 3 }   
		name = "Ying-Swei"	
		type = cruiser
		model = 0
		seadefence = 4
		seaattack = 4 		
		}
	division = {      
		id = { type = 11695 id = 4 }   
		name = "Chao-Ho"	
		type = cruiser	
		model = 0
		seadefence = 4
		seaattack = 4 	
		}
	division = {      
		id = { type = 11695 id = 5 }   
		name = "Ning-Hai"	
		type = cruiser
		model = 0	
		}
	division = {      
		id = { type = 11695 id = 6 }   
		name = "Ping-Hai"	
		type = cruiser
		model = 0	
		}
	division = {      
		id = { type = 11695 id = 7 }   
		name = "Destroyer group"	
		type = destroyer
		model = 0	
		}
	}
	airunit = {
		location = 1706 #Changsha
		name = "Chinese Airforce"
	id = { type = 11695 id = 8 }
	division = {
	id = { type = 11695 id = 9 }	
			name = "Fighter Squadron"
			type = fighter
			model = 0
		}
	division = {
	id = { type = 11695 id = 10 }	
			name = "Bomber Squadron"
			type = tactical_bomber
			model = 0
			strength = 72
		}
	division = {
	id = { type = 11695 id = 11 }	
			name = "Dive bomber Squadron"
			type = dive_bomber
			model = 0
			strength = 24
		}
	division = {
	id = { type = 11695 id = 12 }	
			name = "Transport Squadron"
			type = transport_plane
			model = 0
			strength = 10
		}
	}
	airunit = {
		location = 1714 #Fuzhou
		name = "Chinese Naval Aviation"
	id = { type = 11695 id = 13 }
	division = {
	id = { type = 11695 id = 14 }	
			name = "Naval Squadron"
			type = naval_bomber
			model = 0
			strength = 12
		}
	}
	landunit = {
		location = 1695 #Nanjing	
		name = "2nd Army Group"			
        id = { type = 11695 id = 15 } 
	division = {
        id = { type = 11695 id = 16 } 
			name = "30th Corps"	
			type = militia
		}
	division = {
        id = { type = 11695 id = 17 } 
			name = "42nd Corps"
			type = militia
		}
	}
	landunit = {
		location = 1569 #Handan		containing the communist
		name = "3rd Army Group"			
        id = { type = 11695 id = 18 } 
	division = {
        id = { type = 11695 id = 19 } 
			name = "12th Corps"	
			type = militia
		}
	division = {
        id = { type = 11695 id = 20 } 
			name = "58th Corps"
			type = militia
		}
	}
	landunit = {
		location = 1568 #Taiyuan	containing the communist
		name = "4th Army Group"			
        id = { type = 11695 id = 21 } 
	division = {
        id = { type = 11695 id = 22 } 
			name = "38th Corps"	
			type = militia
		}
	division = {
        id = { type = 11695 id = 23 } 
			name = "47th Corps"
			type = militia
		}
	}
	landunit = {
		location = 1567 #Datong		containing the communist
		name = "5th Army Group"			
        id = { type = 11695 id = 24 } 
	division = {
        id = { type = 11695 id = 25 } 
			name = "3rd Corps"	
			type = militia
		}
	division = {
        id = { type = 11695 id = 26 } 
			name = "15th Corps"
			type = militia
		}
	}
	landunit = {
		location = 1572 #Yinchuan	containing the communist
		name = "6th Army Group"			
        id = { type = 11695 id = 27 } 
	division = {
        id = { type = 11695 id = 28 } 
			name = "19th Corps"	
			type = militia
		}
	division = {
        id = { type = 11695 id = 29 } 
			name = "61st Corps"
			type = militia
		}
	}
	landunit = {
		location = 1574 #Lanzhou	containing the communist
		name = "7th Army Group"			
        id = { type = 11695 id = 30 } 
	division = {
        id = { type = 11695 id = 31 } 
			name = "22nd Corps"	
			type = militia
		}
	division = {
        id = { type = 11695 id = 32 } 
			name = "35th Corps"
			type = militia
		}
	}
	landunit = {
		location = 1573 #Wudu		containing the communist
		name = "14th Army Group"			
        id = { type = 11695 id = 33 } 
	division = {
        id = { type = 11695 id = 34 } 
			name = "14th Corps"	
			type = militia
		}
	division = {
        id = { type = 11695 id = 35 } 
			name = "93rd Corps"
			type = militia
		}
	}
	landunit = {
		location = 1617 #Xi'an		containing the communist
		name = "18th Army Group"			
        id = { type = 11695 id = 36 } 
	division = {
        id = { type = 11695 id = 37 } 
			name = "9th Corps"	
			type = militia
		}
	division = {
        id = { type = 11695 id = 38 } 
			name = "96th Corps"
			type = militia
		}
	}
	landunit = {
		location = 1618 #Luoyang	containing the communist
		name = "10th Army Group"			
        id = { type = 11695 id = 39 } 
	division = {
        id = { type = 11695 id = 40 } 
			name = "28th Corps"	
			type = militia
		}
	division = {
        id = { type = 11695 id = 41 } 
			name = "91st Corps"
			type = militia
		}
	}
	landunit = {
		location = 1548 #Hohhot
		name = "31st Army Group"			
        id = { type = 11695 id = 54 } 
	division = {
        id = { type = 11695 id = 55 } 
			name = "69th Corps"
			type = militia
		}
	division = {
        id = { type = 11695 id = 56 } 
			name = "99th Corps"	
			type = militia
		}
	}
	landunit = {
		location = 1543 #Xining
		name = "23rd Army Group"			
        id = { type = 11695 id = 46 } 
	division = {
        id = { type = 11695 id = 47 } 
			name = "21st Corps"	
			type = militia
		}
	division = {
        id = { type = 11695 id = 48 } 
			name = "50th Corps"
			type = militia
		}
	division = {
        id = { type = 11695 id = 64 } 
			name = "17th Corps"
			type = militia
		}
	}
	landunit = {
		location = 1698 #Shanghai
		name = "25th Army Group"			
        id = { type = 11695 id = 42 } 
	division = {
        id = { type = 11695 id = 43 } 
			name = "100th Corps"	
			type = militia
		}
	division = {
        id = { type = 11695 id = 52 } 
			name = "25th Corps"	
			type = militia
		}
	division = {
        id = { type = 11695 id = 44 } 
			name = "4th New Corps"
			type = infantry
		}
	division = {
        id = { type = 11695 id = 45 } 
			name = "1st Cavalry Corps"
			type = cavalry
		}
	}
	landunit = {
		location = 1606 #Kaiyuan	Kwangsi
		name = "9th Army Group"			
        id = { type = 11695 id = 49 } 
	division = {
        id = { type = 11695 id = 50 } 
			name = "4th Corps"	
			type = militia
		}
	division = {
        id = { type = 11695 id = 51 } 
			name = "65th Corps"
			type = militia
		}
	division = {
        id = { type = 11695 id = 53 } 
			name = "29th Corps"
			type = militia
		}
	division = {
        id = { type = 11695 id = 58 } 
			name = "40th Corps"
			type = militia
		}
	division = {
        id = { type = 11695 id = 59 } 
			name = "76th Corps"
			type = militia
		}
	division = {
        id = { type = 11695 id = 61 } 
			name = "51st Corps"
			type = militia
		}
	division = {
        id = { type = 11695 id = 62 } 
			name = "57th Corps"
			type = militia
		}
	division = {
        id = { type = 11695 id = 63 } 
			name = "89th Corps"
			type = militia
		}
	division = {
        id = { type = 11695 id = 60 } 
			name = "2nd Cavalry Corps"
			type = cavalry
		}
	}
	landunit = {
		location = 1710 #Huangshi	Kwangtung
		name = "12th Army Group"			
        id = { type = 11695 id = 65 } 
	division = {
        id = { type = 11695 id = 66 } 
			name = "62nd Corps"	
			type = militia
		}
	division = {
        id = { type = 11695 id = 67 } 
			name = "63rd Corps"
			type = militia
		}
	division = {
        id = { type = 11695 id = 68 } 
			name = "66th Corps"
			type = militia
		}
	division = {
        id = { type = 11695 id = 69 } 
			name = "83rd Corps"
			type = militia
		}
	division = {
        id = { type = 11695 id = 70 } 
			name = "46th Corps"
			type = militia
		}
	division = {
        id = { type = 11695 id = 71 } 
			name = "64th Corps"
			type = militia
		}
	division = {
        id = { type = 11695 id = 72 } 
			name = "1st Armoured Corps"	
			type = panzer
			model = 0
			strength = 30
		}
	division = {
        id = { type = 11695 id = 57 } 
			name = "1st New Corps"
			type = infantry
		}
	division = {
        id = { type = 11695 id = 73 } 
			name = "3rd Cavalry Corps"
			type = cavalry
		}
	}
	landunit = {
		location = 1706 #Changsha 	reserve
		name = "19th Army Group"			
        id = { type = 11695 id = 74 } 
	division = {
        id = { type = 11695 id = 75 } 
			name = "79th Corps"	
			type = militia
		}
	division = {
        id = { type = 11695 id = 76 } 
			name = "49th Corps"
			type = militia
		}
	division = {
        id = { type = 11695 id = 77 } 
			name = "70th Corps"
			type = militia
		}
	division = {
        id = { type = 11695 id = 78 } 
			name = "78th Corps"
			type = militia
		}
	}
	landunit = {
		location = 1625 #Tianjin
		name = "19th Army Group"			
        id = { type = 11695 id = 79 } 
	division = {
        id = { type = 11695 id = 80 } 
			name = "98th Corps"	
			type = militia
		}
	division = {
        id = { type = 11695 id = 81 } 
			name = "80th Corps"
			type = militia
		}
	division = {
        id = { type = 11695 id = 82 } 
			name = "82nd Corps"
			type = militia
		}
	division = {
        id = { type = 11695 id = 83 } 
			name = "81st Corps"
			type = militia
		}
	division = {
        id = { type = 11695 id = 84 } 
			name = "4th Cavalry Corps"
			type = militia
		}
	}
} 