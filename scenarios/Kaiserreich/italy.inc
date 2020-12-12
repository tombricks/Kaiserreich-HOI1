country = { 
    tag = ITA

	alignment = { x = 0 y = -90 }
	ai = "Italy.ai"
	
	techlevels = { 
		12000 13000 11000 11100 14000 1000 1100 1200 1300 2000 5000 6000 6100 9000 9100 10000
		8000 8100 8200 3000 3100 4000 4100 4200 4300 12100 10100 6200
	 }
	 techapps = {
		12001 13004 11001 11004 14001 14005 14014 1001 1301 2001 2002 2003  2005 6001  6002 6003
		6004 10002 3002 3005 3101 4001 4101 4102 4201 4202 4203 4204 13006 1203 1107 11104 14012
		14015 6006 6102 6106 9001 9004 6201 6202 6205 6005 6011 6101 6105 10003 6009
		4301 4302 4303 6012

	}
	manpower = 1380




	# Resource Reserves
	oil		= 200
	steel	= 200
	coal	= 200
	rubber	= 200

	supplies = 1000

	capital = 908
    ownedprovinces =      {
	933 932 912 567 910 905 906 908 907 900 938 901 902 893 903 898 897 913 885 883
	#africa
	1092 1094 1095 1097 1096 1098 1089 1088 1087 1086 1085 1084 1105 1106 1107 1285 1302 1299  
	 }
    controlledprovinces = {
	933 932 912 567 910 905 906 908 907 900 938 901 902 893 903 898 897 913 885 883
	#africa
	1092 1094 1095 1097 1096 1098 1089 1088 1087 1086 1085 1084 1105 1106 1107 1285 1302 1299  
	  }
    nationalprovinces =   {
	933 932 912 567 910 905 906 908 907 900 938 901 902 893 903 898 897 913 885 883
	#africa
	1092 1094 1095 1097 1096 1098 1089 1088 1087 1086 1085 1084 1105 1106 1107 1285 1302 1299  
	  }

	transports = 130
	escorts = 5

	convoy = 
	{
        id = { type = 17120 id = 10002 } 
		# convoy shipping supplies to Asmara
		path = { 893 894 888 886 1207 1204 1286 1285 }
		transports = 9
		escorts = 1
		oil = no
		coal = no
		supplies = yes
		steel = no
		rubber = no
	}

	convoy = 
	{
        id = { type = 17120 id = 10003 } 
		# convoy shipping supplies to Obbia
		path = { 893 894 888 886 1207 1204 1286 1292 1291 1299 }
		transports = 14
		escorts = 1
		oil = no
		coal = no
		supplies = yes
		steel = no
		rubber = no
	}

	convoy = 
	{
        id = { type = 17120 id = 10004 } 
		# convoy shipping supplies to Libya
		path = { 898 895 1087 }
		transports = 5
		escorts = 1
		oil = no
		coal = no
		supplies = yes
		steel = no
		rubber = no
	}

	convoy = 
	{
        id = { type = 17120 id = 10005 } 
		# convoy shipping supplies to Rhodes
		path = { 903 894 92 884 885 }
		transports = 7
		escorts = 0
		oil = no
		coal = no
		supplies = yes
		steel = no
		rubber = no
	}


    convoy = { 
        id = { type = 14712 id = 4002 } 
        transports = 40 
        escorts = 0 
        rubber = no 
        coal = no 
        steel = no 
        oil = yes 
        supplies = no 
        path = { 1092 888 894 903 } 
        } 


landunit = {
		#Army Group west, against france#

		id = { type = 14000 id = 800 } 
		location = 932
		name = "I. Army"
		#Gen. P. Pintor#

		division = {
	        id = { type = 14000 id = 801 } 
			name = "7 Div. /16. Div."
			type = infantry
			extra = artillery 
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 14000 id = 803 } 
			name = "22. Div./1 Celere"
			type = motorized
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 14000 id = 804 } 
			name = "5. Div. Pusteria"
			type = bergsjaeger
			strength  = 70
			organisation = 30
		}
}


landunit = {
		id = { type = 14000 id = 806 } 
		location = 933
		name = "II. Corps"
		#Gen. F. Bettini#

		division = {
	        id = { type = 14000 id = 807 } 
			name = "4. Div/33.DiV"
			extra = artillery 
            type = infantry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 14000 id = 809 } 
			name = "36. Div. Forli"
			type = infantry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 14000 id = 810 } 
			name = "4. Div./2 Alpini"
			type = bergsjaeger
			strength  = 100
		}
}



