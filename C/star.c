#include <stdio.h>
#include "pattern.h"

void printStarPattern(int rows){
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}
