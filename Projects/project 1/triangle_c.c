//Mir Hossain
//CS135
//This program calculates the area and perimater of a triangle

#include <stdio.h>
#include <math.h>

	int main ()
{

	int leg_a;
	int leg_c;
	int leg_b;
	int perimeter;
	int area;
	
	printf("This program computes the area and perimeter of a right triangle.\n");
	printf("Enter the value of the legs, seperated by commas (a, c): ");
		scanf("%d," "%d" , &leg_a , &leg_c);
	

			leg_b = sqrt(leg_c * leg_c - leg_a * leg_a);
	//printf("The value of leg b is %d\n" , leg_b ); //Leg B is created here through the user entering both sides 

			area = leg_a * leg_b /2;
	printf("The area of the triangle is %d.\n" , area); 
		
			perimeter = leg_a + leg_b + sqrt(leg_a + leg_b) + sqrt(leg_a + leg_b);
	printf("The perimeter of the triangle %d.\n" , perimeter);

	
return 0;
}