landunit = {
		id = { type = 14000 id = 812 } 
		location = 912
		name = "III. Corps"
		#Gen. M. Arisio#

		division = {
	        id = { type = 14000 id = 813 } 
			name = "3. Div. Ravenna"
			type = infantry
			extra = artillery 
			strength  = 70
			organisation = 30
		}
		division = {
	        id = { type = 14000 id = 814 } 
			name = "6. Div. Cuneo"
			type = infantry
			strength  = 70
			organisation = 30
		}
}

landunit = {
		id = { type = 14000 id = 816 } 
		location = 932
		name = "XV. Corps"
		#Gen. M. Arisio#

		division = {
	        id = { type = 14000 id = 817 } 
			name = "5. Div /37 Div."
			type = infantry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 14000 id = 819 } 
			name = "44. Div. /37 Div."
			type = infantry
			strength  = 100
		}
}



landunit = {
		id = { type = 14000 id = 820 } 
		location = 933
		name = "IV. Army"
		#Gen. A Guzzoni#

		division = {
	        id = { type = 14000 id = 821 } 
			name = "11. Div./58. Div. "
			type = infantry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 14000 id = 823 } 
			name = "2. Div Tridentia"
			type = bergsjaeger
			strength  = 100
			organisation = 30
		}
}

landunit = {
		id = { type = 14000 id = 824 } 
		location = 933
		name = "I. Corps"
		#Gen. C. Vecchiarelli#

		division = {
	        id = { type = 14000 id = 825 } 
			name = "1. Div. Superga"
			type = infantry
			strength  = 100
		}
		division = {
	        id = { type = 14000 id = 826 } 
			name = "24. Div. /59. Div."
			type = infantry
			strength  = 100
		}
}

landunit = {
		id = { type = 14000 id = 828 } 
		location = 912
		name = "IV. Corps"
		#Gen. C. Mercalli#

		division = {
	        id = { type = 14000 id = 829 } 
			name = "2. Div. /26. Div"
			type = infantry
			strength  = 100
		}
}

landunit = {
		id = { type = 14000 id = 832 } 
		location = 913
		name = "Alpini Corps"
		#Gen. L. Negri#

		division = {
	        id = { type = 14000 id = 833 } 
			name = "1. Div. Taurine/Levanna"
			type = bergsjaeger
			strength  = 100
			organisation = 30
		}
}


landunit = {
		id = { type = 14000 id = 837 } 
		location = 567
		name = "V. Corps"
		#Gen. R. Balocco#

		division = {
	        id = { type = 14000 id = 838 } 
			name = "12. Div. Sassari"
			type = infantry
			strength  = 70
			organisation = 30
		}
		division = {
	        id = { type = 14000 id = 839 } 
			name = "15. Div. Bergamo"
			type = infantry
			strength  = 70
			organisation = 30
		}
		division = {
	        id = { type = 14000 id = 840 } 
			name = "57. Div. Lombardia"
			type = infantry
			strength  = 70
			organisation = 30
		}
}

landunit = {
		id = { type = 14000 id = 841 } 
		location = 567
		name = "XI. Corps"
		#Gen. C. Mercalli#

		division = {
	        id = { type = 14000 id = 842} 
			name = "13. Div. Re"
			type = infantry
			strength  = 70
			organisation = 30
		}
		division = {
	        id = { type = 14000 id = 843 } 
			name = "14. Div. Isonzo"
			type = infantry
			strength  = 70
			organisation = 30
		}
}

landunit = {
		#6. Army, Gen M. Vercillini, "Po Army"#

		id = { type = 14000 id = 844 } 
		location = 910
		name = "Celere"
		#Gen. G. Messe#

		division = {
	        id = { type = 14000 id = 845 } 
			name = "1 Celere Eugenio di Savoia"
			type = cavalry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 14000 id = 846} 
			name = "2 Celere Emanuelle Filibert"
			type = cavalry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 14000 id = 847 } 
			name = "3 Celere Principe Amedeo"
			type = cavalry
			strength  = 100
			organisation = 30
		}
}

