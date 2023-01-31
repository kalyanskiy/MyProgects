/* Даны стороны прямоугольника a и b. Найти его площадь S = a∗b и периметр P=2∗(a+b).  */
#include <stdio.h>
int main() {
    float a,b;
    printf("Введите a и b:");
    scanf("%f %f", &a, &b);
    printf("S = %f\n", a * b);
    printf("P = %f\n", 2 * (a + b));
    
    
    return 0;
    
}
