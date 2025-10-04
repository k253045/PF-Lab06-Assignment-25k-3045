#include <stdio.h>

int main() {
    int num = 0;
    printf("Which num table do u want? \n");
    scanf("%d",&num);
    
    int i;
    for(i = 1; i<=10 ; i++) {
    	int Table = num * i;
    	printf("%d \n", Table);
	}

    return 0;
}

