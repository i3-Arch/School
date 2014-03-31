#!/usr/bin/perl
use strict;
use warnings;
&main();

    sub main {
        print "Do you want to import a list(Y/N)";
        my $input = <STDIN>;
        chomp $input;
        if($input =~ m/^[Y]$/i) {
            &importfile();
        } elsif ($input =~ m/^[N]$/i) {
            print "you said no";
        } else {
           print "Invalid option";
        }
    }
    sub importfile
    {
        print "file name please ";
        my $file = STDIN;
        # import and process the file here.....
        &main();
    } 
