#include <stdlib.h>
#include <stdio.h>

int main(){
    char c = 'N';
    printf("Char c: %d\n", c);
    printf("Char c: %c\n", c);
    c=66;
    printf("Char c: %d\n", c);
    printf("Input Character: \n");
    c=getchar();
    printf("Char c: %d\n", c);

    c = getchar();
    printf("Char c: %d\n", c);
    printf("\n\n---------------------------------------------------------------\n");
    return EXIT_SUCCESS;
}