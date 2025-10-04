#include <stdio.h>
#include <math.h>

int main() {
    
    float Height = 0.0;
    printf("What is the height of the building? \n");
    scanf("%f", &Height);
    
    float Angle = 0.0;
    printf("Provide the angle in radian \n");
    scanf("%f", &Angle);
    
    float Length = Height/tan(Angle);
    printf("Total Length of the shadow is: %.2f", Length);

    return 0;
}


