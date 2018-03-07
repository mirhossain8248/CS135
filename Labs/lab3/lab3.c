//mir hossain
//lab 3

#include <stdio.h>

	int main()
{

	int w;
	int x;
	int y;
	int z;
	
	

		printf("Enter 4 integers (w, x, y, z): ");
	scanf("%d, %d, %d, %d" , &w, &x, &y, &z);

{	if ((x > w) && (x > y) && (x > z))
		printf("Condition 1 is false\n");
	else  
		printf("Condtion 1 is true\n"); 
}

{	if ((w + x) <= (y + z))
		printf("Condition 2 is true\n");
	else
		printf("Condition 2 is false\n");
}

{	if ((x % 2 == 0) && (w % 2 == 0) && (y % 2 == 0) && (z % 2 ==0))
		printf("Condition 3 is true\n");
	else
		printf("Condition 3 is false\n");	
}	

return 0;
}
	

	


















