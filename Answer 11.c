#include <stdio.h>
#include <math.h>

int main() {
    
    int num = 0;
    printf("Provide a number \n");
    scanf("%d", &num);
    
    if(num & 1) {
    	printf("The number is odd \n");
	} else {
		printf("The number is even");
	}
    

    return 0;
}


