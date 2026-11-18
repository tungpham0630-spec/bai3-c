#include <stdio.h>
int main(){
    float a, b;
    printf("Nhap so thu nhat: ");
    scanf("%f", &a);
    printf("Nhap so thu hai: ");
    scanf("%f", &b);
    printf("Tich hai sao la: %.2f\n", a * b);
    return 0;
}