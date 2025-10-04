#include <stdio.h>

int main() {
    int n = 0;
	printf("Provide a number \n");
	scanf("%d", &n); 
    int count = 0;

    while (n != 0) {
        if (n & 1) {   
            count++;
        }
        n = n >> 1;    
    }

    printf("Number of 1s: %d\n", count);

    return 0;
}


