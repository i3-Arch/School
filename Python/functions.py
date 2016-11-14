#!/usr/bin/python3

def yesno():
    askme = input("Would you like to enter thevariable? [Y/N]: ")   
    if askme.lower() == 'y':
        global thevariable
        thevariable = int(input("Enter in value for thevariable: "))
    elif askme.lower() == 'n':
        print ("Exiting now then...") 
        exit()
    else:
        print ("Invalid option: Defaulting to Yes")
    print ()

def calcme():
    if thevariable >= 1:
        print("Value of thevariable is greater than or equal to 1")
    elif thevariable <= 0:
        print("Value of thevariable is less than or equal to 0")
    else:
        print("Well, wtf have you entered....")
    print ()

yesno()
calcme()

print ("Good Bye!")
