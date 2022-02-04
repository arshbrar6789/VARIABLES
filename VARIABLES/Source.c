#include<stdio.h>
int main()
{
	int age; // Declared a variable of integer type 

	age = 24;
	printf("My age is %d\n", age); // retrieving the value from age 
	
	age = 21;
	printf("My age is %d\n", age); // retrieving the value from age 


	//

	age = 21;
	printf("%s is %d old.\n", "Arsh", age);
	printf("That's %d months\n", age * 12);


	/*Going to use Char type variables*/

	char x, y, z;
	x = 'A';
	y = 'B';
	z = 'C';

	printf("It is easy as %c, %c, %c\n", x,y,z);

	return(0);

}