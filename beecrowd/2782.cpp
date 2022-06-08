#include <cstdio>

int main(){
    int n, stepladders = 0, v[1000];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    
    if(n == 1)
        stepladders = 1;
    else{
        for(int gap, i = 0; i < n - 1; i++){
            if(!i || (v[i + 1] - v[i]) != gap){
                gap = v[i + 1] - v[i];
                stepladders++;
            }
        }
    }
    
    printf("%d\n", stepladders);
}