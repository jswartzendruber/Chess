#include "board.h"
#include "stdio.h"

void printBoard(Board board) {
    for (int i = 0; i < 64; i++) {
        // Newlines
        if ((i) % 8 == 0) {
            printf("\n");
        }

        // Pieces
        printf("%c", board.squares[i]);
    }
    printf("\n");
}