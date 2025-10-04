#include <stdio.h>

int main() {
    int amount;
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;

    printf("Enter an amount in cents (positive number): ");
    scanf("%d", &amount);

    if (amount <= 0) {
        printf("Invalid amount.\n");
        return 1;
    }

    while (amount > 0) {
        if (amount >= 25) {
            quarters++;
            amount -= 25;
        } else if (amount >= 10) {
            dimes++;
            amount -= 10;
        } else if (amount >= 5) {
            nickels++;
            amount -= 5;
        } else {
            pennies++;
            amount -= 1;
        }
    }

    printf("Minimum number of coins needed:\n");
    printf("Quarters: %d\n", quarters);
    printf("Dimes:    %d\n", dimes);
    printf("Nickels:  %d\n", nickels);
    printf("Pennies:  %d\n", pennies);

    return 0;
}

