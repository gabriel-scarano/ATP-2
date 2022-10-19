#include <stdio.h>
#include <math.h>

double op1 (double v, double t);
double op2 (double s, double t);
double op3 (double s, double v);
double op4 (double v, double a, double t);
double op5 (double v, double a, double t);
double op6 (double s, double a, double t);
double op7 (double s, double v, double a);

int main ()
{   int n, i, o;
    double v1, v2, v3;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {   scanf("%d", &o);

        scanf("%lf %lf", &v1, &v2);
        switch (o)
        {   case 1:
                printf("%.2lf\n", op1(v1, v2));
                break;
            case 2:
                printf("%.2lf\n", op2(v1, v2));
                break;
            case 3:
                printf("%.2lf\n", op3(v1, v2));
                break;
            case 4:
                scanf("%lf", &v3);
                printf("%.2lf\n", op4(v1, v2, v3));
                break;
            case 5:
                scanf("%lf", &v3);
                printf("%.2lf\n", op5(v1, v2, v3));
                break;
            case 6:
                scanf("%lf", &v3);
                printf("%.2lf\n", op6(v1, v2, v3));
                break;
            case 7:
                scanf("%lf", &v3);
                printf("%.2lf\n", op7(v1, v2, v3));
                break;
        }
    }

    return 0;
}

double op1 (double v, double t)
{
    return (v*t);
}

double op2 (double s, double t)
{
    return (s/t);
}

double op3 (double s, double v)
{
    return (s/v);
}

double op4 (double v, double a, double t)
{
    return (v*t + (a*t*t)/2);
}

double op5 (double v, double a, double t)
{
    return (v + a * t);
}

double op6 (double s, double a, double t)
{
    return (2 * s - (a * t * t))/(2 * t);
}

double op7 (double s, double v, double a)
{   double delta, x;
    
    delta = (4 * v * v) - (4 * a * s * (-2));

    x = ((2 * v * -1) + sqrt(delta))/(2 * a);

    return x;
}