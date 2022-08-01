#include<stdio.h>
#include<stdlib.h>

int main(){

unsigned data = 0xABCD;
unsigned N,M;
unsigned mask;
unsigned result;

printf("========= This is a Bit Slector Program ============\n\n");
printf("Define indexes for bit select [N:M]:\n");
printf("Enter value of (int) N: \n");
scanf("%u",&N);
printf("Enter value of (int) M: \n");
scanf("%u",&M);
printf("Selected range is (%u : %u) and data is 0x%04X .\n",N,M,data);
unsigned W = M-N+1;
mask = (1<<W)-1;
result = data>>N & mask;
printf("Result is: 0x%04X\n",result);
printf("====================================================\n\n");

return EXIT_SUCCESS;
}