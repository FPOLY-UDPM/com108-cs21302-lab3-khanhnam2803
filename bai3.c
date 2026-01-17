/******************************************************************************
 * Họ và tên: [Huỳnh Khánh Nam]
 * MSSV:      [PS43500]
 * Lớp:       [COM108 - CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>

int main() {
    int soDien;
    double donGia = 3000; // gia su 3000 VND/kWh
    double tien;

    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%d", &soDien);

    if (soDien < 0) {
        printf("So dien khong hop le!\n");
    } else {
        tien = soDien * donGia;
        printf("So tien dien phai dong: %.0lf VND\n", tien);
    }

    return 0;
}
