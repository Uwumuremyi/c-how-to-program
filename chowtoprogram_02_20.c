/* Diameter, Circumferance and Area of a Circle */

#include <stdio.h>

int main( void )

{

	float radius;


	printf("Enter the radius of a circle: ");

	scanf("%f", &radius);

	
	printf("Diameter is %f\n", radius * 2);

	printf("Area is %f\n", 3.14159 * radius * radius);

	
	return 0;

}

	
