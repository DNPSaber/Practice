#include <stdio.h>

//2
void asxlls(void) {
    char a;
    scanf("%d", &a);
    printf("%c", a);
}

//3
void alerts(void) {
    printf("\a Startled by the sudden sound!\n");
}

//4
void ft(void) {
    float a = 64.25;
    printf("%f\n %e\n %a\n", a, a, a);
}

//5
void ages(void) {
    int a;
    int b;
    float c = 3.156e7;
    printf("请输入年龄:");
    scanf("%d", &a);
    b = a * c;
    printf("你活了%d秒\n", b);
}

//6
void water(void) {
    int a;
    float b;
    float c = 3e-23;
    int d = 950;
    printf("请输入水的质量（夸脱）：");
    scanf("%d", &a);
    b = (a * d) / c;
    printf("水中含有%f个水分子\n", b);
}

//7
void height(void) {
    float a,b;
    float c = 2.54;
    printf("请输入身高（英寸）：");
    scanf("%f", &a);
    b = a * c;
    printf("身高为%f厘米\n", b);
}

//8
void volume(void) {
    float a,b,c,d,e;
    printf("请输入杯数:");
    scanf("%f",&a);
    b = a * 0.5;
    c = a * 8;
    d = c * 2;
    e = d * 3;
    printf("品脱数：%f\n盎司数：%f\n大汤勺数：%f\n茶勺数：%f\n",b,c,d,e);
}

//main
int main(void) {
    // asxlls();
    printf("\n");
    alerts();
    printf("\n");
    ft();
    printf("\n");
    ages();
    printf("\n");
    water();
    printf("\n");
    height();
    printf("\n");
    volume();
    return 0;
}
