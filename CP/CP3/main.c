#include <stdio.h>
#include <limits.h>
#include <math.h>


int main()
{
    int n, iter;
    double ans, func, add, l = 0.1, r = 0.6, x = 0.1;
    long double eps = 1.0l;
    while (2.0l + eps / 2.0l > 2.0l) {
        eps /= 2.0l;
    }
    printf("Machine eps double = %.16Le\n", eps);
    printf("Write n: \n");
    scanf("%d", &n);
    printf("n = %d, \n", n);
    printf("Table znacheniy Teylor and stand f(x) = ((1+x^2)/2)*arctg(x)-(x/2)");
    printf("________________________________________________________________________\n");
    printf("|   x   |          sum          |        f(x)           |count iter |\n");
    printf("________________________________________________________________________\n");
    for (int i = 1; i <= n; i++) {
        add = 1;
        iter = 1;
        func = ((1+pow(x, 2))/2)*atan(x)-(x/2);
        ans = 1;
        while (fabs(add) > eps && iter < 100) {
            add = (pow(-1, iter + 1)*(pow(x, 2*iter + 1)/(4*pow(iter, 2) - 1)));
            iter++;
            ans = ans + add;
        }
       printf("| %.3f | %.18lf | %.18lf |      %d       |\n", x,ans , func, iter);
       printf("________________________________________________________________________\n");
        x += (r - l) / n;
    }
    return 0;
}
