#include <stdio.h>
#include<ctype.h>
#include<memory.h>
int main()
{
    char x[1000];
memset(x,'.',sizeof(x));
gets(x);
int i=0;
while(x[i]!='.')x[i]=toupper(x[i]),i++;
printf("%s",x);
return 0;

}