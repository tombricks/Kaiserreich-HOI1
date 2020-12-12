province = { id = 558   antiair = 1 }
province = { id = 559   antiair = 1 }

country = { 
    tag = GER
	capital = 602
	ai = "german.ai"

	

	alignment = { x = 0 y = -100 }
   manpower = 2300


	techlevels = { 
		12000 12100 13000 13100 11000 11100 11200 11300 11400 14000 1000 1100 1200 1300 2000 2100 5000 5100 6000 6100 9000 
		9100 10000 10100 7000 7100 8000 8100 8200 8300 3000 3100 4000 4100 4200 4300
	 }
	 techapps = {
		12001 12002 13001 13002 13004 11001 11002 11003 11004 11101 11102 11103 11201 11202 11203 11204 11301 11302 11303 11304 11305 11306 14001 14003 14005 14008
		14010 14011 14012 14014 14015 14016 1001 1107 1201 1202 1204 1205 1206 1207 1208 1301 2001 2002
		2003 2004 2005 2006 2101 2103 2104 5001 5002 5003 5004 5005 5101 6001 6002 6003 6004 6005 6006
		6011 6101 6102 6103 6105 6106 6107 6108 9001 9004 10002 10003 7001 7002 7101 7102 3002
		3003 3004 3005 3006 3007 3101 3102 4001 4101 4102 4201 4202 4203 4204
		4301 4302 4303		6012
	 }



	diplomats = 25


	transports = 18
	escorts = 16




	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200



	convoy = 
	{
        id = { type = 17120 id = 20002 } 
		# supplies to Prussia
		path = { 599 651 646 }
		transports = 4
		escorts = 4
		oil = no
		coal = no
		supplies = yes
		steel = no
		rubber = no
	}


    ownedprovinces = { 595 553 557 542 554 555 649 558 559 560 574 575 576 579 580 582 583 585 587	598 599 603 604 605	1961 586 588 589 547 577 562 566 646 650 607 636 606 645 647 648 } 
    controlledprovinces = { 595 553 557 542 554 555 649 558 559 560 574 575 576 579 580 582 583 585 587	598 599	602 603 604 605 1961 586 588 589 547 577 562 566 646 650 607 636 606 645 647 648 } 
    nationalprovinces = { 595 553 557 542 554 555 649 558 559 560 574 575 576 579 580 582 583 585 587 598 599 602 603 604 605	1961 586 588 589 547 577 562 566 646 650 607 636 606 645 647 613 616 617 578 645 565 573 571 623 621 610 611 620 648 } 

  
	navalunit = {
		name = "Kriegsmarine"
        id = { type = 14000 id = 2 } 
		leader  = 6
		location = 589
		division = { id = { type = 17702 id = 1 } 	name = "Deutschland"	type = cruiser model = 1 }
		division = { id = { type = 17702 id = 2 } 	name = "Admiral Scheer"	type = cruiser model = 1 }
		division = { id = { type = 17702 id = 3 } 	name = "Admiral Graf Spee"	type = cruiser model = 1 }
		#These are CL's
		division = { id = { type = 17702 id = 4 } 	name = "N�rnberg"	type = cruiser model = 0 seadefence = 4 seaattack = 4	}
		division = { id = { type = 17702 id = 5 } 	name = "Leipzig"	type = cruiser model = 0  seadefence = 4 seaattack = 4	}
		division = { id = { type = 17702 id = 6 } 	name = "K�nigsberg"	type = cruiser model = 0 seadefence = 4 seaattack = 4	}
		division = { id = { type = 17702 id = 7 } 	name = "Karlsruhe"	type = cruiser model = 0 seadefence = 4 seaattack = 4	}
		division = { id = { type = 17702 id = 8 } 	name = "K�ln"	type = cruiser model = 0 seadefence = 4 seaattack = 4	}
		division = { id = { type = 17702 id = 9 } 	name = "Emden"	type = cruiser model = 0 seadefence = 4 seaattack = 4	}
		division = { id = { type = 17702 id = 44 } name = "1e Transport" type = transport }
		division = { id = { type = 17702 id = 45 } name = "2e Transport" type = transport }
		
		
			   }

	navalunit = {
		name = "I. U-Boot Flotte"
        id = { type = 17750 id = 1 } 
		leader  = 4
		location = 586
		division = { id = { type = 17702 id = 11 } 	name = "Submarine Flotilla 1"	type = submarine model = 1 }
		division = { id = { type = 17702 id = 12 } 	name = "Submarine Flotilla 3"	type = submarine model = 1 }
		division = { id = { type = 17702 id = 13 } 	name = "Submarine Flotilla 5"	type = submarine model = 1 }
		division = { id = { type = 17702 id = 14 } 	name = "Submarine Flotilla 6"	type = submarine model = 1 }
		division = { id = { type = 17702 id = 15 } 	name = "Submarine Flotilla 7"	type = submarine model = 1}
	}

	navalunit = {
		name = "II. U-Boot Flotte"
        id = { type = 17750 id = 2 } 
		leader  = 9
		location = 589
		division = { id = { type = 17702 id = 10 } 	name = "Submarine Flotilla II" type = submarine model = 1 }
	}





##########################
	landunit = {
		location = 650
		name = "I. Armeekorps"
		leader = 16
        id = { type = 16000 id = 1 } 

		division = {
        id = { type = 16001 id = 1 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "1. Division"
		}

		division = {
        id = { type = 16001 id = 2 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "11. Division"
		}

		division = {
        id = { type = 16001 id = 3 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "21. Division"
		}

	}
##########################
	landunit = {
		location = 599
		name = "II. Armeekorps"
		leader = 17
        id = { type = 16000 id = 2 } 

		division = {
        id = { type = 16001 id = 4 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "2. Division"
		}

		division = {
        id = { type = 16001 id = 5 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "12. Division"
		}

		division = {
        id = { type = 16001 id = 6 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "32. Division"
		}

	}

##########################
	landunit = {
		location = 602
		name = "III. Armeekorps"
		leader = 18
        id = { type = 16000 id = 3 } 

		division = {
        id = { type = 16001 id = 7  } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "3. Division"
		}


		division = {
        id = { type = 16001 id = 8 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "23. Division"
		}
	}
##########################
	landunit = {
		location = 603
		name = "VIII. Armeekorps"
		leader = 19
        id = { type = 16000 id =  4 } 

		division = {
        id = { type = 16001 id = 9 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "8. Division"
		}
		division = {
        id = { type = 16001 id = 10 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "18. Division"
		}

		division = {
        id = { type = 16001 id = 11 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "28. Division"
		}
	}

##########################
	landunit = {
		location = 577
		name = "V. Armeekorps"
		leader = 21
        id = { type = 16000 id = 5 } 

		division = {
        id = { type = 16001 id = 12 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "5. Division"
		}

		division = {
        id = { type = 16001 id = 14 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "25. Division"
		}

		division = {
        id = { type = 16001 id = 13 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "35. Division"
		}

	}
##########################
	landunit = {
		location = 582
		name = "VI. Armeekorps"
		leader = 22
        id = { type = 16000 id = 6 } 

		division = {
        id = { type = 16001 id = 15 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "6. Division"
		}

		division = {
        id = { type = 16001 id = 16 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "16. Division"
		}

		division = {
        id = { type = 16001 id = 17 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "26. Division"
		}

	}
##########################
	landunit = {
		location = 560
		name = "IX. Armeekorps"
		leader = 23
        id = { type = 16000 id = 7 } 

		division = {
        id = { type = 16001 id = 18 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "9. Division"
		}

		division = {
        id = { type = 16001 id = 19 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "15. Division"
		}

		division = {
        id = { type = 16001 id = 20 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "29. Division"
		}

	}
##########################
	landunit = {
		location = 559
		name = "XII. Armeekorps"
		leader = 24
        id = { type = 16000 id = 8 } 

		division = {
        id = { type = 16001 id = 21 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "32. Division"
			}

		division = {
        id = { type = 16001 id = 22 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "33. Division"
		}

		division = {
        id = { type = 16001 id = 23 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "34. Division"
		}

		division = {
        id = { type = 16001 id = 24 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "36. Division"
		}

	}
##########################
	landunit = {
		location = 604
		name = "IV. Armeekorps"
        id = { type = 16000 id = 9 } 
		leader = 25

		division = {
        id = { type = 16001 id = 25 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "4. Division"
		}

		division = {
        id = { type = 16001 id = 26 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "14. Division"
		}

		division = {
        id = { type = 16001 id = 27 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "24. Division"
		}

	}
##########################
	landunit = {
		location = 562
		name = "VII. Armeekorps"
		leader = 26
        id = { type = 16000 id = 10 } 

		division = {
        id = { type = 16001 id = 28 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "7. Division"
		}

		division = {
        id = { type = 16001 id = 29 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "10. Division"
		}

		division = {
        id = { type = 16001 id = 30 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "17. Division"
		}

		division = {
        id = { type = 16001 id = 31 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "27. Division"
		}
	}
##########################

	landunit = {
		location = 588
		leader = 27
		name = "X. Armeekorps"
        id = { type = 16000 id = 11 } 

		division = {
        id = { type = 16001 id = 32 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "20. Division"
		}

		division = {
        id = { type = 16001 id = 33 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "22. Division"
		}

		division = {
        id = { type = 16001 id = 34 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "30. Division"
		}
	}

##########################
	landunit = {
		location = 583
		name = "XI. Armeekorps"
		leader = 28
        id = { type = 16000 id = 12 } 

		division = {
        id = { type = 16001 id = 35 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "13. Division"
		}

		division = {
        id = { type = 16001 id = 36 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "19. Division"
		}

		division = {
        id = { type = 16001 id = 37 } 
			type = infantry
			strength  = 100
			organisation = 30
			name = "31. Division"
		}
	}
##########################
	landunit = {
		location = 602
		name = "I. Panzergruppe"
		leader = 29
        id = { type = 16000 id = 13 } 

		division = {
        id = { type = 16001 id = 38 } 
			type = panzer
			model = 2
			strength  = 100
			organisation = 30
			name = "1. Panzerdivision"
		}

		division = {
        id = { type = 16001 id = 39 } 
			type = panzer
			model = 2
			strength  = 100
			organisation = 30
			name = "2. Panzerdivision"
		}

		division = {
        id = { type = 16001 id = 40 } 
			type = panzer
			model = 2
			strength  = 100
			organisation = 30
			name = "3. Panzerdivision"
		}

	}

########## Luftwaffe ##############

### Germany OOB (Non-authentic) 1936 Author: PDX ###

	airunit = { location = 575 id = { type = 17702 id = 25 } name = "Luftflotte I"
		division = { id = { type = 17702 id = 26 } name = "I./JG234" strength = 100 type = fighter model = 0 }
		division = { id = { type = 17702 id = 27 } name = "II./JG334" strength = 100 type = fighter model = 0 }
	}
	 
	airunit = { location = 598 id = { type = 17702 id = 30 } name = "Luftflotte II"
		division = { id = { type = 17702 id = 31 } name = "1./Ln.Abt. 100" strength = 100 type = transport_plane model = 0 }
		division = { id = { type = 17702 id = 32 } name = "2./Ln.Abt. 100" strength = 100 type = transport_plane model = 0 }
	}
	 
	airunit = { location = 580 id = { type = 17702 id = 35 } name = "Luftflotte III"
		division = { id = { type = 17702 id = 36 } name = "I./JG134" strength = 100 type = fighter model = 0 }
		division = { id = { type = 17702 id = 37 } name = "II./JG134" strength = 100 type = fighter model = 0 }
	}
	 
	airunit = { location = 636 id = { type = 17702 id = 40 } name = "Luftflotte IV"
		division = { id = { type = 17702 id = 41 } name = "III./St.G.51" strength = 100 type = dive_bomber model = 0 }
		division = { id = { type = 17702 id = 42 } name = "II./KG53" strength = 100 type = tactical_bomber model = 0 }
		division = { id = { type = 17702 id = 43 } name = "III./KG53" strength = 100 type = tactical_bomber model = 0 }
	}

##########################




#	landunit = { location = 598 id = { type = 17702 id = 3000 } name = "Paradudes!"
#		division = { id = { type = 17702 id = 33331 } name = "1. paras" strength = 100 type = paratrooper }
#	}
#
} 