landunit = {
		id = { type = 14000 id = 848 } 
		location = 567
		name = "Motocorazatta"
		#Gen. Zingales#

		division = {
	        id = { type = 14000 id = 849 } 
			name = "9. Div./52. Div."
			type = motorized
		}
		division = {
	        id = { type = 14000 id = 850 } 
			name = "10. Div./52. Div. "
			type = motorized
		}
}

landunit = {
		id = { type = 14000 id = 852 } 
		location = 563
		name = "Dall`Ora"
		#Gen. F. Dall`Ora#

		division = {
	        id = { type = 14000 id = 853 } 
			name = "101. Div./102. Div. "
			type = motorized
			strength  = 100
		}
		division = {
	        id = { type = 14000 id = 855 } 
			name = "132. Div. Ariete"
			type = panzer
			model = 0
		}
		division = {
	        id = { type = 14000 id = 856 } 
			name = "133. Div. Littorio"
			type = panzer
			model = 0
		}
}

landunit = {
		#8. Army, Adalberto di Savoia#
		id = { type = 14000 id = 857 } 
		location = 905
		name = "VI. Corps"
		#Gen. E.Rossi#

		division = {
	        id = { type = 14000 id = 858 } 
			name = "18. Div./56. Div."
			type = infantry
		}
		division = {
	        id = { type = 14000 id = 859 } 
			name = "49. Div./56. Div."
			type = infantry
		}
}

#
landunit = {
		id = { type = 14000 id = 861 } 
		location = 905
		name = "XIV. Corps"
		#Gen. G.Vecchi#

		division = {
	        id = { type = 14000 id = 862 } 
			name = "32. Div. Marche"
			type = infantry
			strength  = 70
			organisation = 30
		}
		division = {
	        id = { type = 14000 id = 863 } 
			name = "38. Div. Puglie"
			type = infantry
			strength  = 70
			organisation = 30
		}
}


landunit = {
		#Army Group South, Emilio de Bono, Around palermo-syracuse#
		#
		id = { type = 14000 id = 864 } 
		location = 898
		name = "XII. Corps"
		#Gen. A.Rossi#

		division = {
	        id = { type = 14000 id = 865 } 
			name = "28. Div. Aosta"
			type = infantry
			strength  = 70
			organisation = 30
		}
		division = {
	        id = { type = 14000 id = 866 } 
			name = "54. Div. Napoli"
			type = infantry
			strength  = 70
			organisation = 30
		}
}

landunit = {
		#
		id = { type = 14000 id = 867 } 
		location = 897
		name = "XIII. Corps"
		#Gen. E.Rossi#

		division = {
	        id = { type = 14000 id = 868 } 
			name = "30. Div. Sabauda"
			type = infantry
			strength  = 70
			organisation = 30
		}
		division = {
	        id = { type = 14000 id = 869 } 
			name = "31. Div. Calabria"
			type = infantry
			strength  = 70
			organisation = 30
		}
}


landunit = {
		#Army Group North Africa

		#5. Army, Gen. Gariboldi#

		#
		id = { type = 14000 id = 870 } 
		location = 1098
		name = "X. Corps"
		#Gen. A. Barbieri#

		division = {
	        id = { type = 14000 id = 871 } 
			name = "25. Div/60. Div. "
			type = infantry
			strength  = 100
		}
		division = {
	        id = { type = 14000 id = 872 } 
			name = "55. Div/60. Div. "
			type = infantry
			strength  = 100
		}
}

		#
landunit = {
		id = { type = 14000 id = 874 } 
		location = 1085
		name = "XX. Corps"
		#Gen. F. Cona#

		division = {
	        id = { type = 14000 id = 875 } 
			name = "17. Div/61. Div."
			type = infantry
		}
		division = {
	        id = { type = 14000 id = 876 } 
			name = "27. Div./61. Div."
			type = infantry
		}
		division = {
	        id = { type = 14000 id = 877 } 
			name = "61. Div. Sirte"
			type = infantry
		}
}

landunit = {
		#
		id = { type = 14000 id = 878 } 
		location = 1097
		name = "XXIII. Corps"
		#Gen. A. Bergonzoli#

		division = {
	        id = { type = 14000 id = 879 } 
			name = "1 CCNN 23 Marzo"
			type = infantry
			strength  = 100
			organisation = 30
		}
		division = {
	        id = { type = 14000 id = 880 } 
			name = "2 CCNN 28 Ottobre"
			type = infantry
			strength  = 100
			organisation = 30
		}
}

