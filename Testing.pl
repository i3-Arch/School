#!/usr/bin/perl
# i3-Arch
##################
print " Your Architecture is ";
$arch = system ("uname -m");
print " $arch \n " ;  

print " Your IP address is ";
$ipaddress = system ("curl wtfismyip.com/text 2> /dev/null ");

print " Pick a Number  \n";
print " ANY NUMBER  \n ";

my $QUESTION = <STDIN>;

print " So you picked $QUESTION \n ";

if ($QUESTION >= 9001) { 
	
		print " ITS OVAR NINE THOUSAND ! "; }
			
			elsif ($QUESTION == 0) { 
		
			print " What The Fuck \n  "; print " You could pick any number \n "; print " AND YOU FUCKING PICKED 0 \n ";}
		
		unless ($QUESTION > 0) { 
		
			print " Nice Try Faggot \n "; print " Cant fool me bro \n "; }
else { 
	
	print " Fuck You. Have A Nice Day ";}
