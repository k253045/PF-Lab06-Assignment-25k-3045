#include <stdio.h>

int main() {
    
    int num = 0;
    printf("Hiw many participant are there in one workshop? \n");
    scanf("%d", &num);
    int factoriel = 1;
    
    int i;
    for(i = 1; i<=num ; i++) {
    	
    	factoriel = factoriel * i;
    	
	}
    printf("The total number of ways these participants can be arrange are: %d \n", factoriel);
    return 0;
}

