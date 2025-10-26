#include <stdio.h>

int main() {
    double array[10];
    
    for(int i = 0; i < 10; i++){
        scanf("%lf", &array[i]);
    }

    long long sum_cents = 0;
    for(int i = 0; i < 10; i++){
        
        sum_cents += (long long)(array[i] * 100 + 0.5);
    }
    
  
    long long aver_cents = (sum_cents + 5) / 10; 
    
    
    double result = aver_cents / 100.0;
    
    printf("%.2lf\n", result);
    return 0;
}