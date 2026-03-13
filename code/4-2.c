#include <stdio.h>

int main()
{
    for (int i = 0; i < 9; i++) {
        for (int j  = 0; j < 9; j++) {
            printf("%d * %d = %d", i, j, i*j);
        }
    }
    return 0;
}

