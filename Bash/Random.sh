#!/bin/bash

Greet() {
	clear
	printf "\n\nHey, Welcome to this simple script\n\n"
cat <<"EOT"
	##################################################
	##################################################
	####	   				      ####
	####	             i3-Arch	              ####
	####		   			      ####
	####	    https://github.com/i3-Arch        ####
	####  					      ####
	##################################################
	##################################################
EOT
	sleep 3
}

RunPerl() {
	wget https://raw.githubusercontent.com/i3-Arch/School/master/Perl/LatestPerl.pl 1> /dev/null
	perl LatestPerl.pl
	rm -f LatestPerl.pl
}

ShouldYou() {
	printf "\n\n Woudl you like to run my simple perl script? \n\n"
	printf "\n (Y) or (N) \n"
	printf "\n Choice: "
	read craychoice
	if [ "$craychoice" = Y -o "$craychoice" = y ];
		then
		RunPerl
	fi
}

Main() {
	Greet
	ShouldYou
	unset craychoice
}

Main



#EOF
