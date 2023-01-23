#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

#define ROWS 10
#define COLUMNS 10

char ships[ROWS][COLUMNS]; // Array fuer das Spielfeld

void initAndPrintArray(){ //Funktion um das Array mit einer for-Schleife auszugeben
    printf("  0 1 2 3 4 5 6 7 8 9\n");
    for (int i =0 ; i <ROWS; i++) {
        printf("%d ", i);
        for (int j = 0; j < COLUMNS; j++) {
            printf("%c ", ships[i][j]);
        }
        printf("\n");
    }
}

bool placeShip(int shipSelection, int row, int col, int orientation) { //Funktion, welche mit einem Switch case, die Schiffe auf das Spielfeld je nach Nutzereingabe platziert.
    int size;
    char symbol;
    char name[20];
    switch (shipSelection) { // Welches Schiff man setzen moechte
        case 1:
            size = 4;
            symbol = 'B';
            strcpy(name, "Battleship");
            break;
        case 2:
            size = 3;
            symbol = 'C';
            strcpy(name, "Cruiser");
            break;
        case 3:
            size = 2;
            symbol = 'D';
            strcpy(name, "Destroyer");
            break;
        case 4:
            size = 1;
            symbol = 'S';
            strcpy(name, "Submarine");
            break;
        default:
            printf("Invalid ship selection.\n");
            return false;
    }

    if (orientation == 0) { // Ausrichtung Horizontal oder Vertikal
        if(row+size > ROWS) {
            printf("Invalid position, the ship goes over the field limit.\n");
            return false;
        }
        for (int i = row; i < row + size; i++) {
            if(ships[i][col] != '.') {
                printf("Invalid position, there is another ship in this location.\n");
                return false;
            }
        }
        for (int i = row; i < row + size; i++) {
            ships[i][col] = symbol;
        }
    } else {
        if(col+size > COLUMNS) {
            printf("Invalid position, the ship goes over the field limit.\n");
            return false;
        }
        for (int i = col; i < col + size; i++) {
            if(ships[row][i] != '.') {
                printf("Invalid position, there is another ship in this location.\n");
                return false;
            }
        }
        for (int i = col; i < col + size; i++) {
            ships[row][i] = symbol;
        }
    }
    printf("%s placed successfully.\n", name);
    return true;
}

bool isWin(){ // Funktion, welche ueberprueft,ob noch Schiffe auf dem Spielfeld sind.
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            char feld=ships[i][j];
            if (feld=='C' || feld =='D'|| feld =='B'||feld=='C')
            {
                return false;
            }
        }
    }
    return true;
}


int main()
{
    for (int i = 0; i < ROWS; i++){// Schleife zum setzen der Schiffe
for (int j = 0; j < COLUMNS; j++) {
ships[i][j] = '.';
}
}
int row, col, orientation, shipSelection;
int placedShips = 0;
while (placedShips < 4) {
    printf("Enter the number of the ship you want to place(1-4):\n1. Battleship\n2. Cruiser\n3. Destroyer\n4. Submarine\n");
    scanf("%d", &shipSelection);
    printf("First enter the Y-Coordinate and then the X-Coordinate (0-9) for the ship:\n");
    scanf("%d%d", &row, &col);
    printf("Enter the orientation of the ship(0 for 1horizontal, 1 for vertical):\n");
    scanf("%d", &orientation);
    if (placeShip(shipSelection, row, col, orientation)) {
        placedShips++;
        initAndPrintArray();
    }
}
printf("All ships placed!\n");

int remainingShips = 4; // "Spielschleife", welche den Nutzer nach den Koordinaten fragt und darauf entweder einen Treffer oder ein "Miss" ausgibt.
while (remainingShips > 0) {
    printf("Enter the row and column (0-9) to shoot:\n");
    scanf("%d%d", &row, &col);
    if (ships[row][col] != '.' && ships[row][col] != 'x') {
        printf("Hit!\n");
        ships[row][col] = 'x';
        remainingShips--;
    } else {
        printf("Miss!\n");
    }
    initAndPrintArray();
    if (remainingShips == 0) {
        printf("All ships sunk!\n");
    }
}

return 0;
}