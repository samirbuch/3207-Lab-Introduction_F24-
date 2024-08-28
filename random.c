//
// Created by samir on 8/27/24.
//

#include "random.h"

#include <stdlib.h>

void rand_char(char *s) {
    char random_character = (rand() % 26) + 65;
    *s = random_character;
}
