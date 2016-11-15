#!/usr/bin/python3

def AskYourAge():
    AskMe = input("Would you like to enter your age? [Y/N]: ")   
    if AskMe.lower() == 'y':
        global TheVariable
        while True:
            try:
                TheVariable = int(input("Enter in your age: "))
                break
            except (ValueError):
                print("Oops! That was no valid number.")
    elif AskMe.lower() == 'n':
        print ("Exiting now then...") 
        exit()
    else:
        print ("Invalid option: Defaulting to Yes")
    print ()

def CalcAge():
    if TheVariable >= 12 and TheVariable <= 20:
        print("You still have time on your side!")
    elif TheVariable <= 0:
        print("Impossible, your age can't be less than or equal to 0")
    elif TheVariable >= 1 and TheVariable <= 11:
        print("Yeah, and I'm a billionaire..")
    elif TheVariable >= 21 and TheVariable <= 39:
        print("Well, seems like you're in your prime!")
    else:
        print("Well, wtf have you entered.... OLDFAG?!?!?!")
    print ()

AskYourAge()
CalcAge()

print ("Good Bye!")
