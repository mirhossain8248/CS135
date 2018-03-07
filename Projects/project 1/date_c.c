//Mir Hossain
//CS135
//This program prints dates in a tabular format

#include <stdio.h>

int main()

{
	int d1, y1, m1;
	int d2, y2, m2;
	int d3, y3, m3;
	int d4, y4, m4; // d = date y = year m = month

		printf("Enter date 1 (dd/mm/yyyy): \n");
	scanf("%2d/%2d/%4d" , &d1 , &m1 , &y1);

		printf("Enter date 2 (dd/mm/yyyy): \n");
	scanf("%2d/%2d/%4d" , &d2 , &m2 , &y2);

		printf("Enter date 3 (dd/mm/yyyy): \n");
	scanf("%2d/%2d/%4d" , &d3 , &m3 , &y3);
	
		printf("Enter date 4 (dd/mm/yyyy): \n");
	scanf("%2d/%2d/%4d" , &d4 , &m4 , &y4);

		printf("Year\t Month\t Day\n");

		printf("%.4d\t%.2d\t %-.2d\n" , y1, m1, d1);
		printf("%.4d\t%.2d\t %-.2d\n" , y2, m2, d2);
		printf("%.4d\t%.2d\t %-.2d\n" , y3, m3, d3);
		printf("%.4d\t%.2d\t %-.2d\n" , y4, m4, d4);
		

	


return 0;
}
