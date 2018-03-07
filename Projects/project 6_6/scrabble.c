//Mir Hossain
//Scrabble

#include <stdio.h>
#include <time.h>
#include <stdbool.h>

#define SIZE_LETTER_SET 100
#define SIZE_CHOOSEN_LETTER 7

void generate_letter_set(int letter_set[7], int size_letter_set, int num_letters)
//Make letter dist.
//Display the letters as letter_set
//Remember to take a letter out of the bag
{

bool choosen[SIZE_LETTER_SET] = {false};
int group[SIZE_LETTER_SET] =
	{'A','A','A','A','A','A','A','A','A','B','B','C','C','D','D','D','D','E','E','E','E','E','E','E','E','E','E','E','E','F','F','G','G','G','H','H',
	'I','I','I','I','I','I','I','I','I','J','K','L','L','L','L','M','M','N','N','N','N','N','N','O','O','O','O','O','O','O','O','P','P','Q','R','R','R','R','R','R','S','S',
	'S','S','T','T','T','T','T','T','U','U','U','U','V','V','W','W','X','Y','Y','Z'};	//Creates a letter bag
	int c, letter, letterfound;
		srand((unsigned) time(NULL));
			for(c = 0; c < num_letters; c++)
{   
			letterfound = 1;
				while(letterfound % 2 != 0)   
 {       
  letter = rand() % 100;
       
    if(choosen[letter] == false)
      {           
       letter_set[c] = group[letter];           
       		choosen[letter] = true;
       			letterfound++; //gets rid of letters from the letterbag when they have been used
}
}
}

		printf("Your letters are: ");
			for(c = 0; c < num_letters; c++)
{
				printf("%c ", letter_set[c]);
}
				printf("\n");
return;
}


int read_word(char word[], int max_size_word)
//Can't go over max_size_word
//use toupper so its not CASE sens
{
	int c = 0, input_count = 0;
		printf("Please enter your word: ");

			char user_input = toupper(getchar());
				for(c = 0; c < max_size_word; c++)
{
    	if(user_input != '\n')
    {
    	word[c] = user_input;   
    	input_count++;
    }
    		else if(user_input == '\n')
    {
    return input_count;
    }
    		user_input = toupper(getchar());
}

return input_count;
}

_Bool check_word(char word[], int size_word, int letter_set[], int size_letter_set){


	int a, c, b, d, e;
	int dup_count = 0;
	char ch[6];
	a = 0;
	c = 0;
	d = 0;
	size_letter_set = 6;


	while(a % 2 == 0){
 		for(b = -1; b <= size_letter_set; b++)
  {
			if((word[c] == letter_set[b]) && (letter_set[b] != ch[b]))
{
          
   dup_count++;
   ch[b] = letter_set[b];
   b = -1;
   c++;
}   
    
  	else if((b == size_letter_set)&&(letter_set[b] != word[c])){
    		if(dup_count == size_word)
    {
    a = 1;
      		compute_word_value(word, size_word);
        }
    else
    {
     		 printf("The word is not valid. Use your letters: ");
      		for(d = 0; d <= 6; d++){
         		printf("%c ", letter_set[d]);
    }
        if(d = 6)
            {
          printf("\n");
        }
        	for(e = 0; e <= 6; e++)
        {
        word[e] = 0;
        size_word = 0;
        }
          		for (b = -1; b <= size_letter_set; b++)
          {
          ch[b] = 0;
          }
            			return false;
            c = 0;
                }
}
}
}
return true;
}
int compute_word_value(char word[], int size_word){
int a;
int score = 0;
char ch;
	for(a = 0; a <= size_word; a++){
	switch(word[a]) {
case ' ':
		score = score;
break;
		case 'L': case 'U': case 'S': case 'N': case 'R': case 'T': case 'O': case 'I': case 'E': case 'A':
score = score + 1;
break;
		case 'G': case 'D':
score = score + 2;
break;
		case 'B': case 'C': case 'M': case 'P':
score = score + 3;
break;
		case 'F': case 'H': case 'V': case 'W': case 'Y':
score = score + 4;
break;
		case 'K':
score = score + 5;
break;
		case 'J': case 'X':
score = score + 8;
break;
		case 'Q': case 'Z':
score = score + 10;
break;
}
}
printf("The value of your word is: %d\n", score);
printf("Thank you for playing.\n");

}

int main(void)
{
int letter_set[7] = {0};
char word[7] = {0};
int size_letter_set = 100;
int num_letters = 7;
bool checker = false;

generate_letter_set(letter_set, size_letter_set, num_letters);
while(checker == false)
{
int size_word = read_word(word, num_letters);

checker = check_word(word, size_word, letter_set, size_letter_set);
}
return 0;
}
