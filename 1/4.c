#include <stdio.h>
#include <math.h>

#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));

double f(int p, int q, double x);

int main() 
{
    int p;
    int q;
    scanf("%d%d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double)) 
{     
    double a;
    double b;
    double m;
    a = -20.0;
    b = 20.0;
    m = (a + b) / 2;
    if (fabs(func(p, q, m)) < EPSILON){
         return m;
    } else if ((func(p, q, m) < 0 && func(p, q, a) > 0) || (func(p, q, m) > 0 && func(p, q, a) < 0)){
        while (fabs(func(p, q, m)) >= EPSILON){
            if((func(p, q, m) < 0 && func(p, q, a) > 0) || (func(p, q, m) > 0 && func(p, q, a) < 0)){
                b = m;
                m = (a + b) / 2;
            } else if ((func(p, q, m) < 0 && func(p, q, b) > 0) || (func(p, q, m) > 0 && func(p, q, b) < 0)){
                a = m;
                m = (a + b) / 2;
            }
        }
        return m;
    } else if ((func(p, q, m) < 0 && func(p, q, b) > 0) || (func(p, q, m) > 0 && func(p, q, b) < 0)) {
        while (fabs(func(p, q, m)) >= EPSILON){
            if((func(p, q, m) < 0 && func(p, q, a) > 0) || (func(p, q, m) > 0 && func(p, q, a) < 0)){
                b = m;
                m = (a + b) / 2;
            } else if ((func(p, q, m) < 0 && func(p, q, b) > 0) || (func(p, q, m) > 0 && func(p, q, b) < 0)){
                a = m;
                m = (a + b) / 2;
            }
        }
        return m;
    }
}

double f(int p, int q, double x) 
{
    return p * x + q;
}
