/* While3. Даны целые положительные числа N и K. Используя только операции сложения и вычитания,
найти частное от деления нацело N на K, а также остаток от этого деления.*/
#include <stdio.h>
int main() {
    int N, K ;
    int chact = 0;
    printf("Введите числa N и K:");
    scanf("%d %d", &N, &K);
    while (N >= K) {
        N -= K;
        ++chact;
        
    }
    printf("Частное: %d\nОстаток: %d\n", chact, N);
        
        
    
    

    return 0;
    
}
