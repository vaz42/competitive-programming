#include <cstdio>

int main(){
    double a, b;
    scanf("%lf %lf", &a, &b);
    double media = ((a * 3.5) + (b * 7.5)) / 11;
    
    printf("MEDIA = %.5f\n", media);

    return 0;
}