#include <cstdio>
#include <cmath>

int main(){
    double r, v, pi = 3.14159;
    scanf("%lf", &r);
    v = 4.0/3 * pi * r * r * r;

    printf("VOLUME = %.3f\n", v);

    return 0;
}