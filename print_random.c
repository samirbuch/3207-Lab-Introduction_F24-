#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "random.h"

int main() {
    /* seed the randomizer */
    srand(time(NULL));

    printf("Today's random word: ");
    for (int a = 0; a < 7; a++)
        putchar(randchar());
    putchar('\n');

    return (0);
}
