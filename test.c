#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#define USE_MATH_DEFINES
int main()
{
    setlocale(LC_ALL, "RUS");
    float a,f,x;
    float n, y, z;
    printf("введите а, n, y, z: ");
    scanf_s("%f%f%f%f", &a, &n, &y, &z);

    if (a<=0)
        do {
            printf("Введите положительное a: ");
            scanf_s("%f", &a);
        } while (a<=0);
    else
    {
        for (x = y; x <= z; x += n)
        {
            if (x<=0)
                f = pow(x, 4) * tanf(x+2);
            else if (x>0 && x<=a)
                f = logf(4*x*x+1);
            else
                f = logf(pow(5+x*x, 1/5.0));
            printf("при х = %.2f f=%.2f\n", x,  f);
        }
    }
_getch();
}
