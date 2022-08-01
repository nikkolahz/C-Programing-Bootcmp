#include <stdio.h>
#include <stdlib.h>

typedef enum 
{ 
    NONE = 0,
    LOW = 5,
    MEDIUM = 9,
    HIGH = 12,
    MAXIMUM = 20,

}
Thrust;

int main(){ 

Thrust thrustLevel = NONE;
printf("Ready to go level: %d \n", thrustLevel);
thrustLevel = MAXIMUM;
printf("Take off level: %d\n", thrustLevel);
thrustLevel = MEDIUM;
printf("Entering into Ionosphere: %d \n", thrustLevel);
thrustLevel =LOW;
printf("Traveling to deep space: %d \n", thrustLevel);
printf("\n\n----------------------------------------------------------------\n");

return EXIT_SUCCESS;
}