#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float uts, tugas, uas, total;
    string hurufNilai = "D";
    cout << "Masukan nilai uts : ";
    cin >> uts;
    cout << "Masukan nilai tugas : ";
    cin >> tugas;
    cout << "Masukan nilai uas : ";
    cin >> uas;
    total = (uts * 0.3) + (tugas * 0.3) + (uas * 0.4);
    if (total >= 86)
    {
        hurufNilai = "A";
    }
    if (total >= 70 && total < 86)
    {
        hurufNilai = "B";
    }
    if (total >= 55 && total < 70)
    {
        hurufNilai = "C";
    }

    cout << "anda mendapat nilai total " << fixed << setprecision(2) << total << "\n";
    cout << "anda dapat nilai: " << hurufNilai;

    cout << endl;
    cout << "Selesai" << endl;
    return 0;
}
