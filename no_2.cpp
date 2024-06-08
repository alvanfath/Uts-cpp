#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int findLargeNumber(const vector<int> &arr);

int main()
{
    int a, b, c, d, f, max;
    cout << "Masukkan 5 angka (pisahkan dengan spasi): ";
    cin >> a >> b >> c >> d >> f;

    vector<int> arr = {a, b, c, d, f};
    max = findLargeNumber(arr);

    cout << "ini max : " << max;
    cout << endl;
    return 0;
}

int findLargeNumber(const vector<int> &arr)
{
    int largest = arr[0];

    for (int num : arr)
    {
        if (num > largest)
        {
            largest = num;
        }
    }
    return largest;
}
