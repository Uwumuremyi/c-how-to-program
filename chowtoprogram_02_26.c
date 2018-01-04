/* Multiples */

#include <stdio.h>

int main( void )

{

	int x;

	int y;


	printf("Enter two integers and I will tell you if the first is a multiple of the second: ");

	scanf("%d%d", &x, &y);


	if ( x % y == 0 )

	{


		printf("%d is a multiple of %d\n", x , y );

	}


	if ( x % y != 0 )

	{

		printf("%d is *****NOT***** a multiple of %d\n", x , y );

	}


	return 0;

}
