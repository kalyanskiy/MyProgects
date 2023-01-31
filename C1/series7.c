/* Series3. Даны десять вещественных чисел. Найти их среднее арифметическое.*/
#include <stdio.h>
int main() {
    int i;
    float n, sred = 0 ;
    for (i = 1; i <= 10; ++i){
       printf("Введите число:");
       scanf("%f", &n);
       sred += n;
    }
    printf("Среднее арифметическое: %f", sred / 10);

    return 0;
    
}
