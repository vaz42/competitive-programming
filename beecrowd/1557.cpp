#include <cstdio>
#include <cmath>

void foo(int n);
int n_digitos(int n);


int main(){
    int n;
    scanf("%d", &n);
    while(n){
        foo(n);
        printf("\n");
        scanf("%d", &n);
    }
}

void foo(int n){
    int spaces = n_digitos(pow(2, 2*n - 2));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int x = int(pow(2, i + j));
            if(j)                                               
                printf(" ");
            for(int k = 0; k < spaces - n_digitos(x); k++)
                printf(" "); 
            printf("%d", x);

            //printf(j == n - 1 ? "%d" : "%d ", x);
            //printf("%d%s", x, j == n - 1 ? "" : " ");
        }
        printf("\n");
    }
}

int n_digitos(int n){
    int i = 0;
    while(n){
        n /= 10;
        i++;
    }
    return i;
}

