#include <stdio.h>

int digit(int x, int y);	
int main() {
	int n, k, place;
	//place = 0;

	printf("Enter two positive integers (n, k): ");
		scanf("%d,  %d" , &n, &k);
			place = digit(n, k);
		if (place == -1  ) {
			printf("\nEnter two Positive integers (n, k): ");
				scanf("%d,  %d" , &n, &k); }
		else {
			printf("\nThe k=%d digit of %d is: %d\n" , k, n, place); 
			}
		
}

int digit(int x, int y) {

		int z = 1;
			while( z < y && x >= 0) {
				x = x/10;
					z++;
					}
			if(x == 0)
				return 0;
			else
				return x % 10;
}  




