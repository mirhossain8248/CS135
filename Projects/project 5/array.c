//Mir Hossain
//CS135
//This is an array program that does something useless

#include <stdio.h>
#include <stdbool.h>
#define N 10


int main()
{
  int row;
  int col;
  int x;
  int y;
  int i = 9;
  int count[N] = {0}; //sets all values inside the array equal to 0
 

  		printf("Enter the size of your array: ");
  	scanf("%d %d", &row, &col);
  int arr[row][col];

  //This will read the rows
  for (int x = 0; x < row; ++x) {
		printf("Enter row %d: ", x);
	
    	for (int y = 0; y < col; ++y) {
		scanf("%d", &arr[x][y]);
        
		
    }
  }

  //This will create a count for the rows
  for (x = 0;  x < row; ++x) {
    for (y = 0; y < col; ++y) {
   	++count[arr[x][y]]; // stores the array in 'count' now also count is incremented
    }
  }

  //This will count if digits repeat in the rows and print it
 		 printf("\nTotal count for each digit:\n");
  for (int j = 0; j < 10; ++j) {
    			printf("Digit %d occurs %d time%s\n", j, count[j], count[j] > 1 ? "s" : ""); // ? : just a normal if else
  }

  return 0;
} 
