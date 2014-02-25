#!/usr/bin/perl
use strict;
use warnings;
	print "What is your name? ";

my $name = <STDIN>;

	print "Hello, $name!\n";
	print "What is your age? ";

my $age = <STDIN>;

	print "Your age is $age!\n";
	print "So you are ", ($name)  ;
	print "And your age is ", ($age)  ;
