#!/bin/bash

###########################################################
##							 ##
##	I forgot how to bash so i tested myself lol	 ##
##		 					 ##
###########################################################


askMe(){
	clear
	printf "\n\n\n\n\n"
	printf " [1] Proc Version \n"
	printf " [2] df -h \n"
	printf " [3] Exit \n"
	printf "\n Enter Your Choice: "
	read myChoice
}


myLoop(){
	while [ "$myChoice" -ne 3 ]; do
		
		printf "\n\n\n"
		checkAns   # To call checkAns obviously
		printf "\n\n\n\n\n"
		printf " [1] Proc Version \n"
		printf " [2] df -h \n"
		printf " [3] Exit \n"
		printf "\n Enter Your Choice: "
		read myChoice
	done
}


checkAns(){
	if [ "$myChoice" -eq 1 ]
		then
		cat /proc/version
	elif [ "$myChoice" -eq 2 ]
		then
		df -h
	else
		printf "\n\n Goodbye! \n\n"
	fi
}

myMain(){
	askMe
	myLoop
	unset myChoice
}

myMain
#EOF
