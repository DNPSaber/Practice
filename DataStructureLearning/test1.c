#include <stdio.h>


void carts(int *p,int *pp) {
    int i,j;
    i = *p;
    j = *pp;
    printf("i=%d,j=%d\n",i,j);
}

int main(void) {
    int a = 5;
    int b = 6;
    carts(&a,&b);
    return 0;
}