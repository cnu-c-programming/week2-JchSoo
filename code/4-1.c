#include <stdio.h>

int main()
{
    float num1, num2;
    char c;

    scanf("%f %f %c", &num1, &num2, &c);

    switch (c) {
        case '+':
            printf("%d\n", (int)(num1 + num2));
            break;
        case '-':
            printf("%d\n", (int)(num1 - num2));
            break;
        case '*':
            printf("%d\n", (int)(num1 * num2));
            break;
        case '/':
            printf("%f\n", num1 / num2);
            break;
        default:
            printf("Try again\n");
    }

    return 0;
}

