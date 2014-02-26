#!/usr/bin/perl
# By i3-Arch
# My First Perl Script
use strict;
use warnings;
use Term::ANSIScreen qw(cls);

my $clear = cls();

	print $clear ;
	print " What is your lucky number \n " ;

my $number = <STDIN>;

if ($number == 13)  {
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
	print "letz haz sex now $name \n" ;
}

else 	{ 
	print $clear ;
	print " $name y u no 18, why you $age \n" ;
}
