#include <stdio.h>
#include <math.h>

int main() {
    
    float P = 0.0;
    printf("What is the initial invesment? \n");
    scanf("%f", &P);
    
    float r = 0.0;
    printf("What is the interest rate? \n");
    scanf("%f", &r);
    
    int n = 0;
    printf("Provide value of n \n");
    scanf("%d", &n);
    
    int time = 0;
    printf("Provide time in years \n");
    scanf("%d", &time);
    
    float temp = pow(1+r/n,n*time);
    
    float A = P * temp;
    printf("Your future investment will be %.3f", A);

    return 0;
}


