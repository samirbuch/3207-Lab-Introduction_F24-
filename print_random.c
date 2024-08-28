#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "random.h"

void rand_string(char *s, size_t size);
char* rand_string_alloc(size_t size);

int main(void) {
    srand(time(NULL)); // I know this is not cryptographically secure. I don't care.

    char *p = rand_string_alloc(7);
    rand_string(p, 7);

    printf("%s\n", p);

    free(p);
}

//Given Project code
char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size);
     }
     return s;
}

void rand_string(char *s, size_t size) {
    for(int i = 0; i < size; i++) {
        rand_char(s++);
    }
}