#!/usr/bin/perl
use strict;
use warnings;
use Term::ANSIColor;

print `clear`;

sub Main {
my $quit = 0;
until ($quit) {
	print color("white"),"\n  Enter",color("yellow")," (",color("white"),"Y",color("yellow"),"|",color("white"),"N",color("yellow"),") \n\n",color("reset");
	print color("white"),"\n  Enter", color("red")," Q",color("white")," to",color("red")," Quit \n\n", color("reset");
	print color("white"),"\n  Choice",color("yellow"),": ",color("reset");
	chomp(my $input = <STDIN>);
if ($input =~ /^[Y]?$/i) {      	# Match Yy or blank
	print color("white"),"\n\n  You entered ",color("green"),"YES",color("white"),"!\n",color("reset");} 
elsif ($input =~ /^[N]$/i) {  		# Match Nn
	print color("white"),"\n\n  You entered",color("red")," NO",color("white"),"!\n",color("reset");} 
elsif ($input =~ /^[Q]$/i) {  		# Match Qq
	print color("yellow"),"\n\n  Fine then, go ahead and leave.....\n",color("reset");
	$quit = 1;} 
else {	
	print color("red"),"\n\n  WTF",color("white")," ?",color("green")," Try again",color("white"),".\n\n",color("reset");}
 }
}

Main
#EOF
