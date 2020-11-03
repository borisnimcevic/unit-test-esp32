#include "my-functions.h"

void doubleArray(int16_t array[], int8_t lenght){
    for(int8_t i = 0; i < lenght; i++){
        array[i] = 2 * array[i];
    }
}
