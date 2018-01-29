#!/bin/bash

YESORNO=0

error_exit() {
	echo "$1" 1>&2
	exit 1
}

while [ "$YESORNO" -ne 1 -a "$YESORNO" -ne 2 -a "$YESORNO" -ne 3 ]; do
	printf "\n\n\n\n"
	printf "\n\n[1] bleh\n[2] Bleh\n[3] bleh\n"
	printf "\n Choice: "
	read YESORNO
	if [ "$YESORNO" -ne 1 -a "$YESORNO" -ne 2 -a "$YESORNO" -ne 3 ]
		then
		printf "\nYou Entered: $YESORNO\n"
		printf "\nChoices are 1,2, or 3\n"
	elif [ "$YESORNO" == 1 -o "$YESORNO" == 2 -o "$YESORNO" == 3 ]
		then
		printf "\n\n Thank You! - Moving On! \n\n"
	else
		#printf "\n\nDefaulting to option 1\n\n"
		#YESORNO=1
		clear
		error_exit "Something went wrong.. Did you enter a number?!?!"
	fi
done

printf "$YESORNO \n"
