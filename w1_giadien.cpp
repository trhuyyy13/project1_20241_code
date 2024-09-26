#include <iostream>
#include <iomanip> // Thư viện để thiết lập độ chính xác cho đầu ra

int main() {
    int dien;
    std::cin >> dien; // Nhập vào số kWh tiêu thụ

    double total_cu = 0.0, total_moi = 0.0;

    // Tính tiền điện theo bảng giá hiện hành (6 bậc)
    if (dien <= 50) {
        total_cu = dien * 1.728;
    } else if (dien <= 100) {
        total_cu = 50 * 1.728 + (dien - 50) * 1.786;
    } else if (dien <= 200) {
        total_cu = 50 * 1.728 + 50 * 1.786 + (dien - 100) * 2.074;
    } else if (dien <= 300) {
        total_cu = 50 * 1.728 + 50 * 1.786 + 100 * 2.074 + (dien - 200) * 2.612;
    } else if (dien <= 400) {
        total_cu = 50 * 1.728 + 50 * 1.786 + 100 * 2.074 + 100 * 2.612 + (dien - 300) * 2.919;
    } else {
        total_cu = 50 * 1.728 + 50 * 1.786 + 100 * 2.074 + 100 * 2.612 + 100 * 2.919 + (dien - 400) * 3.015;
    }

    // Tính tiền điện theo bảng giá mới (5 bậc)
    if (dien <= 100) {
        total_moi = dien * 1.728;
    } else if (dien <= 200) {
        total_moi = 100 * 1.728 + (dien - 100) * 2.074;
    } else if (dien <= 400) {
        total_moi = 100 * 1.728 + 100 * 2.074 + (dien - 200) * 2.612;
    } else if (dien <= 700) {
        total_moi = 100 * 1.728 + 100 * 2.074 + 200 * 2.612 + (dien - 400) * 3.111;
    } else {
        total_moi = 100 * 1.728 + 100 * 2.074 + 200 * 2.612 + 300 * 3.111 + (dien - 700) * 3.457;
    }

    // Tính chênh lệch giữa tiền điện theo bảng giá mới và cũ
    double chenh_lech = total_moi - total_cu;

    // Thêm VAT vào chênh lệch
    double VAT = 0.1; // 10% VAT
    chenh_lech *= (1 + VAT); // Thêm VAT vào chênh lệch

    // Chuyển đổi chênh lệch sang đồng
    chenh_lech *= 1000; // Để chuyển đổi ra đơn vị đồng

    // In ra chênh lệch với 2 chữ số thập phân
    std::cout << std::fixed << std::setprecision(2) << chenh_lech << std::endl;

    return 0;
}
