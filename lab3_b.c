#include<stdio.h>
int main(){
    float a,b;
    scanf("%f\n",&a);
    scanf("%f\n",&b);
     
     char c;
     c=getchar();
     if(c=='+'){
         printf("%.1f",a+b);
     }else if(c=='-'){
         printf("%.1f",a-b);
     }else if(c=='*'){
         printf("%.1f",a*b);
     }else{
         printf("%.1f",(float)a/b);
     }
       return 0;

     
     }