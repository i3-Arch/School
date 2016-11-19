#!/usr/bin/python3
#
#   -[ i3-Arch ]-
#   Figured I'd play with python some


def my_banner():
    print("""\n\n\n\n\033[1;34m
                ######################################
                ##                                  ##
                ##              i3-Arch             ##
                ##                                  ##
                ##    https://github.com/i3-Arch    ##
                ##                                  ##
                ######################################\n\n\n\n\033[1;m""")
    print()

def my_menu():
    your_resp = 0
    while your_resp != 3:
        try:
            print("""\033[1;31m              
                     [=========[\033[1;37mMENU\033[1;31m]=========] 
                     \033[1;31m||\033[1;34m  |1|\033[1;37m Do something\033[1;31m    ||
                     \033[1;31m||\033[1;34m  |2|\033[1;37m Something else\033[1;31m  ||
                     \033[1;31m||\033[1;34m  |3|\033[1;37m Exit       \033[1;31m     ||
                     [========================]\033[1;m""")
            your_resp = int(input("\n\n\033[1;34m ==> \033[1;37m Enter your choice: \033[1;m")) 
            break
        except(ValueError):
            print("\n\n\n\033[1;31m Oops! You didn't enter a valid choice. Try again.\n\n\n\033[1;m")

    if your_resp == 1:
        print("\033[1;37m \n\nHey, wassup breh...\n\n\033[1;m")
        my_menu()
    elif your_resp == 2:
        print("\033[1;37m \n\n==> Also this...\n\n\033[1;m")
        my_menu()
    elif your_resp == 3:
        print("\033[1;34m\n\n See you later!\033[1;m")
    else:
        print("\033[1;41m\n\n\n Sorry, I didn't understand your choice...\n\n\n\033[1;m")
        print("\033[1;41m\n\n Please try again.\n\n\n\033[1;m")
        my_menu()
    print()

my_banner()
my_menu()
