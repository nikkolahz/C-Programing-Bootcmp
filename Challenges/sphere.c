#include<stdio.h>
#include<stdlib.h> 

int main(){

printf(" === Sphere === \n");
double radius;
double pi = 3.141592653589793;
printf("Please  enter sphere radius: \n");
scanf("%lf",&radius);
double surfaceArea = 4*pi*(radius*radius);
double volume = 4.0/3 *pi*(radius*radius*radius);
printf("===Results=== \n");
printf("SA = %.2f | Vol = %.2f \n",surfaceArea,volume);
printf("SA = %.3E | Vol = %.3E\n",surfaceArea,volume);
return EXIT_SUCCESS;
}