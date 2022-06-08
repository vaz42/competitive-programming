#include <cstdio>

int main(){
    int n, sum = 0, count = 0;
    scanf("%d", &n);
    while(n >= 0){
        sum += n;
        count++;
        scanf("%d", &n);
    }
    printf("%.2f\n", double(sum)/count);
}