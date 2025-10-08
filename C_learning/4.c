#include <stdio.h>

int main(void) {
    float x,a,b;
    x = 3.5+(int)(8/3*(3.5+6.7)/2)%4;
    printf("%f",x);
    return 0;
}