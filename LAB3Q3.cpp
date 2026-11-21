#include <iostream>
using namespace std;

int main() {
    double jumlahPinjaman;
    double kadarFaedahTahunan;
    int tahun;
    
    // Input daripada pengguna
    cout << "Masukkan jumlah pinjaman (RM): ";
    cin >> jumlahPinjaman;
    cout << "Masukkan kadar faedah tahunan (%): ";
    cin >> kadarFaedahTahunan;
    cout << "Masukkan bilangan tahun : ";
    cin >> tahun;
    
    // Pengiraan (Formula Faedah Mudah)
    double jumlahFaedah = jumlahPinjaman * (kadarFaedahTahunan / 100.0) * tahun;
    double jumlahKeseluruhan = jumlahPinjaman + jumlahFaedah;
    int jumlahBulan = tahun * 12;
    double bayaranBulanan = jumlahKeseluruhan / jumlahBulan;
    
    // Paparan keputusan
    cout << "Bayaran bulanan untuk pinjaman ini ialah (RM): " << bayaranBulanan << endl;
    
    return 0;
}