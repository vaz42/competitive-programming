#include <cstdio>

int main(){
    int n, x, in = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        if(x >= 10 && x <= 20)
            in++;
    }

    printf("%d in\n%d out\n", in, n - in);
    return 0;
}