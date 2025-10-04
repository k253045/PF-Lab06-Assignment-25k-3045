#include <stdio.h>
#include <math.h>

int main() {
    float ticket_price = 250.50;
    float  group_size = 0.0;
    float  total_cost = 0.0;

    printf("Enter the number of people in the group: ");
    scanf("%f", &group_size);

    total_cost = ceil(group_size * ticket_price);

    printf("Minimum total cost for the group is: %.0f\n", total_cost);

    return 0;
}


