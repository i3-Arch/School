#!/usr/bin/python3
#
#   -[ i3-Arch ]-
#   bored :3
import sh
#import urllib3

def my_menu():
    your_resp = 0
    while your_resp != 3:
        try:
            print("""\033[1;31m              
                     [===========[\033[1;37mMENU\033[1;31m]===========] 
                     \033[1;31m||\033[1;34m  |1|\033[1;37m Check icmp reply\033[1;31m    ||
                     \033[1;31m||\033[1;34m  |2|\033[1;37m Show good/bad addr\033[1;31m  ||
                     \033[1;31m||\033[1;34m  |3|\033[1;37m Exit       \033[1;31m         ||
                     [============================]\033[1;m""")
            your_resp = int(input("\n\n\033[1;34m ==> \033[1;37m Enter your choice: \033[1;m")) 
            break
        except(ValueError):
            print("\n\n\n\033[1;31m Oops! You didn't enter a valid choice. Try again.\n\n\n\033[1;m")

    if your_resp == 1:
        print("\033[1;37m \n\nHey, wassup breh...\n\n\033[1;m")
        for num in range(5,10):
            address = "8.8.8." + str(num)
            try:
                sh.ping(address, "-c 1", _out="/dev/null")
                print("Success:", address, "is up")
                with open('gaddresses.txt', 'a') as out:
                    out.write(address + '\n')
                with open('baddresses.txt', 'a') as out:
                    out.write('\n')
            except sh.ErrorReturnCode_1:
                print("Error:", address, "not responding")
                with open('baddresses.txt', 'a') as out:
                    out.write(address + '\n')
                with open('gaddresses.txt', 'a') as out:
                    out.write('\n')
        my_menu()
    elif your_resp == 2:
        print("\033[1;34m \n\nGood Addresses...\n\n\033[1;m")
        print(sh.cat('gaddresses.txt'))
        print("\033[1;31m \n\nBad Addresses...\n\n\033[1;m")
        print(sh.cat('baddresses.txt'))
        my_menu()
    elif your_resp == 3:
        print("\033[1;34m\n\n See you later!\033[1;m")
        sh.rm('gaddresses.txt')
        sh.rm('baddresses.txt')
    else:
        print("\033[1;41m\n\n\n Sorry, I didn't understand your choice...\n\n\n\033[1;m")
        print("\033[1;41m\n\n Please try again.\n\n\n\033[1;m")
        my_menu()
    print()

my_menu()
