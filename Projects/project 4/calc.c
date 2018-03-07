//Mir Hossain
//CS135
//This program is an expensive calculator 

#include <stdio.h>

	int main() {

	int option;
	int prec = 0;
	float t1 = 0.0f , t2 = 0.0f;
	float sum = 0.00f , diff = 0.00f;
	float prod = 0.00f , quo = 0.00f;
		printf("This program implements a calculator. Options:\n");
		printf("1 - addition\n");
		printf("2 - subtraction\n");
		printf("3 - multiplication\n");
		printf("4 - divison\n");
		printf("5 - toggle precision\n");
		printf("6 - exit program\n");

	for(;;) {
		printf("Please enter your option: ");
		scanf("%d" , &option);

	switch(option)  {


case 1: if (prec == 0) {
		printf("Enter first term: ");
		scanf("%f" , &t1);

		printf("Enter second term: ");
		scanf("%f" , &t2);
	
	sum = t1 + t2;
		printf("The sum is: %.6f\n",sum);
	}
	else {
		printf("Enter first term: ");
		scanf("%f" , &t1);

		printf("Enter second term: ");
		scanf("%f" , &t2);
	
	sum = (double)t1 + (double) t2;
		printf("The sum is: %.15lf\n", (double) sum);
	}
	break;

case 2: if (prec == 0) {
		printf("Enter first term: ");
		scanf("%f" , &t1);

		printf("Enter second term: ");
		scanf("%f" , &t2);
	diff = t1 -t2;
		printf("The difference is: %.6f\n",diff);
	}
	else {
		printf("Enter first term: ");
		scanf("%f" , &t1);

		printf("Enter second term: ");
		scanf("%f" , &t2);
	
	diff = (double)t1 - (double)t2;
		printf("The difference is: %.15lf\n",(double) diff);
	}
	
	break;

case 3: if (prec == 0) {
		printf("Enter first term: ");
		scanf("%f" , &t1);

		printf("Enter second term: ");
		scanf("%f" , &t2);
	prod = t1 * t2;
		printf("The product is: %.6f\n" ,prod);
	}
	else {
		printf("Enter first term: ");
		scanf("%f" , &t1);

		printf("Enter second term: ");
		scanf("%f" , &t2);
	
	prod = (double)t1 * (double)t2;
		printf("The product is: %.15lf\n" ,(double) prod);
	}
	break;

case 4: if (prec == 0) {
		printf("Enter first term: ");
		scanf("%f" , &t1);

		printf("Enter second term: ");
		scanf("%f" , &t2);

	quo = t1 / t2;
	
		if (t2==0)
		printf("Cannot divide by zero!\n");
		else
		printf("The quotient is %.6f\n" , quo);}
	else {
		printf("Enter first term: ");
		scanf("%f" , &t1);

		printf("Enter second term: ");
		scanf("%f" , &t2);

	quo = (double)t1 / (double)t2;
	
		if (t2==0)
		printf("Cannot divide by zero!\n");
		else
		printf("The quotient is %.6f\n" , (double) quo);}
	
	break;





case 5: if (prec != 0){
		printf("Calculator now uses single precision\n");
	prec--;
	}
	else 
	{
		printf("Calculator now uses double precision\n");
	prec++;	
	}
	break;

case 6: {
	return 0;
	break;

	default: 
	printf("This program implements a calulator. Options\n");
	printf("1 - addition\n");
	printf("2 - subtraction\n");
	printf("3 - multiplication\n");
	printf("4 - divison\n");
	printf("5 - toggle precision\n");
	printf("6 - exit program\n");
	
	break;
	}





}
}
}
