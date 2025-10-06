#include <stdio.h>


int main(void) {
    float a, b;
    printf("请输入英寸值:");
    scanf("%f", &a);
    b = a * 2.54;
    printf("%.3f英寸 = %.3f厘米\n", a, b);
    return 0;
}
