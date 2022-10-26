#include "stdio.h"
#include "defs.h"

/*[[[
*
*       a  b  c  d  e  f  g  h
*
*    1  21 22 23 24 25 26 27 28
*    2  31 32 33 34 35 36 37 38
*    3  41 42 43 44 45 46 47 48
*    4  51 52 53 54 55 56 57 58
*    5  61 62 63 64 65 66 67 68
*    6  71 72 73 74 75 76 77 78
*    7  81 82 83 84 85 86 87 88
*    8  91 92 93 94 95 96 97 98
*
*//*]]]*/

int main() {

    AllInit();

    U64 playBitBoard = 0ULL;

    playBitBoard |= (1ULL << SQ64(D2));
    playBitBoard |= (1ULL << SQ64(G2));
    playBitBoard |= (1ULL << SQ64(G4));

    printf("\n");
    PrintBitBoard(playBitBoard);
    POP(playBitBoard);

    return 0;
}
