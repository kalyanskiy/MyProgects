/*  Series2. Даны десять вещественных чисел. Найти их произведение.  */
#include <stdio.h>
int main() {
    
    float prod = 1, n;
    int i;
    for (i = 1; i <= 10; ++i){
        printf("Введите число:");
        scanf("%f", &n);
        prod *= n;
    }
    printf("Произведение 10 чисел: %f\n", prod);
    
}
