#include <cstdio>

int main(){
    int n, linha, coluna, principal = 0, secundaria = 0, m[10][10];
    bool eh_magico = true;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &m[i][j]);

    for(int i = 0, sum_l, sum_c; i < n; i++){
        sum_c = sum_l = 0;
        for(int j = 0; j < n; j++){
            sum_l += m[i][j];
            sum_c += m[j][i];
        }
        if(i)
            if(sum_l != linha || sum_c != coluna)
                eh_magico = false;
        
        principal += m[i][i];
        secundaria += m[i][n - i - 1];    
        linha = sum_l;
        coluna = sum_c;
    }

    if(principal != secundaria || secundaria != linha)
        eh_magico = false;

    printf("%d\n", eh_magico ? principal : -1);
}
