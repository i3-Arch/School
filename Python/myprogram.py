#!/usr/bin/python3
#
#  i3-Arch
#
# Got bored enough to create this!
#########################

def MyBanner():
        print ("""\n\n\n\n\033[1;34m
        ######################################
        ##                                  ## 
        ##              i3-Arch             ##
        ##                                  ##
        ##    https://github.com/i3-Arch    ##
        ##                                  ##
        ######################################\n\n\033[1;m""")
        print ()

def AskYourAge():
    AskMe = input("\n\n\033[1;37m  Would you like to enter your age? [\033[1;32mY\033[1;37m/\033[1;31mN\033[1;37m]\033[1;37m:\033[1;m") 
    if AskMe.lower() == 'y':
        global TheVariable
        while True:
            try:
                TheVariable = int(input("\n\n\033[1;37m  Enter in your age: \033[1;m"))
                break
            except (ValueError):
                print("\n\n\n\033[1;41m  Oops! That was no valid number.\033[1;m\n\n")
    elif AskMe.lower() == 'n':
        print ("\n\n\033[1;31m  Exiting now then...\033[1;m\n\n") 
        exit()
    else:
        print ("\n\n\033[1;31m  Invalid option: Defaulting to No\033[1;m\n\n")
        exit()
    print ()

def CalcAge():
    if TheVariable >= 13 and TheVariable <= 20:
        print("\033[1;34m  You still have time on your side!\033[1;m")
    elif TheVariable <= 0:
        print("\033[1;41m  Impossible, your age can't be less than or equal to 0\033[1;m")
    elif TheVariable >= 1 and TheVariable <= 12:
        print("\033[1;34m  Yeah, and I'm a billionaire..\033[1;m")
    elif TheVariable >= 21 and TheVariable <= 39:
        print("\033[1;34m  Well, seems like you're in your prime!\033[1;m")
    elif TheVariable >= 40 and TheVariable <= 80:
        print("\033[1;34m  Meh, you're getting up there!\033[1;m")
    elif TheVariable >= 81 and TheVariable <= 9000:
        print("\033[1;35m  Yeah, I highly doubt that...\033[1;m")
    elif TheVariable >= 9001:
        print("\033[1;41m  ITS OVAR 9000!\033[1;m")
    else:
        print("\033[1;37m  Well, wtf have you entered....\033[1;m")
    print ()

MyBanner()
AskYourAge()
CalcAge()

print ("\033[1;37m  Good Bye!\033[1;m")
