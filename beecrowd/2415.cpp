#include <stdio.h>

int main() {
    int n, prev = 0, count = 1, result = 0;
    scanf("%d", &n);

    for(int x, i = 0; i < n; i++) {
        scanf("%d", &x);
        if(x == prev)
            count++;
        else 
            count = 1;
        if(count > result)
            result = count;
        prev = x;
    }
    printf("%d\n", result);
}
