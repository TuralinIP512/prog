#include <stdio.h>

int main(int argc, char** argv) {
    
    float array[10];

    printf("Введите десять вещественных чисел:\n");

    for(int i = 0; i<10; i++){
        scanf("%f", &array[i]);
    }

    float X;
    printf("Введите число Х\n");
    scanf("%f", &X);

    int K;
    printf("Введите число К\n");
    scanf("%d", &K);
        if(K > 9 || K < 0){
            printf("Ошибка! Введите число К в диапазоне от 0 до 9\n");
            return 1;
        }

    printf("Исходный массив: ");
    for(int i = 0; i < 10; i++){
        printf("%.2f ", array[i]);
    }
    printf("\n");

    for (int i = 9; i > K; i--) {
        array[i] = array[i - 1];
    }

    array[K] = X;

    printf("Результирующий массив: ");
    for(int i = 0; i<10; i++){
        printf("%.2f ", array[i]);
    }
    printf("\n");
}