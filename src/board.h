#ifndef BOARD_H
#define BOARD_H

typedef struct Board {
    int whitesTurn;

    int whiteQueenCastleAvailable;
    int whiteKingCastleAvailable;
    int blackQueenCastleAvailable;
    int blackKingCastleAvailable;

    char squares[64];
    char enPassantTargetSquare[2];
    int halfmoveClock;
    int fullmoves;
} Board;

#endif