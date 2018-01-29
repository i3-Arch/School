#!/bin/bash

printf "\n\n --={Title of Program}=--\n\n"
printf "\n Test, enter Y or N\n\n"
printf "\n\n [Y|N]\n\n"
printf "Choice: "
read testzone
if [ "$testzone" != "n" -o "$testzone" != "N" ]
	then
	clear
	printf "\n\n You entered something unexpected....\n\n"
	printf "\n Options are Y or N \n"
fi

while [ "$testzone" != "Y" -a "$testzone" != "N" -a "$testzone" != "n" -a "$testzone" != "y" ]
	do
	printf "\n\n --={Title of Program}=-- \n\n"
	printf "\n\n Enter [Y|N]\n\n"
	printf "\n Choice: "
	read testzone
	if [ "$testzone" == "Y" -o "$testzone" == "y" ]
		then
		printf "\n\nYou entered Yes!\n\n"
	else
		clear
		printf "\n\n You entered something unexpected....\n\n"
		printf "\n Options are Y or N \n\n"
	fi
done

echo $testzone
#EOF
