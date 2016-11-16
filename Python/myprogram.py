#!/usr/bin/python3
#
#   -[ i3-Arch ]-
#   Figured I'd play with python some
import re

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
    global AskMe
    AskMe = input("\n\n\033[1;37m  Would you like to enter your age? [\033[1;32mY\033[1;37m/\033[1;31mN\033[1;37m]:\033[1;m")
    if AskMe.lower() == 'y':
        global YourAge
        while True:
            try:
                YourAge = int(input("\n\n\033[1;37m  Enter in your age: \033[1;m"))
                break
                CalcAge()
            except (ValueError):
                print("\n\n\n\033[1;41m  Oops! That was no valid number.\033[1;m\n\n")
    elif AskMe.lower() == 'n':
        print ("\n\n\033[1;31m  Moving on then...\033[1;m\n\n")
    else:
        print ("\n\n\033[1;31m  Invalid option: Defaulting to No\033[1;m\n\n")
        print ("\n\n\033[1;37m  Moving on to next question...\033[1;m")
    print ()

def CalcAge():
    if YourAge >= 13 and YourAge <= 20:
        print("\033[1;34m  You still have time on your side!\033[1;m")
    elif YourAge <= 0:
        print("\033[1;41m  Impossible, your age can't be less than or equal to 0\033[1;m")
    elif YourAge >= 1 and YourAge <= 12:
        print("\033[1;34m  Yeah, and I'm a billionaire..\033[1;m")
    elif YourAge >= 21 and YourAge <= 39:
        print("\033[1;34m  Well, seems like you're in your prime!\033[1;m")
    elif YourAge >= 40 and YourAge <= 80:
        print("\033[1;34m  Meh, you're getting up there!\033[1;m")
    elif YourAge >= 81 and YourAge <= 9000:
        print("\033[1;35m  Yeah, I highly doubt that...\033[1;m")
    elif YourAge >= 9001:
        print("\033[1;41m  ITS OVAR 9000!\033[1;m")
    else:
        print("\033[1;37m  Well, wtf have you entered....\033[1;m")
    print ()

def AskYourName():
    AskMe2 = input("\n\n\033[1;37m Would you like to enter your name? [\033[1;32mY\033[1;37m/\033[1;31mN\033[1;37m]: \033[1;m")
    if AskMe2.lower() == 'y':
        while True:
            try:
                YourName = input("\033[1;37mPlease enter your name: \033[1;m")
                if not re.match("^[aA-zZ]*$", YourName):
                    print ("\033[1;31m \n\nError! \033[1;37mOnly letters aA-zZ allowed!\033[1;m")
                elif len(YourName) > 15:
                    print ("\033[1;31m \n\nError! \033[1;37mOnly 15 characters allowed!\033[1;m")
                elif AskMe.lower() == 'y':
                    print ("\033[1;37m\n\n Hello\033[1;31m",YourName,"\033[1;37mwhom calims to be \033[1;31m",YourAge,"\033[1;37mYears old.\033[1;m")
                else:
                    print ("\033[1;37m\n\n Hello\033[1;31m",YourName,"\033[1;m")
                break
            except (ValueError):
                print ("\033[1;31mOh no! Something unexpected happened!\033[1;m")
                exit()
    elif AskMe2.lower() == 'n': 
        print ("\033[1;31m\n\n  Exiting now then...\n\033[1;m")
        print ("\033[1;37m\n\n Good Bye! \n\n\033[1;m")
        exit()
    else:
        print ("\n\n\033[1;31m  Invalid option. Defaulting to No..\033[1;m")
        print ("\033[1;37m\n\n Good Bye! \n\n\033[1;m")
        exit()
    print ()

MyBanner()
AskYourAge()
AskYourName()
