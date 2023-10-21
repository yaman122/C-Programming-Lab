#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            if(j == 0){
                a[i][j] = 1;
            }
            else if (i == j){
                a[i][j] = 1;
            }
            else if (j < i){
                a[i][j] = a[i - 1][j - 1] + a[i-1][j];
            }
            else{
                a[i][j] = 0;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (a[i][j] != 0){
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}




