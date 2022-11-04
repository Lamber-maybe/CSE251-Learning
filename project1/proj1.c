//
// Created by Lamber on 2022/11/5.
//
#include <stdio.h>
#include <math.h>

/*
 * Name : Lamber
 */

double f(double x);

int main(){
    double a;
    double b;

    printf("Enter a value for a: ");
    scanf("%lf", &a);

    printf("Enter a value for b: ");
    scanf("%lf", &b);


    int n = 10;
    int i;
    double delta;
    double err = 1;
    double before, res;

    do{
        before = res;
        res = 0;
        delta = (b - a) / n;
        for(i = 1; i <= n; ++i){
            //delta = (b - a) / n;
            res += f(a + (i - 0.5) * delta);

        }

        res = res * delta;

        err = fabs(before - res);
        printf("%d: %.9f %le\n", n, res, err);
        ++n;

    }while(err > 1e-10 && n < 100000);
    printf("The integral result is %.9f\n", res);

}


double f(double x){
    if(x == 0)
        return 1;

    double ans = sin(M_PI * x) / (M_PI * x);
    return ans;
}
