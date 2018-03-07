#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void remove_filename (char* url){

	 printf ("%s\n", url);
	char *del = &url[strlen(url)];

    while (del > url && *del != '/')
        del--;

    if (*del== '/')
        *del= '\0';

    return;


}
void remove_filename (char* url);
int main(){
	char str[] = "http://www.knking.com/index.html";
	// rem;
	//printf("Enter the URL: ");
		//scanf(%s , url);

	remove_filename (str);
		printf("The new URL is: %s\n" , str);

return 0;
}
