#include <stdio.h>

int laNamNhuan (int nam) {
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

int soNgayTrongThang (int thang, int nam) {
    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return laNamNhuan(nam) ? 29 : 28;
        default:
            return 0; 
    }
}

int main() {
    int ngay, thang, nam;

    printf("Nhap ngay: ");
    scanf("%d", &ngay);
     printf("Nhap thang: ");
    scanf("%d", &thang);
     printf("Nhap nam: ");
    scanf("%d", &nam);

    int maxNgay = soNgayTrongThang(thang, nam);
    if(maxNgay == 0 || ngay < 1 || ngay > maxNgay) {
        printf("Ngay thang nam khong hop le");
    } else {
        printf("Ngay thang nam hop le");
    }

    return 0;
}
