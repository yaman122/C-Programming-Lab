#include <stdio.h>

void concat(char *s1, char *s2,int n)
{
  int i,j=0,c=0;
  for (i=0;s1[j]!='\0';j++)
  {
    c++;
  }
  for (i=1;i<=n;i++)
  {
    for (j=0;s2[j]!='\0';j++)
  {
    s1[c]=s2[j];
    c++;
  }
  }
  s1[c]='\0';
  printf("%s",s1);

}
int main()
{
  char c1[100];
  char c2[100];
  int n;
  scanf("%s[^\n]",&c1);
  scanf("%s[^\n]",&c2);
  scanf("%d",&n);
  concat(c1,c2,n);
  return 0;
}
