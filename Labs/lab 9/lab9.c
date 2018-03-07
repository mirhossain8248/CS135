//Mir Hossain
//LAB 9

#include <stdio.h>
int swap (int *a  ,int *b  ,int *c  ,int *d  ,int *e ) {

	
	int temp1 = *a;
	*a = *b;
	*b = temp1;

	int temp2 = *c;
	*c = *d;
	*d = temp2;

	int temp3 = *e;
	*e = *a;
	*a = temp3;
}
	
int swap (int *a  ,int *b  ,int *c  ,int *d  ,int *e );
int main(void)
{
	int arr[15];
	int i;
	int *a = &arr[0], *b = &arr[7], *c = &arr[8], *d = &arr[3], *e = &arr[14];
	

		printf("Enter 15 integers\n");
			for(i = 0; i < 15; ++i) {
			scanf("%d" , &arr[i]); }
		//printf("The ints are %d " , arr[i]); checked if all the ints were recorded
					
		printf("Swapped array:\n");				
	swap(a, b, c, d, e);
		for(int j = 0; j < 15; ++j){
		printf("%d " , arr[j]); }
						
return 0;
}

		
		
