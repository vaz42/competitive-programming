#include <cstdio>

int main(){
    int n;
    double sum = 0, aux;
    char c;
    scanf("%d %c", &n, &c);
    for(int i = 0; i < 144; i++){
        if(i >= 12 * n  && i < 12 * (n + 1)){
            scanf("%lf", &aux);
            sum += aux;
        }
        else
            scanf("%*lf");
    }
    
    if(c == 'S')
        printf("%.1f\n", sum);
    else
        printf("%.1f\n", sum / 12);   
}