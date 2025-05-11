#include <stdio.h>

int main() {
    int a, b, c, temp;

    printf ("Nhap 3 so nguyen: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b) {
        temp = a; 
        a = b;
        b = temp;
    } 
    
     if (a>c) {
        temp = a;
        a = c;
        c = temp;
    }

    if (b>c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("Thu tu tu nho den lon: %d %d %d", a, b, c);
    return 0;
}
