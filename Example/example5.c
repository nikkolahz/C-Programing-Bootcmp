#include<stdio.h>
#include<stdlib.h>

enum menu{
    TEA ,    //0
    COFFEE, //1
    JUICE,  //2
    BEER,   //3
};

int main(){
    enum menu mario = COFFEE;
    enum menu andrea = BEER;

    printf("Mario Ordered: ...%d\n", mario);
    printf("Andrea Ordered: ...%d\n", andrea);

    printf("\n\n----------------------------------------------------------------\n");
    return EXIT_SUCCESS;
}