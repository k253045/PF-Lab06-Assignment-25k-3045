#include <stdio.h>
#include <math.h>

int main() {
	
	float I = 0.0;
	printf("Provide the intensity of the quacke \n");
	scanf("%f", &I);
	
	float S = 0.0;
	printf("Provide the standard referece value \n");
	scanf("%f", &S);
	
	float Magnitude = log10(I/S);
	printf("Its magnitude is %.2f", Magnitude);
    

    return 0;
}

