#include <iostream>
using namespace std;

int main() {
    int golongan, jamKerja;
    float upahPerJam, bonus, gajiPokok, gajiMingguan;

    cout << "Masukkan golongan karyawan (1-4): ";
    cin >> golongan;

    switch (golongan) {
        case 1:
            upahPerJam = 4500;
            bonus = 10000;
            break;
        case 2:
            upahPerJam = 5500;
            bonus = 20000;
            break;
        case 3:
            upahPerJam = 6000;
            bonus = 30000;
            break;
        case 4:
            upahPerJam = 7500;
            bonus = 40000;
            break;
        default:
            cout << "Golongan tidak valid." << endl;
            return 0;
    }

    cout << "Masukkan jam kerja per minggu: ";
    cin >> jamKerja;

    if (jamKerja <= 42) {
        gajiPokok = upahPerJam * jamKerja;
        gajiMingguan = gajiPokok + bonus;
    } else {
        int jamLembur = jamKerja - 42;
        gajiPokok = upahPerJam * 42;
        float upahLembur = upahPerJam * 1.5;
        float gajiLembur = upahLembur * jamLembur;
        gajiMingguan = gajiPokok + bonus + gajiLembur;
    }

    cout << "Gaji mingguan karyawan adalah: " << gajiMingguan << " rupiah" << endl;

    return 0;
}