#include <stdio.h>

int main() {
    int a, b = 0;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("\nBefore swap:\na = %d\nb = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("\nAfter swap:\na = %d\nb = %d\n", a, b);

    return 0;
}


