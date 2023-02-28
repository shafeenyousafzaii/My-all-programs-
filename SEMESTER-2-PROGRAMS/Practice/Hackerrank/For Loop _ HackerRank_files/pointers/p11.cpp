#include <stdio.h>

void update(int *a,int *b) {
    int d,q=*a,e=*b; unsigned int f;
    // d=q+e;
    // e=*a-*b;
    // *a=d;
    // e=e*(-1);
    // *b=e;
     d=q+e;
     f=q-e;
    //  f=f*(-1);
     *a=d;
     *b=f;  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
