#!/usr/bin/perl
use strict;
use warnings;

	print " \n ";
	print " Chose a color  \n 1 for Blue \n 2 for Pink \n";

my $color = <STDIN> ;

if ($color == 1)  {
	print " Thats my favorite color bro ! \n" ;
}
else {
	print " Y U NO LIKE BLUE \n ";
}
	print
	print "Hey, What linux distro would you use first :: CHOICES :: Arch or  Ubuntu \n   1 for Arch \n 2 for Ubuntu \n ";

my $distro = <STDIN>;

if ($distro == 2 ) {
	print " You're such a fggt \n ";
}
elsif ($distro == 1) { 
	print "Sup, Dude \n" ;
	print " Lets hangout sometime bro \n " ;
	print " \n " ;
}
else {
	print " TRY AGAIN FGGT \n ";
}
	print " Are you male or female \n  1 for Male \n 2 for Female \n " ;

my $gender = <STDIN>;

if ($gender == 1) {
	print " Wish you were a female \n ";
	print " I'd stick my peenor in you \n ";
	print " If you look hot anyway \n ";
}
elsif ($gender == 2) {
	print " This may just work \n ";
	print "So how old are you ? \n ";
}
else {
	print " WTF ARE YOU !?!?!? \n";
}
my $age = <STDIN>;

if ($age >= 18)  	{ 
	
	print " \n" x 6 ;
	print "letz haz sex now  \n" ;
}
unless ($gender == 1) {
	print " NO, JUST NO";
}
else 	{ 
	print " y u no 18, why you $age \n" ;
}
