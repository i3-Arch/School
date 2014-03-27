#!/usr/bin/perl
# i3-Arch
################## 
use strict;
use warnings;
use Term::ANSIColor;
print `clear`;
print color("red"), "This was created by i3-Arch ! \n", color("reset");
print color("green"), " Just A Simple Perl Script \n", color("reset");
print " Your Architecture is ";
my ($arch) = `uname -m \n` ;
print (" $arch \n ") ;  

print color("yellow"), " Your IP address is ", color("reset"), color("bold blue");
my ($ipaddress) = system ("curl wtfismyip.com/text 2> /dev/null \n"), color("reset");

print color("green"), " \n Pick a Number \n \n ", color("reset");
print color("magenta"), " ANY NUMBER \n \n ", color("reset");

my $QUESTION = <STDIN>;

print color("blue"), " \n So you picked $QUESTION \n ", color("reset");

if ($QUESTION >= 9001) { 
	
			print color("red"), "ITS OVAR NINE THOUSAND ! \n ", color("reset"); }
			
elsif ($QUESTION == 0) { 
		
			print color("green"), " What The Fuck \n \n", color("reset"); 
			print color("white"), " You could pick any number \n \n ", color("reset"); 
			print color("red"), " AND YOU FUCKING PICKED 0 \n \n",color("reset") ;}
		
unless ($QUESTION >= -1) { 
		
			print color("yellow"), " Nice Try Faggot \n \n ", color("reset"); 
			print color("red"), " Cant fool me bro \n \n ", color("reset") ;}
else { 
	
	print color("green"), " \n Fuck You. Have A Nice Day \n ", color("reset");}

print color("blue"), "  \n Thanks for using this script  \n", color("reset");
print color("red"), " \n Here is the output of netstat -tupNa  \n ", color("reset");
print color("green");
my ($HUE) = system ("\n netstat -tupNa > tst023 ; cat tst023 ; rm tst023 2> /dev/null \n") ;
print color("reset");
