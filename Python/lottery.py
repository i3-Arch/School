#!/usr/bin/python2
import random

print('\033[94m===========================================')
print('\033[94m++++++++++++ \033[92mLOTTERY GENERATOR \033[94m++++++++++++')
print('\033[94m++++++++++++++\033[93m[ \033[97mVERSION 1.0 \033[93m]\033[94m++++++++++++++')
print('\033[94m===========================================')
print '\n\n'

def Megamill():
    integer = []
    for number in range( 0 , 5 ):
        integer.append(random.randint( 1 , 70))
    return integer
print('\n\033[91m The MegaMillion numbers are: \033[97m{}'. format(Megamill()))

def Megaball():
    integer = []
    for number in range(1):
        integer.append(random.randint( 1 , 25 ))
    return integer
print('\033[91m The Megaball is: \033[97m{}'. format(Megaball()))


def Powernum():
    integer = []
    for number in range(0 , 5):
        integer.append(random.randint( 1 , 69 ))
    return integer
print('\n\033[91m The Powerball numbers are: \033[97m {}'. format(Powernum()))


def Powerball():
    integer = []
    for number in range(1):
        integer.append(random.randint( 1 , 26 ))
    return integer
print('\033[91m The Powerball is: \033[97m {}'. format(Powerball()))


def Pick3():
    integer = []
    for number in range(0 , 3):
        integer.append(random.randint( 0 , 9 ))
    return integer
print('\n\033[92m The Pick 3 are \033[97m{}'. format(Pick3()))


def Pick4():
    integer = []
    for number in range(0 , 4):
        integer.append(random.randint( 0 , 9 ))
    return integer
print('\n\033[92m The pick 4 are: \033[97m{}'. format(Pick4()))
print '\n\n'


print(' PICK 5 COMING SOON')
