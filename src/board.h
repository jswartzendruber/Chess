#ifndef BOARD_H
#define BOARD_H

/*
1 bit for each property. 1 == true, 0 == false
*/
typedef struct Square {
    unsigned int isEmpty : 1;
    unsigned int isWhite : 1;
    unsigned int isPawn : 1;
    unsigned int isKnight : 1;
    unsigned int isBishop : 1;
    unsigned int isRook : 1;
    unsigned int isQueen : 1;
    unsigned int isKing : 1;
} Square;

typedef struct Board {
    unsigned int whitesTurn : 1;

    unsigned int whiteQueenCastleAvailable : 1;
    unsigned int whiteKingCastleAvailable : 1;
    unsigned int blackQueenCastleAvailable : 1;
    unsigned int blackKingCastleAvailable : 1;

    Square squares[64];
    char enPassantTargetSquare[2];
    int halfmoveClock;
    int fullmoves;
} Board;

#endif