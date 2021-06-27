#include "board.h"
#include "stdio.h"

void printBoard(Board board) {
    printf("+---+-----------------+\n");
    printf("| 8 | %c %c %c %c %c %c %c %c |\n", board.squares[0], board.squares[1],
           board.squares[2], board.squares[3], board.squares[4], board.squares[5], board.squares[6],
           board.squares[7]);
    printf("| 7 | %c %c %c %c %c %c %c %c |\n", board.squares[8], board.squares[9],
           board.squares[10], board.squares[11], board.squares[12], board.squares[13],
           board.squares[14], board.squares[15]);
    printf("| 6 | %c %c %c %c %c %c %c %c |\n", board.squares[16], board.squares[17],
           board.squares[18], board.squares[19], board.squares[20], board.squares[21],
           board.squares[22], board.squares[23]);
    printf("| 5 | %c %c %c %c %c %c %c %c |\n", board.squares[24], board.squares[25],
           board.squares[26], board.squares[27], board.squares[28], board.squares[29],
           board.squares[30], board.squares[31]);
    printf("| 4 | %c %c %c %c %c %c %c %c |\n", board.squares[32], board.squares[33],
           board.squares[34], board.squares[35], board.squares[36], board.squares[37],
           board.squares[38], board.squares[39]);
    printf("| 3 | %c %c %c %c %c %c %c %c |\n", board.squares[40], board.squares[41],
           board.squares[42], board.squares[43], board.squares[44], board.squares[45],
           board.squares[46], board.squares[47]);
    printf("| 2 | %c %c %c %c %c %c %c %c |\n", board.squares[48], board.squares[49],
           board.squares[50], board.squares[51], board.squares[52], board.squares[53],
           board.squares[54], board.squares[55]);
    printf("| 1 | %c %c %c %c %c %c %c %c |\n", board.squares[56], board.squares[57],
           board.squares[58], board.squares[59], board.squares[60], board.squares[61],
           board.squares[62], board.squares[63]);
    printf("+---+-----------------+\n");
    printf("| X | a b c d e f g h |\n");
    printf("+---+-----------------+\n");
}