#include <stdio.h>

int main() {
    int csc, csm, sodien, giadien, sodientt;

    printf("Nhap chi so cu: ");
    scanf("%d", &csc);
    printf("Nhap chi so moi: ");
    scanf("%d", &csm);

    sodien = csm - csc;

if (sodien >= 0 && sodien < 50) {
    giadien = 10000;
} else if (sodien >= 50 && sodien < 100) {
    giadien = 15000;
} else if (sodien >= 100 && sodien < 150) {
    giadien = 20000;
} else if (sodien >= 150 && sodien < 200) {
    giadien = 25000;
} else if (sodien >= 200) {
    giadien = 30000;
} else {
    printf("So dien khong hop le\n");
    return 1;
}


    sodientt = sodien * giadien;
    printf("so dien tieu thu cua ho gia dinh ban la: %d", sodientt);

    return 0;
}
