#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap canh thu nhat cua tam giac: ");
    scanf("%d", &a);
    printf("Nhap canh thu hai cua tam giac: ");
    scanf("%d", &b);
    printf("Nhap canh thu ba cua tam giac: ");
    scanf("%d", &c);

    if (a+b > c && a+c > b && b+c > a) {
        printf("La ba 3 canh cua 1 tam giac");
    } else {
        printf("khong phai 3 canh cua 1 tam giac");
    }

    return 0;
}
