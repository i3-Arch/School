// Created by i3-Arch
#include <iostream>
#include <string>

 int main ()
 {
	
   int DatChoice1 = 0;
   std::string mystring;
   mystring = "Hey, How are you doing today?";
   std::cout << mystring << std::endl;
   mystring = "(1) Happy (2) Sad (3) Neither";
   std::cout << mystring << std::endl;
   mystring = "Choice: ";
   std::cout << mystring;
   std::cin >> DatChoice1;
   std::cout << "Your choice was: " << DatChoice1 << std::endl;
   if(DatChoice1 == 1)
   {
	 	mystring = "Glad to hear !";
   		std::cout << mystring << std::endl;
   }
   else if(DatChoice1 == 2) 
   {
   		mystring = "Sorry to hear that :( - Be HAPPY :) ";
   		std::cout << mystring << std::endl;
   }
   else if(DatChoice1 == 3) 
   {
		mystring = "Not sure what to think";
		std::cout << mystring << std::endl;
   }
   return 0;
}
