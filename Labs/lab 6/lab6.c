#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define N 100

int main()
{

 	int count[26] = {0};
	int i;
	char ch ='a';


	printf("Enter a sentence (end by '.'): ");


	do {
	ch = getchar();

	count[(tolower(ch) - 'a')]++; 

	} while (ch != '.'); 

	for (i = 0; i < 26; i++) {
    
    if (count[i] > 0) 
        printf("'%c' has %2d occurrences.\n", i + 'a', count[i]); 
   }

       
return 0;
} 

