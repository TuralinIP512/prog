#include <stdio.h>

int main(int argc, char** argv) {
    
    double array[10];

    for(int i = 0; i < 10; i++){
        scanf("%lf", &array[i]);
    }

    double sum = 0;

    for(int i = 0; i < 10; i++){
        sum += array[i];
    }

    double aver = sum/10;

    printf("%.2lf\n", aver);
}