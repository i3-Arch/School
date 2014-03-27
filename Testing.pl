#!/usr/bin/perl
# i3-Arch
##################
$user = `echo $USER` ;
print " Your Architecture is "; 
$arch = `uname -m \n` ;
print " $arch \n " ;  

print " Your IP address is ";
$ipaddress = system ("curl wtfismyip.com/text 2> /dev/null \n");

print " \n Pick a Number \n \n ";
print " ANY NUMBER \n \n ";

my $QUESTION = <STDIN>;

print " \n So you picked $QUESTION \n ";

if ($QUESTION >= 9001) { 
	
		print " ITS OVAR NINE THOUSAND ! "; }
			
elsif ($QUESTION == 0) { 
		
			print " What The Fuck \n  "; print " You could pick any number \n "; print " AND YOU FUCKING PICKED 0 \n ";}
		
unless ($QUESTION >= -1) { 
		
			print " Nice Try Faggot \n "; print " Cant fool me bro \n "; }
else { 
	
	print " Fuck You. Have A Nice Day \n ";}

print "  Thanks for using this script $user  \n";
