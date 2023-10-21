#include<stdio.h>

int min(int x, int y){

    if(x<y) return x;
    return y;

}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int b[n];
    int inf = 1e9;
    for(int i=0;i<n;i++){
        int mn = inf;
        for(int j=0;j<n;j++){
            mn = min(mn, a[j]);
        }
        for(int j=0;j<n;j++){
            if(a[j] == mn){
                a[j] = inf;
                break;
            }
        }
        b[i] = mn;
    }

    for(int i=0;i<n;i++){

        printf("%d\n", b[i]);

    }

}