landunit = {
		#
		id = { type = 14000 id = 885 } 
		location = 1085
		name = "XXI. Corps"
		#Gen. L.Dalmazzo#

		division = {
	        id = { type = 14000 id = 886 } 
			name = "63. Div. Cirene"
			type = infantry
			strength  = 70
			organisation = 30
		}
		division = {
	        id = { type = 14000 id = 887 } 
			name = "62. Div. Marmarica"
			type = infantry
			strength  = 70
			organisation = 30
		}
}

landunit = {
		#
		id = { type = 14000 id = 888 } 
		location = 1085
		name = "XXII. Corps"
		#Gen. E.Pintassa-Manella#

		division = {
	        id = { type = 14000 id = 889 } 
			name = "18. Div. Cantanzaro"
			type = infantry
			strength  = 70
			organisation = 30
		}
		division = {
	        id = { type = 14000 id = 890 } 
			name = "4 CCNN 3 Gennaio"
			type = infantry
			strength  = 70
			organisation = 30
		}
}



landunit = {
		#Reserves, 3. Army, Gen C. Geloso##

		#
		id = { type = 14000 id = 891 } 
		location = 908
		name = "IX. Corps"
		#Gen. C.Rossi#

		division = {
	        id = { type = 14000 id = 892 } 
			name = "29. Div./47. Div."
			type = infantry
			strength  = 100
		}
		division = {
	        id = { type = 14000 id = 894 } 
			name = "48. Div./47. Div."
			type = infantry
			strength  = 100
		}
}


landunit = {
	#  7. Army#
	#
		id = { type = 14000 id = 899 } 
		location = 906
		name = "VII. Corps"
		#Gen. A. Agromini#

		division = {
	        id = { type = 14000 id = 900 } 
			name = "41. Div. / 20. Div"
			type = infantry
			strength  = 100
		}
}

landunit = {
		#
		id = { type = 14000 id = 902 } 
		location = 902
		name = "VIII. Corps"
		#Gen. F Gambelli#

		division = {
	        id = { type = 14000 id = 903 } 
			name = "51. Div./ 21. Div"
			type = infantry
			strength  = 100
		}
}


landunit = {
		#east africa army#
		#
		id = { type = 14000 id = 905 } 
		location = 1302
		name = "Southern Sector"
		#Gen. P. Gazzera#

		division = {
	        id = { type = 14000 id = 906 } 
			name = "1,9,10,85 Colonial"
			type = militia
			organisation = 30
		}
		division = {
	        id = { type = 14000 id = 909 } 
			name = "18,23,25,86 Colonial"
			type = militia
		}
		division = {
	        id = { type = 14000 id = 914 } 
			name = "Colonial Cavlary"
			type = cavalry
			strength  = 30
			organisation = 30
		}
}

landunit = {
		id = { type = 14000 id = 915 } 
		location = 1285
		name = "Giuba Sector"
		#Gen. De Simone#

		division = {
	        id = { type = 14000 id = 916 } 
			name = "20,91,92 Colonial"
			type = militia
			organisation = 30
		}
		division = {
	        id = { type = 14000 id = 919 } 
			name = "Colonial Cavlary"
			type = cavalry
			strength  = 20
			organisation = 30
		}
}

landunit = {
		id = { type = 14000 id = 920 } 
		location = 1299
		name = "Eastern Sector"
		#Gen. G. Nasi#

		division = {
	        id = { type = 14000 id = 921 } 
			name = "Granatieri di Savoia"
			type = infantry
			strength  = 70
			organisation = 30
		}
		division = {
	        id = { type = 14000 id = 922 } 
			name = "Africa"
			type = infantry
			strength  = 70
			organisation = 30
		}
		division = {
	        id = { type = 14000 id = 923 } 
			name = "2,7,11,17 Colonial"
			type = militia
		}
		division = {
	        id = { type = 14000 id = 926 } 
			name = "13,14,15,70 Colonial"
			type = militia
		}
		division = {
	        id = { type = 14000 id = 931 } 
			name = "Colonial Cavalry"
			type = cavalry
			strength  = 30
			organisation = 30
		}
}

