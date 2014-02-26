#!/usr/bin/perl
# By Jeremy Marlow
# My First Perl Script
use strict;
use warnings;
use Term::ANSIScreen qw(cls);

my $clear = cls();

	print $clear ;
	print "What is your name? ";

my $name = <STDIN>;

	print "Sup, $name \n" ;

	print "So how old are you $name \n ";

my $age = <STDIN>;

if ($age >= 18)		{ 
	
	print $clear ;
	print "can i haz sex wif you $name \n" ;
}

else { 

	print " y u no 18, why you $age \n" ;
}
