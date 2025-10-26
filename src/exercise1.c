#include <stdio.h>

int main() {
    double array[10];
    
    for(int i = 0; i < 10; i++){
        scanf("%lf", &array[i]);
    }

    long long sum_cents = 0;
    for(int i = 0; i < 10; i++){
        double value = array[i] * 100;
        if (value >= 0) {
            sum_cents += (long long)(value + 0.5);
        } else {
            sum_cents += (long long)(value - 0.5);
        }
    }
    
    long long aver_cents;
    if (sum_cents >= 0) {
        aver_cents = (sum_cents + 5) / 10;
    } else {
        aver_cents = (sum_cents - 5) / 10;
    }
    
    double result = aver_cents / 100.0;
    
    printf("%.2lf\n", result);
    return 0;
}