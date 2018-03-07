#include <stdio.h>

int main ()

{

	int imin;
	int week;
	int day;
	int hour;
	int min;


	printf("Enter a number of minutes: ");
	scanf("%d" , &imin);

	week = (imin / 10080);
	day = (imin % 10080) /1440;
	hour = (imin % 1440) /60;
	min = (imin % 60);

	printf("This represents %d weeks, %d days, %d hours, and %d minutes.\n" , week, day, hour, min);


return 0;

}	

