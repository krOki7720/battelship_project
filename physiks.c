// Physiscs des Battelship Games

#include <stdlib.h>

//jeweils 2 Felder pro Spieler, zum setzen und schießen
char player1_board1[BOARD_SIZE][BOARD_SIZE];
char player1_board2[BOARD_SIZE][BOARD_SIZE];
char player2_board1[BOARD_SIZE][BOARD_SIZE];
char player2_board2[BOARD_SIZE][BOARD_SIZE];

void init_board(char board[BOARD_SIZE][BOARD_SIZE]) {
  for (int i = 0; i < BOARD_SIZE; i++) {
    for (int j = 0; j < BOARD_SIZE; j++) {
      board[i][j] = EMPTY_SPACE;
    }
  }
}

// Struktur für die Schiffe
struct ship {
  int x;
  int y;
  int direction;
  int length;
  int hits;
}

// Funktion um die Schiffe zu setzen
void place_ship(char board[BOARD_SIZE][BOARD_SIZE], struct ship *s) {
  int x = s->x;
  int y = s->y;
  int direction = s->direction;
  int length = s->length;

  if (direction == 0) {                         //Vertikal
    for (int i = 0; i < length; i++) {
      board[x + i][y] = SHIP_SPACE;
    }
  } else {
    for (int i = 0; i < length; i++) {          //Horizontal
      board[x][y + i] = SHIP_SPACE;
    }
  }
}


struct ship ships[NUM_SHIPS];

ships[i].x = NUM;
ships[i].y = NUM;
ships[i].direction = NUM;
ships[i].length = i;
ships[i].hits = 0;



