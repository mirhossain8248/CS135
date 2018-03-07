//mir hossain
//cs135
//this program does the sigma thing 

#include <stdio.h>

	int main()
{

	int i; //counter for the loop
	int n; //integer
	int series;

		series = 0;

	printf("Enter an integer number: ");
	scanf("%d" , &n);

		for(i = 1; i <= n; i++)		//increments the value of i 
{
	if (i % 2 == 0)				//checks if the number is even or odd
		(series -= i * i); 		//subtracts the number

	else 
		(series += i * i); 		//adds the number
}
	printf("The value of the series is: %d\n" , series);

return 0;
}

	
