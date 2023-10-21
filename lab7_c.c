
#include <stdio.h>

typedef struct comp comp;
struct comp{

    float r,i;



};

void add(comp x, comp y){
    printf("%.1f+%.1fi", x.r + y.r, x.i + y.i);
}

int main(){

    comp x,y;

    scanf("%f%f%f%f", &(x.r), &x.i, &y.r, &y.i);

    add(x,y);

    return 0;
}
