#include<stdio.h>
int pow(int x,int y){
    int ret=1;
    for(int i=0;i<y;i++){
        ret*=x;
    }
    return ret;
}
int main(){

    int n;
    scanf("%d",&n);

    int N = n;
    int sz = 0;

    while(n>0){
        n/=10;
        sz++;
    }

    n = N;
    sz--;
    int x = 0;
    while(n>0){
        x += (n%10)*pow(10, sz);
        n/=10;
        sz--;
    }


    if(x==N){
        printf("PALINDROME");
    }else{
        printf("NOT A PALINDROME");
    }

    return 0;
    
}
