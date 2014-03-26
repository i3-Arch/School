#!/usr/bin/perl
# By i3-Arch
# My First Perl Script
use strict;
use warnings;
	print " What is your lucky number \n " ;

my $number = <STDIN>;

if ($number == 3)  {
	print " Thats my lucky number too \n" ;
}
	print " \n" x 3 ;
	print "Hey, What is your name? \n";

my $name = <STDIN>;

	print "Sup, $name \n" ;
	print " \n" x 3 ;
	print "So how old are you $name \n ";

my $age = <STDIN>;

if ($age >= 18) 	{ 
	
	print " \n" x 6 ;
	print " Ehhhhhhh   .. u iz 18 or older $name \n" ;
}

else 	{ 
	print " $name y u no 18, why you $age \n" ;}
print " \n What would be your favorite color first? Enter  1 for Blue or 2 for Green  " ;

my $colors = <STDIN>;

if ($colors == 1)	{

	print " Blue is my favorite hands down anyways" ;
	print " \n " x 6 ;
}

elsif ($colors == 2)  	{
	print " \n Seriously... You selected Green over blue.... Meh... Green isnt to bad ;) " ;
	print " \n " x 6 ;
}
else	{
	print " Y u no select blue... y u select $colors " ;}

print " Did you like my First Script :: CHOOSE 1 for YES or 2 for NO \n " ;

my $decision = <STDIN>;

if ($decision == 1) {

	print " Thanks, it's only my first perl script ! \n " ; 
}

elsif ($decision == 2) {

	print " Fuck You Too , Where is your scripts at bitch ? \n " ;
}

else	{
	print " You're doing it wrong \n "
}
