/*  Boolean2. Дано целое число A. Проверить истинность высказывания: «Число A является нечетным».  */
#include <stdio.h>
int main() {
    int A;
    printf("Введите число A:");
    scanf("%d", &A);
    if (A % 2 != 0)
        printf("Число A является нечетным");
    else
        printf("Число A является четным");
    return 0;

}
