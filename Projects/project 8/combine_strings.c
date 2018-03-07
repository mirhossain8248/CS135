//Mir Hossain
//This program combines strings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void merge(char *s1, char *s2, char *output)
{
	//printf(" Please enter a string of maximum 30 characters: ");
	  //scanf("%s" , &s1);
	//printf(" Please enter a string of maximum 30 characters: ");
	  //scanf("%s" , &s1);
    while(*s1 != '\0' && *s2 != '\0')
    {
    *output++ = *s1++;
    *output++ = *s2++;
    *output='\0'; }
}


void stars(char *as1, char *as2, char *output2)
{

    char *buffer=malloc(strlen(as1)+strlen(as2)+1);

    strcpy(buffer, as1);
    strcat(buffer, as2);

    int i, k = 0;

    for (i=0; i < 2*strlen(buffer)-1; i++)
        if (i%2){
            output2[i] = '*';
        } else {
            output2[i] = buffer[k];
            k++;
        }
    output2[i] = '\0';
}

	
    


int main(int argc , char *argv[])
{
     //int i = 3;
       char string1[30]; 
       char string2[30];
   

	
	if (argc == 2) {
    switch (argv[1][1]) {
      
      case 'i':
        //char string1[30]; 
	//char string2[30];

	 printf("Please enter a string of maximum 30 characters: ");
	  scanf("%s" ,string1);
	 printf("Please enter a string of maximum 30 characters: ");
	  scanf("%s" ,string2);

    char *output=malloc(strlen(string1)+strlen(string2)+1); 
	//allocate memory for both strings+1 for null
    merge(string1,string2,output); 
    printf("%s\n",output); 
	break;
	 

	case 'w':
	
	printf("Please enter a string of maximum 30 characters: ");
	  scanf("%s" ,string1);
	 printf("Please enter a string of maximum 30 characters: ");
	  scanf("%s" ,string2);
	
    char *output2=malloc(2*(strlen(string1)+strlen(string2)));
	//allocate memory for both strings+1 for null
    stars(string1, string2, output2); 
    printf("%s\n",output2); 
	break;
	}
	

}	
return 0;
}
