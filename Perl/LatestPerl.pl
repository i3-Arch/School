#!/usr/bin/perl
###########################################
##	    |          	         	 ##
## i3-Arch  |  Just A Simple PERL Script ##
##		 #Newb2Perl		 ##
###########################################

#use warnings;
use strict;
use Term::ANSIColor;

sub Greetz{
	print `clear`;
	print color("yellow"), "\n\n  This was created by ----> ", color("white"), "i3-Arch \n", color("reset");
	print color("blue"), "\n\n  Sup TrewChainz \n\n";
}

sub Archit{
	print color("green"), "\n\n  Your Architecture is ---> ";
	my ($arch) = `uname -m \n` ;
	print color("white"), (" $arch \n ");  
}

sub IPadd{
	#print color("green"), "\n\n Would you like to see your external IP address? \n\n";
	#print color("yellow"), "\n Choose 'Y' or 'N' \n\n";        ## Still playin with this
	#print color("white"), "\n Choice: ";
	#my $Answer = <STDIN>;
	#if ($Answer eq 'Y' or 'y') {
	print color("yellow"), " Your external IP address is ", color("reset"), color("bold blue");
	my ($ipaddress) = system ("curl wtfismyip.com/text 2> /dev/null \n"), color("reset");
	#}else {
	#	print color("yellow"), "\n\n Fine then...\n\n";}
}

sub Numba{
	print color("green"), "\n  Pick a Number \n\n", color("reset");
	print color("blue"), "  ANY NUMBER \n\n", color("reset");
	print color("white"), "\n  Number: ";
	my $QUESTION = <STDIN>;
	print color("blue"), " \n  So you picked $QUESTION \n ", color("reset");
	if ($QUESTION >= 9001) { 
			print color("red"), "\n\n  ITS OVAR NINE THOUSAND ! \n ", color("reset"); }
	elsif ($QUESTION <= 0) { 	
			print color("green"), "  What The Fuck \n\n", color("reset"); 
			print color("white"), "  You could pick any number \n\n", color("reset"); 
			print color("yellow"), "  AND YOU FUCKING PICKED 0 or Random symbol(s)/letters \n\n",color("reset") ;}
	else {
		print color("white"), "\n\n  Ok?  I'm guessing that's a special number to you ?!?!?!? \n\n";}
}

sub Stat{
	print color("white"), "\n  Here is the output of ", color("yellow"), "netstat -tupNa  \n", color("reset");
	print color("green");
	my ($HUE) = system ("\n  netstat -tupNa > tst023 ; cat tst023 ; rm tst023 2> /dev/null \n");
	print color("reset");
}	

sub Pause{
	local( $| ) = ( 1 );
	print color("white"), " \n  Press", color("red"), "<Enter>", color("white"), "to stop script: \n\n", color("reset");
	my $resp = <STDIN>;	
}

Pause
Stat
Numba
IPadd
Archit
Greetz

#EOF
