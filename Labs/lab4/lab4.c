#include <stdio.h>

	int main()
{

	int budget;
	int price;
	int item;
	int remain;

	

	printf("Please enter your budget: ");
	scanf("%d" , &budget);

	while (budget >= 0)

	{
		printf("Please enter the items and price: ");
		scanf("%d , %d" , &item ,  &price);
		(budget -= item * price);
	}

		if (budget < 0) {
	
		printf("You can not buy the last items.");
		printf("Your remaining budget is %d\n" , budget + item * price);
	}

		else {
		printf("You can buy all the items.");
		printf("Your remaining budget is %d\n" , budget);
	}

	return 0;
}

	
