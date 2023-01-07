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
ships[0].x = x;
ships[0].y = y;
ships[0].direction = direction;
ships[0].length = 5;
ships[0].hits = 0;

ships[1].x = x;
ships[1].y = y;
ships[1].direction = rand() % 2;
ships[1].length = 4;
ships[1].hits = 0;

ships[2].x = x;
ships[2].y = y;
ships[2].direction = direction;
ships[2].length = 3;
ships[2].hits = 0;

ships[3].x = x;
ships[3].y = y;
ships[3].direction = direction;
ships[3].length = 3;
ships[3].hits = 0;

ships[4].x = x;
ships[4].y = y;
ships[4].direction = direction;
ships[4].length = 2;
ships[4].hits = 0;
