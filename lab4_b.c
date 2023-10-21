#include <string.h>
#include <stdio.h>
void revstr(char *str)
{
  int i,len,temp;
  len=strlen(str);
  for (i=0;i<len/2;i++)
  {
    temp=str[i];
    str[i]=str[len-i-1];
    str[len-i-1]=temp;
    
  }
}
int main()
{
  char str[50];
  gets(str);
  
  revstr(str);
  printf("%s",str);
  return 0;
  
}


