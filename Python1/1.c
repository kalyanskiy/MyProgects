/*  Begin2. Дана сторона квадрата a. Найти его площадь S = a²   */


#include <stdio.h> 
int main(){
    
    float a;
    printf("Введите сторону квадрата:");
    scanf("%f", &a);
    if (a >= 0)
        printf("S = %f\n", a * a);
    else
        printf("Введено отрицательное число!\n");
    return 0;

    
}
