#include <cstdio>

int main(){
    int x;
    double y;
    scanf("%d %lf", &x, &y);
    printf("%.3f km/l\n", x / y);

    return 0;
}