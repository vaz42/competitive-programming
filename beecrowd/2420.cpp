#include <cstdio>

int main(){
    int n, v[100000];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    int i = 0, j = n - 1, l = v[i], r = v[j];    
    while(j - i != 1){
        if(l > r){
            j--;
            r += v[j];
        }
        else{
            i++;
            l += v[i];
        }
    }
    printf("%d\n", i + 1);
}
