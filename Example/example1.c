#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

int main(){
    unsigned students = 25U;
    unsigned long long worldPopulations = 7801235945U;
    
    printf("%10u | Students in the class \n",students);
    printf("%llu | Population of the World \n",worldPopulations);

    uint8_t count = UINT8_MAX;
    printf("%10u | Count of something \n", count);
    printf("%10u | INT16_MAX \n",UINT16_MAX);
    printf("%10u | INT32_MAX \n",UINT32_MAX);
    printf("%10llu | INT64_MAX \n",UINT64_MAX);

    printf("--------------------------------------------------------");
    return EXIT_SUCCESS;
}