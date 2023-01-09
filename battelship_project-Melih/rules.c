// Regeln des Battelship Games

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ROWS 10 // Zeilen fuerr das Spielfeld
#define NUM_COLUMNS 10 // Spalten fuerr das Spielfeld

//Funktion druckt das Spielfeld
void print_game_field(char game_field[NUM_ROWS][NUM_COLUMNS]) {
  for (int i = 0; i < NUM_ROWS; i++) {
    for (int j = 0; j < NUM_COLUMNS; j++) {
      printf("%c ", game_field[i][j]);
    }
    printf("\n");
  }
}

//Zeigt das Begruessungsmenue
int welcome_screen(void)
{ int choice = 0;
  while (choice != 1 || 2)
  {
  printf("Press 1 to start the Game (1).\n. Press 2 to quit it.\n");
  // Nimmt die Nutzereingabe entgegen und fuehrt je nachdem was eingegeben wurde 1 oder 2 aus
  scanf("%d", &choice);
  if (choice==1)
  {
  printf("*****************************************\n");
  printf("*****************************************\n");
  printf("***************Battleship****************\n");
  printf("*****************************************\n");
  printf("*****************************************\n");
  }else if (choice ==2)
  {
  printf("Have a nice day!\n");
  exit(0);
  }else
  {
    printf("This is not a valid value!\n");
  }
  printf("\n");
}
}

// Funktion zum Angreifen
void attack(char game_field[NUM_ROWS][NUM_COLUMNS]) {
  int row, col;
  printf("Enter the row and column to attack: ");
  scanf("%d %d", &row, &col);

  if (game_field[row][col] == 'O') { // O bedeutet Wasser
    printf("Miss!\n");
    game_field[row][col] = 'X'; // An die Stelle, wo das O war steht jetzt ein X
  } else if (game_field[row][col] == 'X' || game_field[row][col] == 'H') {
    printf("You've already attacked this location.\n");
  } else {
    printf("Hit!\n");
    game_field[row][col] = 'H';
  }
}


int main()
{ /* Wie setzt man die Schiffe?
    
        
*/
   //welcome_screen();

    char game_field[NUM_ROWS][NUM_COLUMNS];
    // Initialisiert das Spielfeld
    for (int i = 0; i < NUM_ROWS; i++) {
        for (int j = 0; j < NUM_COLUMNS; j++) {
        game_field[i][j] = 'O';
        }
    }

    print_game_field(game_field);

    return 0;
}