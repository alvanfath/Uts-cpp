#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int jumlah;
    float jumlahHarga, hargaSebelumPajak, pajak, hargaPajak, hargaSatuan;
    cout << "anda mau beli berapa ";
    cin >> jumlah;
    if (jumlah < 100)
    {
        pajak = 0.01;
        hargaSatuan = 15000.0;
        hargaSebelumPajak = jumlah * hargaSatuan;
        hargaPajak = hargaSebelumPajak * pajak;
        jumlahHarga = hargaSebelumPajak + hargaPajak;
    }
    if (jumlah >= 100 && jumlah < 150)
    {
        pajak = 0.02;
        hargaSatuan = 11500.0;
        hargaSebelumPajak = jumlah * hargaSatuan;
        hargaPajak = hargaSebelumPajak * pajak;
        jumlahHarga = hargaSebelumPajak + hargaPajak;
    }
    if (jumlah >= 150)
    {
        pajak = 0.03;
        hargaSatuan = 10000.0;
        hargaSebelumPajak = jumlah * hargaSatuan;
        hargaPajak = hargaSebelumPajak * pajak;
        jumlahHarga = hargaSebelumPajak + hargaPajak;
    }

    cout << "harga perbarang adalah Rp." << hargaSatuan << "\n";
    cout << "total harga adalah Rp." << fixed << setprecision(2) << hargaSebelumPajak << '\n';
    cout << "pajak yang didapat adalah Rp." << fixed << setprecision(2) << hargaPajak << '\n';
    cout << "total harga + pajak Rp." << fixed << setprecision(2) << jumlahHarga << '\n';
    cout << endl;
    cout << "Selesai" << endl;
    return 0;
}
