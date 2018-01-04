/*Compairing integers*/

#include <stdio.h>


int main( void )

{

	int number1;

	int number2;

	
	printf("Enter first integer: ");

	scanf("%d", &number1);


	printf("Enter second integer: ");

	scanf("%d", &number2);


	if ( number1 > number2 )

	{

		printf("%d is larger.\n", number1);

	}

	if (number2 > number1 )

	{

		printf("%d is larger.\n", number2);

	}

	if ( number1 == number2 )

	{

		printf("These numbers are equal\n");

	}

	return 0;

}
