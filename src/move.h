#ifndef MOVE_H
#define MOVE_H

#include "board.h"

typedef struct Move {
    int rank;
    char file;
} Move;

int validStringMove(char *);
Move stringToMove(char *);
void movePiece(Board, Move);

#endif