/******************************************************************************
 * Họ và tên: [Huỳnh Khánh Nam]
 * MSSV:      [PS43500]
 * Lớp:       [COM108 - CS21302]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    do {
        printf("\n===== MENU CHUONG TRINH =====\n");
        printf("1. Xet hoc luc\n");
        printf("2. Giai phuong trinh bac 1 (ax + b = 0)\n");
        printf("3. Giai phuong trinh bac 2 (ax^2 + bx + c = 0)\n");
        printf("4. Tinh tien dien\n");
        printf("0. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: {
                float diem;

                printf("Nhap diem cua sinh vien (0-10): ");
                scanf("%f", &diem);

                if (diem < 0 || diem > 10) {
                    printf("Diem khong hop le. Vui long nhap tu 0 den 10.\n");
                } else if (diem >= 9) {
                    printf("Hoc luc: Xuat sac\n");
                } else if (diem >= 8) {
                    printf("Hoc luc: Gioi\n");
                } else if (diem >= 6.5) {
                    printf("Hoc luc: Kha\n");
                } else if (diem >= 5) {
                    printf("Hoc luc: Trung binh\n");
                } else if (diem >= 3.5) {
                    printf("Hoc luc: Yeu\n");
                } else {
                    printf("Hoc luc: Kem\n");
                }
                break;
            }
            case 2: {
                double a, b;
                printf("Nhap a: ");
                scanf("%lf", &a);
                printf("Nhap b: ");
                scanf("%lf", &b);

                if (a == 0) {
                    if (b == 0) {
                        printf("Phuong trinh co vo so nghiem.\n");
                    } else {
                        printf("Phuong trinh vo nghiem.\n");
                    }
                } else {
                    double x = -b / a;
                    printf("Phuong trinh co nghiem x = %.2lf\n", x);
                }
                break;
            }
            case 3: {
                double a, b, c;
                printf("Nhap a: ");
                scanf("%lf", &a);
                printf("Nhap b: ");
                scanf("%lf", &b);
                printf("Nhap c: ");
                scanf("%lf", &c);

                if (a == 0) {
                    if (b == 0) {
                        if (c == 0) {
                            printf("Phuong trinh co vo so nghiem.\n");
                        } else {
                            printf("Phuong trinh vo nghiem.\n");
                        }
                    } else {
                        double x = -c / b;
                        printf("Phuong trinh co nghiem duy nhat x = %.2lf\n", x);
                    }
                } else {
                    double delta = b*b - 4*a*c;
                    if (delta < 0) {
                        printf("Phuong trinh vo nghiem.\n");
                    } else if (delta == 0) {
                        double x = -b / (2*a);
                        printf("Phuong trinh co nghiem kep x = %.2lf\n", x);
                    } else {
                        double x1 = (-b + sqrt(delta)) / (2*a);
                        double x2 = (-b - sqrt(delta)) / (2*a);
                        printf("Phuong trinh co 2 nghiem phan biet:\n");
                        printf("x1 = %.2lf\n", x1);
                        printf("x2 = %.2lf\n", x2);
                    }
                }
                break;
            }
            case 4: {
                int kwh;
                double tien = 0;

                printf("Nhap so dien tieu thu (kWh): ");
                scanf("%d", &kwh);

                if (kwh < 0) {
                    printf("So dien khong hop le!\n");
                    return 0;
                }

                if (kwh <= 50) {
                    tien = kwh * 1678;
                } else if (kwh <= 100) {
                    tien = 50 * 1678 + (kwh - 50) * 1734;
                } else if (kwh <= 200) {
                    tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
                } else if (kwh <= 300) {
                    tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
                } else if (kwh <= 400) {
                    tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
                } else {
                    tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
                }

                printf("So tien dien phai dong: %.0lf VND\n", tien);
                break;
            }
            case 0:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while(choice != 0);

    return 0;
}
