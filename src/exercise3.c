#include <stdio.h>

int main(int argc, char** argv) {
    
    float array[10];

    printf("Введите десять вещественных чисел:\n");

    for(int i = 0; i < 10; i++){
        scanf("%f", &array[i]);
    }

    int K;
    printf("Введите число K: ");
    scanf("%d", &K);

    printf("Исходный массив: ");
    for(int i = 0; i < 10; i++){
        printf("%.2f ", array[i]);
    }
    printf("\n");

    float result[10];

    if(K > 0){
        for(int i = 0; i < 10; i++){
           result[(i + K) % 10] = array[i];
        }
    }
    else if (K < 0){
        int notK = -K;
        for(int i = 0; i < 10; i++){
            result[i] = array[(i + notK) % 10];
        }
    }
    else {
        for(int i = 0; i < 10; i++){
            result[i] = array[i];
        }
        printf("Массив без изменений (K = 0): ");
    }

    printf("Массив со сдвигом: ");
    for(int i = 0; i < 10; i++){
        printf("%.2f ", result[i]);
    }
    printf("\n");
}