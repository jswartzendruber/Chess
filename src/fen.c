#include "board.h"
#include "stdio.h"
#include "string.h"
#include <stdlib.h>

Board fenToBoard(char fenString[], size_t size) {
    Board board;

    // Make copy of fenString to use strtok()
    char *fen = malloc(size);
    strcpy(fen, fenString);
    char delim[] = " ";
    char *strSplitPtr = strtok(fen, delim);
    char *pieces = malloc(100);
    strcpy(pieces, strSplitPtr);

    printf("pieces: %s\n", pieces);

    // Save info from the fenString
    int strSplitCount = 0;
    while (strSplitPtr != NULL) {
        char *temp = malloc(100);
        temp = strSplitPtr;

        switch (strSplitCount) {
        // Assign turn
        case 1:
            if (temp[0] == 'w') {
                board.whitesTurn = 1;
            } else {
                board.whitesTurn = 0;
            }
            break;
        // case 2: castle
        case 3:
            strcpy(board.enPassantTargetSquare, temp);
            break;
        case 4:
            board.halfmoveClock = strtol(temp, NULL, 10);
            break;
        case 5:
            board.fullmoves = strtol(temp, NULL, 10);
            break;
        }

        strSplitPtr = strtok(NULL, delim);
        strSplitCount++;
    }

    printf("whitemove: %i\n", board.whitesTurn);

    return board;
}