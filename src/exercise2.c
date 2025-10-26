#include <stdio.h>

int main(int argc, char** argv) {
    
    float array[10];

    printf("Введите десять вещественных чисел:\n");

    for(int i = 0; i < 10; i++){
        scanf("%f", &array[i]);
    }

    for(int i = 9; i >= 0; i--){
        printf("Инвертированный массив: %.2f\n", array[i]);
    }
}