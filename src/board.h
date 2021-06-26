#ifndef BOARD_H
#define BOARD_H

typedef struct Board {
    unsigned int whitesTurn : 1;

    unsigned int whiteQueenCastleAvailable : 1;
    unsigned int whiteKingCastleAvailable : 1;
    unsigned int blackQueenCastleAvailable : 1;
    unsigned int blackKingCastleAvailable : 1;

    char squares[64];
    char enPassantTargetSquare[2];
    int halfmoveClock;
    int fullmoves;
} Board;

void printBoard(Board);

#endif