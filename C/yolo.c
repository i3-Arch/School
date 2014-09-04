#include <stdio.h> 
					/*   Just an example*/
int main(void) 
{
  			int   ch;
    		char  buf[BUFSIZ];
	  
	    	puts("Flushing input");
		  
		    while ((ch = getchar()) != '\n' && ch != EOF);
			  
			printf ("Enter some text: ");
				  
			if (fgets(buf, sizeof(buf), stdin))
			{
			printf ("You entered: %s", buf);
			}
							  
			return 0;
}
