// Mir Hossain
// CS135-Lab7

#include <stdio.h>

int compute_area ();
int compute_volume ();
int main ()

{

int l, w, h;

	printf("Enter the dimensions of the square prism (l, w, h) ");
	scanf("%d, %d, %d" , &l, &w, &h);
	printf("The area of the prism is: %d\n " , compute_area (l, w , h));
	
	printf("The volume of the prism is: %d\n " , compute_volume(l , w, h));

		return 0;
}
int compute_area (int l, int w, int h)
{
	int sa;
	sa = 2*h*w +2*h*l+2*l*w;
	return sa;
}
int compute_volume (int l, int w, int h)
{	
	int v;
	v = l * h * w;
	return v;
}






