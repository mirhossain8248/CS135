//Mir Hossain
//CS135
//This program will compute how broke bob is plus two more conditions 

#include <stdio.h>

	int main() 
{
	int v1, v2, v3; // v is volume
	int c1, c2, c3; // c is collection
	int p1, p2, p3; // p is price
	int bud, total;

		printf("Enter volumes and price per volume for collection 1: ");
	scanf("%d %d" , &v1, &p1);
		printf("Enter volumes and price per volume for collection 2: ");
	scanf("%d %d" , &v2, &p2);
		printf("Enter volumes and price per volume for collection 3: ");
	scanf("%d %d" , &v3, &p3);

		printf("Enter Bob's budget: ");
	scanf("%d" , &bud);

		c1 = (v1 * p1);
		c2 = (v2 * p2);
		c3 = (v3 * p3);
	total = (c1 + c2 + c3);

{  	if(bud > 0) 
		printf("(1) Bob has some money to buy collections.\n");
	else
		printf("(1) Bob does not have money to buy anything.\n");
}

{	if(bud > total)
		printf("(2) Bob has enough money to buy all three collections.\n");

	else
		printf("(2) Bob does not have enough money to buy all three collections.\n");		    
}


{	if ((bud <= c1) && (bud <= c2) || (bud <= c1) && (bud <= c3) || (bud <= c2) && (bud <= c3))

		printf("(3) At least two collections are more expensive than Bob’s budget.\n");

	else 
		printf("(3) At least two collections are cheaper than or equal to Bob’s budget.\n");
}

{	if ((c1 == c2) || (c2 == c3) || (c1 == c3))

		printf("(4) At least two collections cost the same amount of money.\n");

	else 
		printf("(4) No two collections have the same price.\n");
}

{	if ((c1 <= bud) && (c2 >= bud) && (c3 >= bud) || (c2 <= bud) && (c1 >= bud) && (c3 >= bud) || (c3 <= bud) && (c2 >= bud) && 		    (c1>=bud))

		printf("(5) Only one collection is cheaper than or equal to Bob’s budget.\n");
	else 
		printf("(5) More than one collection is cheaper than or equal to Bob’s budget or they are all more expensive.\n");
}

{	if ((bud > c1) && (bud > c2) && (bud > c3))
		printf("(6) Bob has enough money to buy any one of the three collections.\n"); 
			

	else
		printf("(6) Bob does not have enough money to buy any one of the three collections.\n"); 

}

{       if ((bud < c1) && (bud < c2) && (bud < c3))
                printf("(7) Bob does not have enough money to buy any collection.\n");

            else

                printf("(7) Bob can at least buy one collection.\n");
}
	

		
return 0;
}
	
