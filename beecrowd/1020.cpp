#include <cstdio>

int main(){
    int n, dias, meses, anos = 0;
    scanf("%d", &n);
    anos = n / 365;
    n = n - (anos * 365);
    meses = n / 30;
    dias = n % 30;
        
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);

    return 0;
}