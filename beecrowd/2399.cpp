#include <cstdio>

int main(){
    int n, campo[52];
    campo[0] = 0;
    scanf("%d", &n);
    campo[n + 1] = 0;

    for(int i = 1; i <= n; i++)
        scanf("%d", &campo[i]);

    for(int i = 1; i <= n; i++)
        printf("%d\n", campo[i - 1] + campo[i] + campo[i + 1]);
}