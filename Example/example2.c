#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(){

    /* 1.23456789 */
    double decimalDigits = 1.23456789;
    /* 7.801X 10^9 */
    double worldPopulation = 7.801E9;
    /* 6.626 X 10^-34 */
    double plancksConstant = 6.626E-34;

    printf("%12.2f | Decimal digits \n", decimalDigits);
    printf("%12.2E | World Population\n", worldPopulation);
    printf("%12.2E | Plancks Constant\n", plancksConstant);
    printf("--------------------------------");

return EXIT_SUCCESS;
}
