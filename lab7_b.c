#include <stdio.h>

struct cmplx{
    int a;
    int b;
};

void sum(struct cmplx s1, struct cmplx s2);

int main(){
    struct cmplx a1;
    struct cmplx a2;
    scanf("%d %d", &a1.a, &a1.b);
    scanf("%d %d", &a2.a, &a2.b);
    sum(a1, a2);
    return 0;
}

void sum(struct cmplx s1, struct cmplx s2){
    float e, f;
    e = s1.a + s2.a;
    f = s1.b + s2.b;
    printf("%0.1f+%0.1fi", e, f);
}
