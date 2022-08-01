#include<stdio.h>
#include<stdlib.h>

int cumulativeSum(int limit){

    int results =0;
    for (int i=0; i<=limit; i++){
        results+=i;
    }
    return results;
}
int main(){
    int number = 12;
    int factor =2;

    printf("Number before multiplication: %d\n", number);
    number *= factor;

    printf("Number after multiplication: %d\n", number);
    int sum = cumulativeSum(number);

    printf("Cumulative sum: %d ; %d \n", number, sum);
    printf("\n================================\n\n");


    return EXIT_SUCCESS;
}