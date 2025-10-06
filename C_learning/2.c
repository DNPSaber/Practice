#include <stdio.h>

//1
void name(void) {
    printf("你好 世界\n");
    printf("你好\n世界\n");
    printf("你好");
    printf("世界");
}

//2
void address(void) {
    printf("中国，上海");
}

//3
void age(void) {
    int a = 25, b;
    b = a * 365;
    printf("%d岁，%d天\n", a, b);
}

//4
void jolly(void) {
    printf("For he's a jolly good fellow!\n");
}

void deny(void) {
    printf("Which nobody can deny!\n");
}

//5
void br(void) {
    printf("Brazil,Russia");
}

void ic(void) {
    printf("India,China");
}

//6
void calculation(void) {
    int toes, toes2, toes3;
    toes = 10;
    toes2 = toes * 2;
    toes3 = toes * toes;
    printf("toes = %d\ntoes2 = %d\ntoes3 = %d\n", toes, toes2, toes3);
}

//7
void smile(void) {
    printf("Smile!");
}

//8
void two(void) {
    printf("two\n");
}

void one_three(void) {
    printf("one\n");
    two();
    printf("three\n");
}

//main
int main(void) {
    name();
    printf("\n");
    address();
    printf("\n");
    age();
    printf("\n");
    jolly();
    jolly();
    jolly();
    deny();
    printf("\n");
    br();
    printf(",");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();
    printf("\n");
    calculation();
    printf("\n");
    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();
    printf("\n");
    printf("starting now:\n");
    one_three();
    printf("done!\n");
    return 0;
}
