#include<stdio.h>
#include<stdlib.h>

typedef enum
{
    TEA ,    //0
    COFFEE, //1
    JUICE,  //2
    BEER,   //3
} Menu;

int main(){
    Menu mario = COFFEE;
    Menu andrea = BEER;

    printf("Mario Ordered: ...%d\n", mario);
    printf("Andrea Ordered: ...%d\n", andrea);

    printf("\n\n----------------------------------------------------------------\n");
    return EXIT_SUCCESS;
}