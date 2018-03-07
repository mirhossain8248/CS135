//Mir Hossain
//This is a game of TicTacToe
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char table[3][3];
void clear_table();
void player1_move();
void player2_move();
void the_matrix(); // Like the movie
char check_three();
char check_draw();

int main() {
srand(time(NULL));
  char win;
  char draw;

  printf("This program plays the game of tic-tac-toe.");
  win = '_';
  //draw = 'd';

  clear_table();

  do {

    the_matrix(); // Like the movie

    player1_move();

    win = check_three(); // Check win for player 1

    if (win != '_')
      break;

    player2_move();

    win = check_three(); // Check win for player 2
  }

  while (win == '_');
  the_matrix(); // Shows the final move+Like the movie
  

    if (win == 'O')

    printf("Congratulations, Player 1 wins!\n");

  else

    printf("Player 1 lost, you'll get em next time.!\n");

  // the_matrix (); //Shows the final move+Like the movie

  return 0;
}

void clear_table() {
  // Creates empty spaces for the user and computer to enter stuff in

  int i, j, k;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++)
      // for(l = 0; k < 3; j++)
      table[i][j] = '_';
  }
}

void player1_move() {
  // Moves that player 1 can and can't make

  int x, y, z;

 printf("Player 1 enter your selection[row, col]: ");
  scanf("%d, %d", &x, &y);
  x--;
  y--;
  // z--;

  if (table[x][y] != '_') {
    printf("Space already taken, please try again.\n");

    player1_move();
  }

  else
    table[x][y] = 'O'; // O goes first for some reason
}

void player2_move() {
  // Needs work!!
  // Call srand in the main
  int a = rand() % 3;
  int b = rand() % 3;
  // Make it so the game would end in a tie when possible

  for (a = rand() % 3; a < 3; a++) {
    for (b = rand() % 3; b < 3; b++) // For loops causing issues in randomization?
      // for(c = 0; c < 3; c++)

      if (table[a][b] == '_')
        break;
    if (table[a][b] == '_') // Checks the rows and columns
      break;
  }
  if (a * b == 9) {
    //Kinda works ? 
      printf("Game Over, no player wins\n");
      exit(0);
    }

  else

    table[a][b] = 'X';
	//printf("Player two has entered [row , col]: %d,%d" , a, b);
}
 
void the_matrix() { // Like the movie
  //Get rid of the underscores 

   int m;

  printf("\nThe current state of the game is:\n");
  for (m = 0; m < 3; m++) {
    printf("%c %c %c\n", table[m][0], table[m][1], table[m][2]);
  }
  printf("\n");
}

char check_three() {

  int w;
  // char table[3][3];

  for (w = 0; w < 3; w++) {

    if (table[w][0] == table[w][2] && table[w][0] == table[w][1])

      return table[w][0]; // Row Check
  }

  for (w = 0; w < 3; w++) {

    if (table[0][w] == table[2][w] && table[0][w] == table[1][w])

      return table[0][w]; // Col Check
  }

  if (table[0][0] == table[1][1] && table[1][1] == table[2][2])

    return table[0][0];

  if (table[0][2] == table[1][1] && table[1][1] == table[2][0])

    return table[0][2]; // Diag Check

  return '_';
}
char check_draw() {
//Make another function for draw game?
 int r;
 int c;
	for(r = 0; r < 3; r++){
	 for(c = 0; c < 3; r++)
	  if(r * c == 9) 
  // char table[3][3]; 
	
		printf("Game over, no player wins");
}
	}

	

