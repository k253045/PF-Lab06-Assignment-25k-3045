#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num > 0) {
        while (num != 0) {
            int digit = num % 10;               
            reversed = reversed * 10 + digit;   
            num = num / 10;                    
        }
        printf("Reversed number is: %d\n", reversed);
    } else if (num == 0) {
        printf("Reversed number is: 0\n");
    } else {
        printf("Negative numbers are not allowed.\n");
    }

    return 0;
}

