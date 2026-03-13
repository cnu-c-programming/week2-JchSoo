#include <stdio.h>

int main()
{
    unsigned int a;
    scanf("%d", &a);

    if (a == 1) {
        printf("false");
    } else {
        for (int i = 2; i < 1000; i++){
            if (a != i && a % i == 0) {
                printf("false");
                return 0;
            }
        }
        printf("true");
    }

    return 0;
}

