#include<stdio.h>
#include<string.h>

int main()
{
    char a[100], b, c;
    int i,n,t;
    gets(a);
    scanf("%s \n",&b);
    scanf("%s", &c);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
       if(a[i]==b)
       {
           a[i]=c;
       }
    }
    printf("%s",a);
}