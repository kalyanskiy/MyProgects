/*  Minmax3. Дано целое число N и набор из N прямоугольников, заданных своими сторонами — парами чисел (a, b).
Найти максимальный периметр прямоугольника из данного набора.*/
#include <stdio.h>
int main() {
    float p,a,b,mx;
    int i, N;
    printf("N =");
    scanf("%d", &N);
    for (i=1; i<=N; ++i){
        printf("Введите сторону A: ");
        scanf("%f", &a);
        printf("Введите сторону B: ");
        scanf("%f", &b);
        p = 2 * (a + b);
        if (i==1)
            mx=p;
        if (p>mx)
            mx=p;
    }
    printf("%f\n", mx);

    return 0;
    
}
