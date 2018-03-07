#include <stdio.h>

	int main()
{

	int space;
	int tab;
	int new;
	char ch;

	space = 0;
	tab = 0;
	new = 0;

	printf("Enter a sentence (end by ‘.’or‘?’ or ‘!’): ");

	do { 

	ch = getchar();

	switch(ch) {

	case ' ':
	space++;
	break;

	case '\n':
	new++; 
	break;

	case '\t':
	tab++;
	break;

	default:
	break; }

	} while( (ch != '.') && (ch != '?') && (ch != '!')  ); 

	printf("Number of space characters: %d\n" , space);
	printf("Number of new line characters: %d\n" , new);
	printf("Number of tabs: %d\n" , tab);

	return 0;
	}
 
	

	
