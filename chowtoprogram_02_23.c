/* Largest and smallest integers */

#include <stdio.h>

int main( void )

{

	int largest;

	int smallest;

	
	int num1;

	int num2;

	int num3;

	int num4;

	int num5;


	printf("Enter 5 integers: ");

	scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5 );


	largest = num1;

	if ( num2 > largest )

	{

		largest = num2;

	}

	if ( num3 > largest )

	{

		largest = num3;

	}

	if ( num4 > largest )

	{

		largest = num4;

	}

	if ( num5 > largest )

	{

		largest = num5;

	}


	smallest = num1;

	
	if ( num2 < smallest )

	{

		smallest = num2;

	}

	if ( num3 < smallest )

	{

		smallest = num3;

	}

	if ( num4 < smallest )

	{

		smallest = num4;

	}


	if ( num5 < smallest )

	{

		smallest = num5;

	}

	
	printf("Smallest is %d\n", smallest);

	printf("Largest is %d\n", largest);

	
	return 0;

}
