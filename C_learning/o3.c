#include <math.h>
#include <stdio.h>
#define PI 3.1415926

//3.1
void s1(void) {
    int a, b;
    float x;
    printf("请输入a,b：");
    scanf("%d,%d", &a, &b);
    x = (a * a + b * b) / sqrt(3 * (a + b));
    printf("x=%.3f\n", x);
}

//3.2
void s2(void) {
    float a, b, h, s;
    printf("请输入a,b,h：");
    scanf("%f,%f,%f", &a, &b, &h);
    s = (a + b) * h / 2;
    printf("s=%.3f\n", s);
}

//19
void s3(void) {
    float x, y;
    scanf("%f,%f", &x, &y);
    printf("%f,%f,%f,%f", x + y, x - y, x * y, x / y);
}

//20
void s4(void) {
    float a, b, av, s1, s2;
    scanf("%f,%f", &a, &b);
    av = a * b;
    s1 = sqrt(a * a + b * b);
    s2 = (a + b) * 2;
    printf("%.2f,%.2f,%.2f", av, s1, s2);
}

//2.2.4
void s5(void) {
    float m, n, y;
    scanf("%f,%f", &m, &n);
    y = 2 * (m + 2) / (m * n);
    printf("%.2f", y);
}

void s6(void) {
    float r, h, s1, v;
    scanf("%f,%f", &r, &h);
    s1 = PI * r * h;
    v = s1 * h;
    printf("s=%.2f,v=%.2f", s1, v);
}

void s7(void) {
    int a,b,c;
    scanf("%d,%d",&a,&b);
    c = a/10 + a%10*100 + b/10 *10 + b%10 * 1000;
    printf("%d",c);
}

void s8(void) {
    float a,b;
    char c,d;
    scanf("%f,%f,%c,%d",&a,&b,&c,&d);
    printf("%f\n%f\n%c\n%c",a,b,c,d);
}

int main(void) {
    // s1();
    // s2();
    return 0;
}
