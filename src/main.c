#include "board.h"
#include "fen.h"
#include "stdio.h"

int main() {
    char FEN_INITIAL_BOARD[] = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1";
    Board board = fenToBoard(FEN_INITIAL_BOARD, sizeof(FEN_INITIAL_BOARD));

    printf("Size of board: %lu bytes\n", sizeof(board));

    return 0;
}