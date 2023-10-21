#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    char ans;
    if(x>85) ans='A';
    else if (x>60 && x<=85) ans='B';
    else if (x>40 && x<=60) ans='C';
    else if (x>30 && x<=40) ans='D';
    else {
        printf("fail\n");
        return 0;
    }
    printf("%c",ans);
    return 0;
    
    

}
