#include <stdio.h>
#include "my-functions.h"

static int16_t my_array[] = {50000, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
int8_t my_length = sizeof(my_array)/sizeof(int16_t);

void print_array(int16_t array[], int8_t length);

void app_main(){
    printf("Initial array:\n");
    print_array(my_array, my_length);
    doubleArray(my_array, my_length);
    printf("After change:\n");
    print_array(my_array, my_length);
}

void print_array(int16_t array[], int8_t length){
    for(uint8_t i = 0; i < length; i++){
        printf("%d ", array[i]);
        if ((i +1) % 10 == 0){
            printf("\n");
        }
    }
    printf("\n");
}
