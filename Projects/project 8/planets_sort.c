//mir hossain
//this program prints out plants in alph and rev order

#include<stdio.h>
#include<string.h>

void alpha(char planet[][9], char tempo[9]){
    int i, j;

	 for(i=0;i<=9;i++)
      for(j=i+1;j<=9;j++){
         if(strcmp(planet[i],planet[j])>0){
            strcpy(tempo,planet[i]);
            strcpy(planet[i],planet[j]);
            strcpy(planet[j],tempo);
         }
      }
}
void rev(char planet[][9], char tempo[9]){
    int i, j;

	 for(i=0;i<=9;i++)
      for(j=i+1;j<=9;j++){
         if(strcmp(planet[j],planet[i])>0){
            strcpy(tempo,planet[j]);
            strcpy(planet[j],planet[i]);
            strcpy(planet[i],tempo);
         }
      }
}
int main(int argc , char *argv[]){
   
   char str[][9] = {"Earth," , "Jupiter,", "Mars,", "Mercury,", "Neptune,", "Pluto,", "Saturn,", "Uranus,", "Venus"};
   char str1[][9] = {"Earth" , "Jupiter,", "Mars,", "Mercury,", "Neptune,", "Pluto,", "Saturn,", "Uranus,", "Venus,"};
   char temp[9];
  
	if (argc == 3) {
    switch (argv[2][0]) { 


    case 'a':
	alpha(str, temp);
    printf("The planets in alphabetical order are:");
   for(int i=0;i<=9;i++)
      printf("%s " , str[i]);
	printf("\n");
	break;


   case 'r':
	rev(str1, temp);
    printf("The planets in reverse alphabetical order are:");
   for(int i=0;i<=9;i++)
      printf("%s " , str1[i]);
	printf("\n");
	break;
   
}
}
return 0;
}
