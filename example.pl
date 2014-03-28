#!/usr/bin/perl
use warnings;
use strict;
use Data::Dumper;
if (&prompt_yn("CONTINUE")){
  my @res = split(" ",&prompt("ENTER INPUT")) ;
    print Dumper @res;
    }
    else{
      print "EXIT\n";
      }
sub prompt_yn{
  	 my ($query) = @_;
    $query = $query . " (Y/N): ";
    print "$query";
    while (<>) {
    $_ =~ s/^\s+|\s+$//g;
    $_ =~ s/\r|\n//g;
    if ($_ =~ /\S/){
	if ($_ =~ /^y$|^yes$/i){
	 print "You have entered Y\n";
	 return 1;
  }
	 elsif ($_ =~ /^n$|^no$/i){
	 return 0;
	        }
     else{
		  }
       }
     print "$query";
	}
}
sub prompt{
   my ($query) = @_;
   $query = $query . ": ";
   print "$query";
   while (<>) {
   $_ =~ s/^\s+|\s+$//g;
   $_ =~ s/\r|\n//g;
   if ($_ =~ /\S/){
	 return $_;
  }
   print "$query";
  }
}
