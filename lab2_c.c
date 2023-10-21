#include<stdio.h>
#define true 1
#define false 0
int leap(int y){
    if(y%400==0)return true;
    if(y%4==0&&y%100!=0)return true;
    return false;
}
int main(){
    char d[10];
    scanf("%s",d);
    int d1=d[0]-'0';
    int d2=d[1]-'0';
    int m1=d[3]-'0';
    int m2=d[4]-'0';
    int y1=d[6]-'0';
    int y2=d[7]-'0';
    int y3=d[8]-'0';
    int y4 =d[9]-'0';
int dt = d1*10+d2;
int mo=m1*10+m2;
int yr=y1*1000+y2*100+y3*10+y4;
if (dt ==30&&(mo==4||mo==6||mo==9||mo==11)){
    dt =1;
    mo++;
}
else if(dt==31&&(mo==1||mo==3||mo==5||mo==7||mo==8||mo==10)){
    dt=1;
    mo++;
}
else if (dt==31&&mo==12){
    dt=1;
    mo=1;
    yr++;
}
else if(dt==28&&mo==2&&!leap(yr)){
    dt=1;
    mo++;
}

else if(dt==29&&mo==2&&leap(yr)){
    dt=1;
    mo++;
}else dt++;

if(dt<10)printf("0%d-",dt);
else printf("%d-",dt);
if (mo<10)printf("0%d-",mo);
else printf("%d-",mo);

printf("%d", yr);
return 0;
}