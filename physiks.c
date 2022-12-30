// Physiscs des Battelship Games

#include <stdlib.h>

//Stuktur für das Spielfeld
struct seefield{
    int rows;
    int colums;
    char *pointer;
};

//Funktion für das anlegen der Felder
struct seefield createField(int rows, int columns){
    struct seefield newField;
    newField.rows = rows;
    newField.colums = columns;
    newField.pointer = (char *) malloc(sizeof(char) * rows * columns);
    //hier braucht es eine reset funktion
    return newField;
}