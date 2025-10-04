#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0;
    int n = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Step 1: Count the number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

   
    if (n == 0)
	 n = 1;

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;

        int power = 1;
        int i;
        for (i = 0; i < n; i++) {
            power *= remainder;
        }

        result += power;
        temp /= 10;
    }

    if (result == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}

