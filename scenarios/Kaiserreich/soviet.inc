province = {	id = 862	landfort = 5	}
province = {	id = 788	landfort = 4	}



country = { 
    tag = SOV
    ai = "USSR.ai"
	capital = 846
	alignment = { x = -100 y = 0 }

	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200

	manpower = 4800
	diplomacy = {
        relation = { tag = MON access = yes }
	 			}

	techlevels = { 
		12000 13000 11000 14000  1000 1100 1200 1300 2000 5000 6000 9000 9100
		10000 8000 8100 8200 3000 3100 4000 4100  4200 4300  2100 7000 7100
	 }
	 techapps = {
		12001 11001 11004 14001 14005 14014 1001 1301 2001 2002 2003 2005 6001 6002
		6003 6004 3002 3005 4001 4101 4102 4201 4202 4203 4204 1203 1107 14012 2006
		2101 14003 14008 9003 9006 7001 7002 1202 12003
		4301 4302 4303
	}



    ownedprovinces =      { 
788 791 792 785 783 784 1223 861 855 858 780 856 781 852 853 854 846 847 848 845 844 794 793 843 838 805 807 822 811 834 839 1235 840 1236 1237 1241 1242 1243 1246 1250 1373 1251 1249 1254 1252 
804 842 1232 850 1233 1244 1245 1234 1228 851 1227 1229 1248 1225 1230 859 1224 1222 1256 1257 1255 1220 1258 1259 1370 1369 1371 1372 1376 1374 1378 1379 1377 1385 1375 1383 1381 1239 1380 1382 1391 1392 1394 1395 1396 1397 1387 1388 1393 1389 1517 1522 1523 1521 1524 1527 1530 1529 1540 1634 1636 1638 1537 1538 1630 1632 1640 1639 1850 1855 1846 1843 1644 1628 1658 1652 1653 1657 1656 1663 1662 
1240 1386 1525 1637 1648 1553 1552 1847 
1641 1645 1659 1651 1633 1631 1533 1535 1526 1515 1519 1518 1429 1430 1426 1405 1404 1424 1399 1398 1402 1366 1359 
1260 1360 1422 1436 1431 1423 1425 1409 
	 }

    nationalprovinces =      { 
788 791 792 785 783 784 1223 861 855 858 780 856 781 852 853 854 846 847 848 845 844 794 793 843 838 805 807 822 811 834 839 1235 840 1236 1237 1241 1242 1243 1246 1250 1373 1251 1249 1254 1252 
804 842 1232 850 1233 1244 1245 1234 1228 851 1227 1229 1248 1225 1230 859 1224 1222 1256 1257 1255 1220 1258 1259 1370 1369 1371 1372 1376 1374 1378 1379 1377 1385 1375 1383 1381 1239 1380 1382 1391 1392 1394 1395 1396 1397 1387 1388 1393 1389 1517 1522 1523 1521 1524 1527 1530 1529 1540 1634 1636 1638 1537 1538 1630 1632 1640 1639 1850 1855 1846 1843 1644 1628 1658 1652 1653 1657 1656 1663 1662 
1240 1386 1525 1637 1648 1553 1552 1847 
1641 1645 1659 1651 1633 1631 1533 1535 1526 1515 1519 1518 1429 1430 1426 1405 1404 1424 1399 1398 1402 1366 1359 
1260 1360 1422 1436 1431 1423 1425 1409 
	 }

    controlledprovinces =      { 
788 791 792 785 783 784 1223 861 855 858 780 856 781 852 853 854 846 847 848 845 844 794 793 843 838 805 807 822 811 834 839 1235 840 1236 1237 1241 1242 1243 1246 1250 1373 1251 1249 1254 1252 
804 842 1232 850 1233 1244 1245 1234 1228 851 1227 1229 1248 1225 1230 859 1224 1222 1256 1257 1255 1220 1258 1259 1370 1369 1371 1372 1376 1374 1378 1379 1377 1385 1375 1383 1381 1239 1380 1382 1391 1392 1394 1395 1396 1397 1387 1388 1393 1389 1517 1522 1523 1521 1524 1527 1530 1529 1540 1634 1636 1638 1537 1538 1630 1632 1640 1639 1850 1855 1846 1843 1644 1628 1658 1652 1653 1657 1656 1663 1662 
1240 1386 1525 1637 1648 1553 1552 1847 
1641 1645 1659 1651 1633 1631 1533 1535 1526 1515 1519 1518 1429 1430 1426 1405 1404 1424 1399 1398 1402 1366 1359 
1260 1360 1422 1436 1431 1423 1425 1409 
	 }


####################
####SOVIET OOB#####
####################

#############################
#############################

landunit = { 
 id = { type = 10847 id = 3 }
 name = "7th Army"
 location = 822

  division = {
   id = { type = 10846 id = 13 }
   name = "14th Infantry Division"
   strength = 100
   type = infantry
   extra = artillery
             }

  division = {
   id = { type = 10846 id = 15 }
   name = "1st Armoured Division"
   strength = 100
   type = panzer
   model = 0
             }

          }

##########################
##########################

landunit = { 
 id = { type = 10847 id = 4 }
 name = "3rd Army"
 location = 792


  division = {
   id = { type = 10846 id = 18 }
   name = "43th Infantry Division"
   strength = 100
   type = infantry
   extra = artillery
             }

  division = {
   id = { type = 10846 id = 23 }
   name = "87th Mechanized Division"
   strength = 100
   type = mechanized
             }

          }

############################
##############################

landunit = {
 id = { type = 10847 id = 5 }
 name = "8th Army"
 location = 779

  division = {
   id = { type = 10846 id = 24 }
   name = "10th Infantry Division"
   strength = 100
   extra = artillery
   type = infantry
             }


  division = {
   id = { type = 10846 id = 27 }
   name = "11th Infantry Division"
   strength = 100
   type = infantry
   extra = engineer
             }
        }

###########################
############################

landunit = {
 id = { type = 10847 id = 6 }
 name = "11th Army"
 location = 772

  division = {
   id = { type = 10846 id = 32 }
   name = "5th Infantry Division"
   strength = 100
   extra = artillery
   type = infantry
             }

  division = {
   id = { type = 10846 id = 33 }
   name = "33rd Infantry Division"
   strength = 100
   type = infantry
   extra = artillery
             }

  division = {
   id = { type = 10846 id = 37 }
   name = "2nd Armoured Division"
   strength = 100
   type = panzer
   model = 0
             }

  division = {
   id = { type = 10846 id = 38 }
   name = "5th Armoured Division"
   strength = 100
   type = panzer
   model = 0
             }
        }

#######################
########################

landunit = {
 id = { type = 10847 id = 7 }
 name = "5th Army"
 location = 785

  division = {
   id = { type = 10846 id = 47 }
   name = "16th Infantry Division"
   strength = 100
   type = infantry
   extra = artillery
             }

  division = {
   id = { type = 10846 id = 49 }
   name = "3rd Infantry Division"
   strength = 100
   type = infantry
             }

  division = {
   id = { type = 10846 id = 50 }
   name = "22nd Motorized Division"
   strength = 100
   type = motorized
             }


          }

################################
###############################

landunit = {
 id = { type = 10847 id = 11 }
 name = "3rd Army"
 location = 773

  division = {
   id = { type = 10846 id = 63 }
   name = "17th Infantry Division"
   strength = 100
   type = infantry
   extra = artillery
             }

  division = {
   id = { type = 10846 id = 64 }
   name = "24th Infantry Division"
   strength = 100
   type = infantry
             }
         }

##########################
##########################

landunit = {
 id = { type = 10847 id = 12 }
 name = "4th Army"
 location = 766

  division = {
   id = { type = 10846 id = 70 }
   name = "6th Infantry Division"
   strength = 100
   type = infantry
   extra = artillery
             }

  division = {
   id = { type = 10846 id = 148 }
   name = "4th Armoured Division"
   strength = 100
   type = panzer
   model = 0
             }
           }

#########################
##########################

landunit = { 
 id = { type = 10847 id = 13 }
 name = "10th Army"
 location = 844

  division = {
   id = { type = 10846 id = 78 }
   name = "2nd Infantry Division"
   strength = 100
   type = infantry
   extra = artillery
             }

  division = {
   id = { type = 10846 id = 79 }
   name = "8th Infantry Division"
   strength = 100
   type = infantry
   extra = artillery
             }

  division = {
   id = { type = 10846 id = 80 }
   name = "13th Infantry Division"
   strength = 100
   type = infantry
             }

  division = {
   id = { type = 10846 id = 83 }
   name = "6th Cavalry Division"
   strength = 100
   type = cavalry
             }

  division = {
   id = { type = 10846 id = 85 }
   name = "3rd Armoured Division"
   strength = 100
   type = panzer
   model = 0
             }

  division = {
   id = { type = 10846 id = 89 }
   name = "7th Mechanized Division"
   strength = 100
   type = mechanized
             }
         }

################################
###############################

landunit = {
 id = { type = 10847 id = 24 }
 name = "6th Army"
 location = 774

  division = {
   id = { type = 10846 id = 127 }
   name = "41st Infantry Division"
   strength = 100
   type = infantry
   extra = artillery
             }

  division = {
   id = { type = 10846 id = 133 }
   name = "3rd Cavalry Division"
   strength = 100
   type = cavalry
             }
        }

###########################
###########################

landunit = {
 id = { type = 10847 id = 28 }
 name = "9th Army"
 location = 764

  division = {
   id = { type = 10846 id = 159 }
   name = "25th Infantry Division"
   strength = 100
   type = infantry
   extra = antiair
             }

  division = {
   id = { type = 10846 id = 164 }
   name = "30th Infantry Division"
   strength = 100
   type = bergsjaeger
             }

  division = {
   id = { type = 10846 id = 165 }
   name = "9th Cavalry Division"
   strength = 100
   type = cavalry
             }

  division = {
   id = { type = 10846 id = 166 }
   name = "5th Cavalry Division"
   strength = 100
   type = cavalry
             }
           }

##############################
###############################

landunit = { 
 id = { type = 10847 id = 29 }
 name = "Transcaucasus Military District"
 location = 1260

  division = {
   id = { type = 10846 id = 173 }
   name = "4th Infantry Division"
   strength = 100
   type = infantry
   extra = artillery
             }

  division = {
   id = { type = 10846 id = 183 }
   name = "17th Infantry Division"
   strength = 100
   type = bergsjaeger
             }
            }

##############################
##############################

landunit = {
 id = { type = 10847 id = 34 }
 name = "Orel Military District"
 location = 1398

  division = {
   id = { type = 10846 id = 199 }
   name = "19th Infantry Division"
   strength = 100
   type = infantry
   extra = artillery
             }
          }

###############################
##############################

landunit = {
 id = { type = 10847 id = 35 }
 name = "Central Asia Military District"
 location = 1422



  division = {
   id = { type = 10846 id = 213 }
   name = "18th Infantry Division"
   strength = 100
   type = bergsjaeger
             }

  division = {
   id = { type = 10846 id = 214 }
   name = "20th Infantry Division"
   strength = 100
   type = bergsjaeger
             }
         }

###############################
###############################

landunit = {
 id = { type = 10847 id = 38 }
 name = "1st Army"
 location = 1663

  division = {
   id = { type = 10846 id = 228 }
   name = "21st Infantry Division"
   strength = 100
   type = infantry
   extra = artillery
             }

  division = {
   id = { type = 10846 id = 229 }
   name = "22nd Infantry Division"
   strength = 100
   type = infantry
   extra = artillery
             }

  division = {
   id = { type = 10846 id = 234 }
   name = "1st Infantry Division"
   strength = 100
   type = infantry
             }

  division = {
   id = { type = 10846 id = 235 }
   name = "4th Infantry Division"
   strength = 100
   type = infantry
             }

  division = {
   id = { type = 10846 id = 236 }
   name = "5th Infantry Division"
   strength = 100
   type = infantry
             }
          }

##########################
###########################

landunit = {
 id = { type = 10847 id = 39 }
 name = "Far East Army"
 location = 1663

  division = {
   id = { type = 10846 id = 240 }
   name = "79th Infantry Division"
   strength = 100
   type = infantry
   extra = engineer
             }

  division = {
   id = { type = 10846 id = 241 }
   name = "35th Infantry Division"
   strength = 100
   type = infantry
             }
           }

############################
############################

landunit = {
 id = { type = 10847 id = 40 }
 name = "2nd Army"
 location = 1663

  division = {
   id = { type = 10846 id = 245 }
   name = "3th Infantry Division"
   strength = 100
   type = infantry
   extra = artillery
             }

  division = {
   id = { type = 10846 id = 246 }
   name = "12th Infantry Division"
   strength = 100
   type = infantry
             }
        }

###############################
###############################

airunit = {
 id = { type = 10848 id = 2 }
 name = "Leningrad Air Command"
 location = 788

  division = {
   id = { type = 10849 id = 5 }
   name = "1st Fighter Division"
   strength = 100
   type = fighter
   model = 0
             }

  division = {
   id = { type = 10849 id = 6 }
   name = "2nd Fighter Division"
   strength = 100
   type = fighter
   model = 0
             }
        }

###########################
###########################

airunit = {
 id = { type = 10848 id = 3 }  
 name = "Riga Air Command"
 location = 785

  division = {
   id = { type = 10849 id = 11 }
   name = "4th Fighter Division"
   strength = 100
   type = fighter
   model = 0
             }
         }

##########################
###########################

airunit = {
 id = { type = 10848 id = 4 }
 name = "Western Air Command"
 location = 778


  division = {
   id = { type = 10849 id = 15 }
   name = "12th Bomber Division"
   strength = 100
   type = tactical_bomber
   model = 0
             }

  division = {
   id = { type = 10849 id = 16 }
   name = "13th Bomber Division"
   strength = 100
   type = tactical_bomber
   model = 0
             }

  division = {
   id = { type = 10849 id = 17 }
   name = "9th Fighter Division"
   strength = 100
   type = fighter
   model = 0
             }

  division = {
   id = { type = 10849 id = 18 }
   name = "10th Fighter Division"
   strength = 100
   type = fighter
   model = 0
             }
        }

###############################
###############################

airunit = {
 id = { type = 10848 id = 5 }
 name = "Kiev Air Command"
 location = 775

  division = {
   id = { type = 10849 id = 25 }
   name = "14th Fighter Division"
   strength = 100
   type = fighter
   model = 0
             }
          }

#################################
##################################

airunit = {
 id = { type = 10847 id = 9 }
 name = "Moscow Air Command"
 location = 846

  division = {
   id = { type = 10849 id = 41 }
   name = "6th Fighter Division"
   strength = 100
   type = fighter
   model = 0
             }
          }

###############################
###############################

airunit = {
 id = { type = 10848  id = 12 }
 name = "Transbaikal Air Command"
 location = 1633

  division = {
   id = { type = 10849 id = 52 }
   name = "30th Bomber Division"
   strength = 100
   type = tactical_bomber
   model = 0
             }
          }

###########################
#############################

airunit = {
 id = { type = 10848 id = 13 }
 name = "Far East Air Command"
 location = 1663

  division = {
   id = { type = 10849 id = 55 }
   name = "29th Fighter Division"
   strength = 100
   type = fighter
   model = 0
             }

  division = {
   id = { type = 10849 id = 62 }
   name = "33rd Bomber Division"
   strength = 100
   type = tactical_bomber
   model = 0
             }
          }
#########################
# Soviet Naval OOB 1936 #
#########################

 navalunit = {
	 id = { type = 10848 id = 5113 }
	 name = "Arctic Fleet"
	 location = 822 #Murmansk

  division = {   id = { type = 10849 id = 200 }   name = "1st Destroyer 
Flotilla"  type = destroyer model = 0 }
  division = {   id = { type = 10849 id = 201 }   name = "2nd Destroyer 
Flotilla"  type = destroyer model = 0 }
  division = {   id = { type = 10849 id = 202 }   name = "1st Submarine 
Flotilla"  type = submarine model = 0 }
  division = {   id = { type = 10849 id = 203 }   name = "2nd Submarine 
Flotilla"  type = submarine model = 0 }

 }

 navalunit = {
	 id = { type = 10848 id = 5114 }
	 name = "Red Banner Baltic Fleet"
	 location = 788 #Leningrad

  division = {   id = { type = 10849 id = 204 }   name = "Marat"  type = 
battleship model = 0 }
  division = {   id = { type = 10849 id = 205 }   name = "Gangut"  type = 
battleship model = 0 }
division = {   id = { type = 10849 id = 233 }   name = "Oktyabrskaya Revoulutisa"  type = battleship model = 0 }
  division = {   id = { type = 10849 id = 234 }   name = "Parishskaya Kommuna"  type = battleship model = 0 }
  division = {   id = { type = 10849 id = 206 }   name = "3rd Destroyer 
Flotilla"  type = destroyer model = 0 }
  division = {   id = { type = 10849 id = 207 }   name = "4th Destroyer 
Flotilla"  type = destroyer model = 0 }
  division = {   id = { type = 10849 id = 208 }   name = "3rd Submarine 
Flotilla"  type = submarine model = 0 }
  division = {   id = { type = 10849 id = 209 }   name = "4th Submarine 
Flotilla"  type = submarine model = 0 }
  division = {   id = { type = 10849 id = 210 }   name = "5th Submarine 
Flotilla"  type = submarine model = 0 }
  division = {   id = { type = 10849 id = 211 }   name = "6th Submarine 
Flotilla"  type = submarine model = 0 }
  division = {   id = { type = 10849 id = 212 }   name = "7th Submarine 
Flotilla"  type = submarine model = 0 }

 }

 navalunit = {
	 id = { type = 10848 id = 5115 }
	 name = "Black Sea Fleet"
	 location = 862 #Sevastopol

  division = {   id = { type = 10849 id = 213 }   name = "Sevastopol"  type = 
battleship model = 0 }
  division = {   id = { type = 10849 id = 214 }   name = "Krasni Krim"  type = 
cruiser model = 0 }
  division = {   id = { type = 10849 id = 215 }   name = "Komintern"  type = 
cruiser model = 0 }
  division = {   id = { type = 10849 id = 216 }   name = "Chervonaya Ukraina"  
type = cruiser model = 0 }
  division = {   id = { type = 10849 id = 217 }   name = "Krasni Kavkaz"  type 
= cruiser model = 0 }
  division = {   id = { type = 10849 id = 218 }   name = "5th Destroyer 
Flotilla"  type = destroyer model = 0 }
  division = {   id = { type = 10849 id = 219 }   name = "6th Destroyer 
Flotilla"  type = destroyer model = 0 }
  division = {   id = { type = 10849 id = 220 }   name = "8th Submarine 
Flotilla"  type = submarine model = 0 }
  division = {   id = { type = 10849 id = 221 }   name = "9th Submarine 
Flotilla"  type = submarine model = 0 }
  division = {   id = { type = 10849 id = 222 }   name = "10th Submarine 
Flotilla"  type = submarine model = 0 }
  division = {   id = { type = 10849 id = 223 }   name = "11th Submarine 
Flotilla"  type = submarine model = 0 }

 }

 navalunit = {
	 id = { type = 10848 id = 5116 }
	 name = "Pacific Fleet"
	 location = 1663 #Vladivostok

  division = {   id = { type = 10849 id = 224 }   name = "7th Destroyer 
Flotilla"  type = destroyer model = 0 }
  division = {   id = { type = 10849 id = 225 }   name = "8th Destroyer 
Flotilla"  type = destroyer model = 0 }
  division = {   id = { type = 10849 id = 226 }   name = "12th Submarine 
Flotilla"  type = submarine model = 0 }
  division = {   id = { type = 10849 id = 227 }   name = "13th Submarine 
Flotilla"  type = submarine model = 0 }
  division = {   id = { type = 10849 id = 228 }   name = "14th Submarine 
Flotilla"  type = submarine model = 0 }
  division = {   id = { type = 10849 id = 229 }   name = "15th Submarine 
Flotilla"  type = submarine model = 0 }
  division = {   id = { type = 10849 id = 230 }   name = "16th Submarine 
Flotilla"  type = submarine model = 0 }
  division = {   id = { type = 10849 id = 231 }   name = "17th Submarine 
Flotilla"  type = submarine model = 0 }
  division = {   id = { type = 10849 id = 232 }   name = "1st Transports" type 
= transport }
 }
convoy = { 
        id = { type = 10849 id = 235 } 
        transports = 11 
        escorts = 0 
        rubber = no 
        coal = no 
        steel = no 
        oil = no 
        supplies = yes 
        path = { 1645 1646 1647 1649 1648 } 
        } 
convoy = { 
        id = { type = 10849 id = 236 } 
        transports = 11 
        escorts = 0 
        rubber = no 
        coal = no 
        steel = no 
        oil = yes 
        supplies = no 
        path = { 1648 1649 1647 1646 1645 } 
        }

} 



