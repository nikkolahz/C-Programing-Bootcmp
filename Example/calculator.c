#include<stdio.h>
#include<stdlib.h>

int main(){
    float a,b,c;
    printf("Enter A operand (int): ");
    scanf("%f", &a);
    printf("Enter B operand (int): ");
    scanf("%f", &b);
    printf("\n");

    c = a + b;
    printf(" c = a + b --> %9.3f \n",c);

    c = a * b;
    printf (" c = a * b --> %9.3f\n",c);

    c = a / b;
    printf(" c = a / b --> %9.3f \n",c);

   // c = a % b;
   // printf(" c = a %% b --> %9.3f \n",c);

    printf("\n\n----------------------------------------------------------------\n");

    return EXIT_SUCCESS;
}