#include <iostream> 
#include <cstdio> 

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
  	int ch;
	char buf[BUFSIZ];
	    
	cout <<"Flushing input" <<endl;
		    
	while ((ch = cin.get()) != '\n' && ch != EOF);
			    
	cout <<"Enter some text: ";
	cout.flush();
					  
	if (cin.getline(buf, sizeof(buf)))
	{
	cout <<"You entered: " <<buf <<endl;
	}

	return 0;
}

