#!/bin/bash
#
#  i3-Arch
###############


red=$(tput setaf 1)
white=$(tput setaf 7)
green=$(tput setaf 2)
yellow=$(tput setaf 3)

myLoop()
{
	clear
	printf "\033[1m ${white}\n\n\n\n	++++++++++++++++++++++++++++++++++++++++++++\n \033[0m"
	printf "\033[1m	${white}++                                        ++\n \033[0m"
	printf "\033[1m ${white}	++   ${green}Do You Want to Start Monitor Mode?   ${white}++\n \033[0m"
	printf "\033[1m ${white}	++					  ++\n \033[0m"
	printf "\033[1m ${white}	++++++++++++++++++++++++++++++++++++++++++++\n\n \033[0m" 
	printf "\033[1m \n ${white}[${green}Y${white}]${green}es \n \033[0m"
	printf "\033[1m \n ${white}[${red}N${white}]${red}o \033[0m"
	printf "\033[1m \n\n ${yellow}Choice: ${white}\033[0m"
	read myChoice
	while [ "$myChoice" != "Y" -a "$myChoice" != "y" -a "$myChoice" != "N" -a "$myChoice" != "n" ];do

			clear
			printf "\033[1m${white}\n\n  ##########################\n"
			printf "  ##         	 	  ##\n"
			printf "  ##  Enter Your Choice	  ##\n"
			printf "  ##			  ##\n"
			printf "  ##      ${green}Y ${white}is ${green}Yes        ${white}##\n"
			printf "  ##      ${red}N ${white}is ${red}No     	  ${white}##\n"
			printf "  ##                      ##\n"
			printf "  ##########################\n\n \033[0m"
			printf "\033[1m \n\n ${yellow}Choice: ${white}\033[0m"
			read myChoice
	done
}

myStart()
{		
		ip a
		printf "\033[1m ${white} Example: wlp2s0 \n\n \033[0m"
        printf "\033[1m ${white} Enter Your Wireless Interface: \033[0m"
		read youriface
		netctl stop-all
        airmon-ng start "$youriface"
        ip link set "$youriface" down
        printf "\n\n"
		macchanger -A "$youriface"
        ip link set "$youriface" up
        printf "\n\n"
		ip a |grep "$youriface" && ip a |grep "radiotap"
}

myMain()
{
	myLoop
	
	if [ "$myChoice" = "y" -o "$myChoice" = "Y" ]
	then
		myStart
	else
		printf "\n\n See You Later !! \n\n"
	fi
	unset youriface
	unset myChoice
}

myMain