landunit = {
		id = { type = 14000 id = 932 } 
		location = 1299
		name = "Northern Sector"
		#Gen. L. Frusci#

		division = {
	        id = { type = 14000 id = 933 } 
			name = "3,4,5,6 Colonial"
			type = militia
		}
		division = {
	        id = { type = 14000 id = 937 } 
			name = "8,12,16,19 Colonial"
			type = militia
		}
		division = {
	        id = { type = 14000 id = 941 } 
			name = "21,22,41,42 Colonial"
			type = militia
		}
		division = {
	        id = { type = 14000 id = 946 } 
			name = "Colonial Cavalry"
			type = cavalry
			strength  = 30
			organisation = 30
		}
}


landunit = {
		#Aegan Corps, rhodos?#
		id = { type = 14000 id = 947 } 
		location = 885
		name = "IX. Corps"
		#Gen. De Vecchi di val cismon#

		division = {
	        id = { type = 14000 id = 948 } 
			name = "50. Div. Regina"
			type = infantry
			strength  = 70
			organisation = 30
		}
}


landunit = {
		#Albania Corps#

		id = { type = 14000 id = 949 } 
		location = 893
		name = "XVI. Corps"
		#Gen. S .visconti prascai#

		division = {
	        id = { type = 14000 id = 950 } 
			name = "19. Div. / 23. Div."
			type = infantry
			strength  = 100
		}
		division = {
	        id = { type = 14000 id = 952 } 
			name = "53. Div./ 23. Div"
			type = infantry
			strength  = 100
		}
		division = {
	        id = { type = 14000 id = 953 } 
			name = "3. Div. Julia"
			type = bergsjaeger
			strength  = 70
			organisation = 30
		}
}
############################
############################
airunit = {
 location = 912
 id = { type = 14000 id = 156 }
 name = "1st Squadra Aerea"

    division = {
   id = { type = 14000 id = 157 }
   name = "3rd/9th Fighter Wing" 
   strength = 100 
   type = fighter
   model = 0
             }
  }
airunit = {
 location = 912
 id = { type = 14000 id = 158 }
 name = "4th Tactical Bomber Command 'Drago'"

    	division = {
   id = { type = 14000 id = 160 }
   name = "7th/16th Tactical Bomber Wing" 
   strength = 100 
   type = tactical_bomber
   model = 0
             }
  }

################################
airunit = {
 location = 897
 id = { type = 14000 id = 169 }
 name = "2nd Squadra Aerea"

    division = {
   id = { type = 14000 id = 170 }
   name = "6th Independent Fighter Wing" 
   strength = 50 
   type = fighter
   model = 0
             }
	  }
airunit = {
 location = 897
 id = { type = 14000 id = 171 }
 name = "3rd Torpedo Bomber Command 'Centauro'"

    division = {
   id = { type = 14000 id = 172 }
   name = "11th/30th Torpedo Bomber Wing" 
   strength = 100 
   type = torpedo_plane
   model = 0
             }
	  }

airunit = {
 location = 897
 id = { type = 14000 id = 178 }
 name = "1st Fighter Command 'Aquila'"

    division = {
   id = { type = 14000 id = 179 }
   name = "1st Fighter Wing" 
   strength = 50 
   type = fighter
   model = 0
             }
	     }
###################################
airunit = {
 location = 906
 id = { type = 14000 id = 180 }
 name = "3rd Squadra Aerea"

  division = {
   id = { type = 14000 id = 181 }
   name = "7th Independent Fighter Wing" 
   strength = 50 
   type = fighter
   model = 0
             }
	  }
airunit = {
 location = 906
 id = { type = 14000 id = 182 }
 name = "5th Torpedo Bomber Command 'Eolo'"

	division = {
   id = { type = 14000 id = 184 }
   name = "9th Torpedo Bomber Wing" 
   strength = 50 
   type = torpedo_plane
   model = 0
             }
	  }
airunit = {
 location = 906
 id = { type = 14000 id = 185 }
 name = "8th Fighter Command 'Astore'"

    division = {
   id = { type = 14000 id = 186 }
   name = "51st Fighter Wing" 
   strength = 50 
   type = fighter
   model = 0
             }
	     }
