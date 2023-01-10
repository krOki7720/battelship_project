#include <curses.h>

#define NUM_SHIPS 5
#define ROWS 10
#define COLUMNS 10
#define EMPTY_SPACE ' '
#define SHIP_SPACE 'O'
#define HIT_SPACE 'X'
#define MISS_SPACE 'M'

char board1[ROWS][COLUMNS];
char board2[ROWS][COLUMNS];
char board3[ROWS][COLUMNS];
char board4[ROWS][COLUMNS];


void init_board(char board[ROWS][COLUMNS]){  //Initialisiert das Spielfeld
  for (int i = 0; i < ROWS; i++){
    for (int j = 0; j < COLUMNS; j++){
      board[i][j] = EMPTY_SPACE;
    }
  }
}

int check_ship_placement(int row, int col, int direction, int length) {
    if (row < 0 || row >= ROWS || col < 0 || col >= COLUMNS) {
        printf("Error: Ship placement is out of the grid's boundaries.\n");
        return 0;
    }
    if (direction == 0) { // Horizontal
        if (col + length > COLUMNS) {
            printf("Error: Ship placement exceeds the grid's width.\n");
            return 0;
        }
    } else if (direction == 1) { // Vertical
        if (row + length > ROWS) {
            printf("Error: Ship placement exceeds the grid's height.\n");
            return 0;
        }
    } else {
        printf("Error: Invalid direction value.\n");
        return 0;
    }
    return 1;
}


struct ship{     //Struktur für die Shiffe
  int x;
  int y;
  int direction;
  int length;
  int hits;
};

struct ship shiptype[4];
  for(int i=0, i<4 i++)
  ships[i].x = NUM;
  ships[i].y = NUM;
  ships[i].direction = NUM;
  ships[i].length = i+1;
  ships[i].hits = 0;



