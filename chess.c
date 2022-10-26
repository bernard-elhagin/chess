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

    int index = 0;

    for (index = 0; index < BRD_SQ_NUM; ++index) {
        if (index % 10 == 0) printf("\n");
        printf("%5d", Sq120ToSq64[index]);
    }

    printf("\n");
    printf("\n");

    for (index = 0; index < 64; ++index) {
        if (index % 8 == 0) printf("\n");
        printf("%5d", Sq64ToSq120[index]);
    }

    return 0;
}