##########################################
airunit = {
 location = 893
 id = { type = 14000 id = 188 }
 name = "4th Squadra Aerea"

    division = {
   id = { type = 14000 id = 189 }
   name = "35th Tactical Bomber Wing" 
   strength = 50 
   type = tactical_bomber
   model = 0
             }
   division = {
   id = { type = 14000 id = 191 }
   name = "39th Transport Wing" 
   strength = 50 
   type = transport_plane
   model = 0
             }
###############################################
airunit = {
 location = 938
 id = { type = 14000 id = 192 }
 name = "Aereonautica Sardegna"

  division = {
   id = { type = 14000 id = 193 }
   name = "10th Torpedo Bomber Wing 'Marte' " 
   strength = 30 
   type = torpedo_plane
   model = 0
             }
  division = {
   id = { type = 14000 id = 194 }
   name = "3rd Independent Fighter Wing" 
   strength = 30 
   type = fighter
   model = 0
             }
           }
###############################################
airunit = {
 location = 1085
 id = { type = 14000 id = 199 }
 name = "Aereonautica Libia Ovest"

    division = {
   id = { type = 14000 id = 200 }
   name = "2nd Fighter Wing" 
   strength = 50 
   type = fighter
   model = 0
             }
  division = {
   id = { type = 14000 id = 202 }
   name = "15th Torpedo Bomber Wing" 
   strength = 30 
   type = torpedo_plane
   model = 0
             }
         }
#############################################
airunit = {
 location = 1098
 id = { type = 14000 id = 208 }
 name = "Aereonautica AOI"

    division = {
   id = { type = 14000 id = 209 }
   name = "AOI/Rex Fighter Wing" 
   strength = 80 
   type = fighter
   model = 0
             }
  division = {
   id = { type = 14000 id = 210 }
   name = "AOI/Pegaso Tactical Bomber Wing" 
   strength = 80 
   type = tactical_bomber
   model = 0
             }
         }

############################
############################

navalunit = {
 id = { type = 14000 id = 212 }
 name = "Regia Marina"
 location = 893
 leader = 6183 #Cavagnari

  division = { 
   id = { type = 14000 id = 213 }
   name = "2nd Destroyer Division "
   type = destroyer
   model = 1 
             }
  	}
###################################

navalunit = {
 id = { type = 14000 id = 215 }
 name = "1st Fleet"
 location = 894
 leader = 6184 #Campioni

  division = { 
   id = { type = 14000 id = 216 }
   name = "Guilio Cesare"
   type = battleship 
   model = 0
             }
	}

  navalunit = {
 id = { type = 14000 id = 217 }
 name = "1st Squadron/1st Fleet"
 location = 894
 leader = 6185 #Matteuchi

  division = { 
   id = { type = 14000 id = 218 }
   name = "Zara"
   type = cruiser
   model = 0
               }
  division = { 
   id = { type = 14000 id = 219 }
   name = "Gorizia"
   type = cruiser
   model = 0
   		}
  division = { 
   id = { type = 14000 id = 220 }
   name = "Fiume"
   type = cruiser
   model = 0
   		}
  division = { 
   id = { type = 14000 id = 221 }
   name = "9th Destroyer Division"
   type = destroyer
   model = 1
   		}
  division = { 
  	id = { type = 14000 id = 302 } 
  	name = "1st Transport" 
  	type = transport 
  	model = 0
  		}
	}
   navalunit = {
 id = { type = 14000 id = 222 }
 name = "4th Squadron/1st Fleet"
 location = 894
 leader = 6186 #Marenco

  division = { 
   id = { type = 14000 id = 223 }
   name = "Alberico da Barbiano"
   type = cruiser
   model = 1
               }
  division = { 
   id = { type = 14000 id = 224 }
   name = "Luigi Cadorna"
   type = cruiser
   model = 1
   		}
  division = { 
   id = { type = 14000 id = 225 }
   name = "Alberto da Guissano"
   type = cruiser
   model = 1
   		}
  division = { 
   id = { type = 14000 id = 226 }
   name = "Armando Diaz"
   type = cruiser
   model = 1
   		}
  division = { 
   id = { type = 14000 id = 227 }
   name = "12th Destroyer Division"
   type = destroyer
   model = 1
   		}
  division = { 
  	id = { type = 14000 id = 303 } 
  	name = "4th Transport" 
  	type = transport 
  	model = 0
  		}
	}
 navalunit = {
 id = { type = 14000 id = 228 }
 name = "5th Squadron/1st Fleet"
 location = 894
 leader = 6187 #Brivonesi

    division = { 
   id = { type = 14000 id = 229 }
   name = "Conti di Cavour"
   type = battleship
   model = 0
   		}
  division = { 
   id = { type = 14000 id = 230 }
   name = "7th Destroyer Division"
   type = destroyer
   model = 1
   		}
  division = { 
   id = { type = 14000 id = 231 }
   name = "8th Destroyer Division"
   type = destroyer
   model = 1
   		}
  division = { 
  	id = { type = 14000 id = 304 } 
  	name = "5th Transport" 
  	type = transport 
  	model = 0
  		}
	}
  navalunit = {
 id = { type = 14000 id = 232 }
 name = "8th Squadron/1st Fleet"
 location = 894
 leader = 6188 #Legnani

      division = { 
   id = { type = 14000 id = 235 }
   name = "16th Destroyer Division"
   type = destroyer
   model = 1
   		}
	}
  navalunit = {
 id = { type = 14000 id = 236 }
 name = "9th Squadron/1st Fleet"
 location = 894
 leader = 6189 #Bergamini

  
  division = { 
   id = { type = 14000 id = 239 }
   name = "14th Destroyer Division"
   type = destroyer
   model = 1
   		}
  	}

####################################
 navalunit = {
 id = { type = 14000 id = 241 }
 name = "2nd Fleet"
 location = 933
 leader = 6190 #Paladini

  division = { 
   id = { type = 14000 id = 242 }
   name = "Pola"
   type = cruiser 
   model = 0
             }
	}
  navalunit = {
 id = { type = 14000 id = 243 }
 name = "2nd Squadron/2nd Fleet"
 location = 933
 leader = 6191 #Casardi

  division = { 
   id = { type = 14000 id = 244 }
   name = "Bande Nere"
   type = cruiser
   model = 1
               }
  division = { 
   id = { type = 14000 id = 245 }
   name = "Bartolomeo Colleoni"
   type = cruiser
   model = 1
   		}
    division = { 
   id = { type = 14000 id = 246 }
   name = "10th Destroyer Division"
   type = destroyer
   model = 0
   		}
  division = { 
  	id = { type = 14000 id = 305 } 
  	name = "2nd Transport" 
  	type = transport 
  	model = 0
  		}
	}
   navalunit = {
 id = { type = 14000 id = 247 }
 name = "3rd Squadron/2nd Fleet"
 location = 933
 leader = 6192 #Cattaneo

  division = { 
   id = { type = 14000 id = 248 }
   name = "Trento"
   type = cruiser
   model = 1
               }
  division = { 
   id = { type = 14000 id = 249 }
   name = "Bolzano"
   type = cruiser
   model = 1
   		}
  division = { 
   id = { type = 14000 id = 250 }
   name = "Trieste"
   type = cruiser
   model = 1
   		}
    division = { 
   id = { type = 14000 id = 251 }
   name = "11th Destroyer Division"
   type = destroyer
   model = 0
   		}
 division = { 
  	id = { type = 14000 id = 306 } 
  	name = "3rd Transport" 
  	type = transport 
  	model = 0
  		}
	}
 navalunit = {
 id = { type = 14000 id = 252 }
 name = "7th Squadron/2nd Fleet"
 location = 933
 leader = 6193 #Sansonetti

  division = { 
   id = { type = 14000 id = 254 }
   name = "Duca d'Aosta"
   type = cruiser
   model = 1
   		}
  division = { 
   id = { type = 14000 id = 255 }
   name = "Muzio Attendolo"
   type = cruiser
   model = 1
   		}
  division = { 
   id = { type = 14000 id = 256 }
   name = "Raimondo Montecuccolio"
   type = cruiser
   model = 1
   		}
  division = { 
   id = { type = 14000 id = 257 }
   name = "13th Destroyer Division"
   type = destroyer
   model = 0
   		}
	}
  
######################################

navalunit = {
 id = { type = 14000 id = 258 }
 name = "Submarine Fleet"
 location = 901
 leader = 6194 #Falangola

  division = { 
   id = { type = 14000 id = 259 }
   name = "4th Destroyer Division"
   type = destroyer
   model = 0
  }
  
  division = { 
   id = { type = 14000 id = 260 }
   name = "51st Submarine Division"
   type = submarine
   model = 0
                }
  division = { 
   id = { type = 14000 id = 261 }
   name = "52nd Submarine Division"
   type = submarine
   model = 0
  }
 }
   
navalunit = {
 id = { type = 14000 id = 262 }
 name = "1st Submarine Squadron"
 location = 904

  division = { 
   id = { type = 14000 id = 263 }
   name = "11th Submarine Division"
   type = submarine
   model = 0
             }
  division = { 
   id = { type = 14000 id = 264 }
   name = "12th Submarine Division"
   type = submarine
   model = 0
                }
  division = { 
   id = { type = 14000 id = 265 }
   name = "13th Submarine Division"
   type = submarine
   model = 0
                }
  division = { 
   id = { type = 14000 id = 266 }
   name = "14th Submarine Division"
   type = submarine
   model = 0
                }
          }
navalunit = {
 id = { type = 14000 id = 270 }
 name = "2nd Submarine Squadron"
 location = 1002

  division = { 
   id = { type = 14000 id = 271 }
   name = "21st Submarine Division"
   type = submarine
   model = 0
             }

  division = { 
   id = { type = 14000 id = 272 }
   name = "22nd Submarine Division"
   type = submarine
   model = 0
                }
         }
navalunit = {
 id = { type = 14000 id = 273 }
 name = "3rd Submarine Squadron"
 location = 899

  division = { 
   id = { type = 14000 id = 274 }
   name = "31st Submarine Division"
   type = submarine
   model = 0
             }
  division = { 
   id = { type = 14000 id = 275 }
   name = "33rd Submarine Division"
   type = submarine
   model = 0
                }
  division = { 
   id = { type = 14000 id = 276 }
   name = "34th Submarine Division"
   type = submarine
   model = 0
             }
           }
navalunit = {
 id = { type = 14000 id = 279 }
 name = "4th Submarine Squadron"
 location = 901

  division = { 
   id = { type = 14000 id = 280 }
   name = "40th Submarine Division"
   type = submarine
   model = 0
             }
  division = { 
   id = { type = 14000 id = 281 }
   name = "41st Submarine Division"
   type = submarine
   model = 0
                }
}
  ######################################################
navalunit = {
 id = { type = 14000 id = 293 }
 name = "Libyan Naval Command"
 location = 1085
 leader = 6203 #Brivonesi

  division = { 
   id = { type = 14000 id = 294 }
   name = "1st Destroyer Division"
   type = destroyer 
   model = 0
             }
}

navalunit = {
	id = { type = 14000 id = 295 }
	name = "6th Submarine Squadron"
	location = 1085
	
	division = { 
		id = { type = 14000 id = 283 }
		name = "61st Submarine Division"
		type = submarine
            model = 0
	}
}

#######################################################
navalunit = {
 id = { type = 14000 id = 298 }
 name = "Red Sea Naval Command"
 location = 1285
 leader = 6202 #Balsamo

  division = { 
   id = { type = 14000 id = 299 }
   name = "3rd Destroyer Division"
   type = destroyer 
   model = 0
             }
  division = { 
   id = { type = 14000 id = 300 }
   name = "5th Destroyer Division"
   type = destroyer 
   model = 0
             }
}
	
navalunit = {
	id = { type = 14000 id = 301 }
	name = "8th Submarine Squadron"
	location = 1285
	
	division = { 
		id = { type = 14000 id = 282 }
		name = "81st Submarine Division"
		type = submarine
            model = 0
	}
}

########################################################
#Warships Undergoing Major Refits and/or Repairs#

development = {
	name = "Caio Duilio"
	type = battleship
   id = { type = 14000 id = 2299 }
      model = 1
	cost = 2 
	date = { year = 1940 month = august day = 25 }
	}

development = {
	name = "Andrea Doria"
	type = battleship
   id = { type = 14000 id = 2399 }
      model = 1
	cost = 2 
	date = { year = 1940 month = august day = 25 }
	}

#Warships Under Construction#

development = {
	name = "Eugenia di Savoia"
	type = cruiser
      model = 1
   id = { type = 14000 id = 2499 }
	cost = 1
	date = { year = 1936 month = january day = 16 }
	}

development = {
	name = "Abruzzi"
	type = cruiser
      model = 1
	cost = 2
   id = { type = 14000 id = 2599 }
	date = { year = 1937 month = december day = 1 }
	}

development = {
	name = "Garibaldi"
	type = cruiser
      model = 1
	cost = 2
   id = { type = 14000 id = 2699 }
	date = { year = 1938 month = july day = 15 }
	}
########################################################
}