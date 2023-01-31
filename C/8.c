/*  Minmax2. Дано целое число N и набор из N прямоугольников,
заданных своими сторонами — парами чисел (a, b). Найти минимальную площадь прямоугольника из данного набора.  */
#include <stdio.h>
int main() {
    
    float s,a,b,mn;
    int i,n;
    printf("N =");
    scanf("%d", &n);
    for (i=1; i<=n; ++i){
        printf("Введите сторону A: ");
        scanf("%f", &a);
        printf("Введите сторону B: ");
        scanf("%f", &b);
        s = a * b;
        if (i==1)
            mn=s;
        if (s<mn)
            mn=s;
    }
    printf("%f\n", mn);
    return 0;
    
}
