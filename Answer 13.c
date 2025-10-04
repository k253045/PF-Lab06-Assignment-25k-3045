#include <stdio.h>

int main() {
    int n = 0;
	printf("Provide a number \n");
	scanf("%d", &n);
	
	printf("Multiplied by 2 %d \n", n << 1);
	printf("Multiplied by 4 %d \n", n << 2);
	printf("Multiplied by 8 %d \n", n << 3);

    return 0;
}


