//Mir Hossain
//CS135
//This program takes a number from the user and computes the square root using a loop or something like that

#include <stdio.h>
#include <math.h>

	int main()
{

	double n; //n will be the number entered by the user
	double i=1.0f; //i is the guesses that this program will makes

		printf("Enter a number: ");
		scanf("%lf" , &n);

	while((fabs((i*i)-n)) >= (1e-5))

	{ 
		printf("%10.5f\n", i); 			//prints out the guesses
	i = (i + (n / i)) / 2.0; 			//calculates the guesses 
	}
	
		printf("Estimated square root of %.5f : %.5f\n" , n , sqrt(n));

return 0 ;
}

	 
