/*  If3. Дано целое число. Если оно является положительным, то прибавить к нему 1;
если отрицательным, то вычесть из него 2; если нулевым, то заменить его на 10. Вывести полученное число. */
#include <stdio.h>
int main() {
    int A;
    printf("Введите число A:");
    scanf("%d", &A);
    
    if (A > 0)
       ++A;
    else if (A < 0)
      A -= 2;
    else
        A = 10;
    printf("A = %d\n", A);

    return 0;
    
}
