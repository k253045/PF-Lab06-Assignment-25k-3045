#include <stdio.h>

int main() {
    int Balance = 50000;
    int run = 1;
    int withdraw = 0;
    
    while(run == 1) {
    	printf("How much do u want to withdraw?\n");
    	scanf("%d", &withdraw);
    	if(withdraw > Balance) {
    		printf("Insufficient Funds \n");
    		run = 0;
		} else {
			Balance = Balance - withdraw;
			printf("Your current Balance is: %d \n", Balance);
		}
    	
	}

    return 0;
}

