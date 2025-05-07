#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    printf("Nhap so thu ba: ");
    scanf("%d", &c);

    if ((c > a && c < b) || (c > b && c < a)) {
        printf("So thu ba (%d) nam trong khoang giua so thu nhat (%d) va so thu hai (%d).\n", c, a, b);
    } else {
        printf("So thu ba (%d) KHONG nam trong khoang giua so thu nhat (%d) va so thu hai (%d).\n", c, a, b);
    }

    return 0;
}
