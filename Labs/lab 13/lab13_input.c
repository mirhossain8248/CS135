#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc , char *argv[]) {
FILE *fp;

char age[10];
char len[10];
char name[100];
char str[100]; //where everything is stored into

int age1;
int name2;
int i;
//int name;

	printf("This program reads and saves ages and names in a binary file.\n");
	fgets("%d" , "%s" , &argv[0], &argv[1]);
	fp = fopen("lab13_output.txt" , "w"); //creates a txt file to open
do{
	sprintf(age, "%d", argv[0]);
	sprintf(name, "%s", argv[1]:);

	strcat(str, age);
	strcat(str, " ");
	strcat(str, name);
}
	while((age != /n));

	fwrite(str , 1 , sizeof(str)+ 1 , fp);	//writes the string into the txt file
	fclose(fp); //closes the writing

return 0;
}
	
