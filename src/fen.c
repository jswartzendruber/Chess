#include "board.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

Board fenToBoard(char fenString[], size_t size) {
    Board board;

    // Make copy of fenString to use strtok()
    char *fen = malloc(size);
    strcpy(fen, fenString);
    char delim[] = " ";
    char *strSplitPtr = strtok(fen, delim);
    char *pieces = malloc(100);
    strcpy(pieces, strSplitPtr);

    // Initialize board to blank
    for (int i = 0; i < 64; i++) {
        board.squares[i] = '.';
    }

    // FEN Pieces to board
    int piecesIdx = 0;
    int boardIdx = 0;

    while (boardIdx < 64) {
        // If letter, add to board
        if ((pieces[piecesIdx] > 64 && pieces[piecesIdx] < 91) ||
            (pieces[piecesIdx] > 96 && pieces[piecesIdx] < 123)) {

            board.squares[boardIdx] = pieces[piecesIdx];
            boardIdx++;
        }

        // If number, skip x spaces
        if (pieces[piecesIdx] > 47 && pieces[piecesIdx] < 58) {
            boardIdx += pieces[piecesIdx] - '0';
            piecesIdx++;
        } else {
            piecesIdx++;
        }
    }

    return board;
}