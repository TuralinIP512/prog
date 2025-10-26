#include <stdio.h>

int main(int argc, char** argv) {
    
    float array[10];

    for(int i = 0; i < 10; i++){
        scanf("%f", &array[i]);
    }

    float sum = 0;

    for(int i = 0; i < 10; i++){
        sum += array[i];
    }

    float aver = sum/10;

    printf("%.2f\n", aver);
}