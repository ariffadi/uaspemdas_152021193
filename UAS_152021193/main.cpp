#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    std::cout.precision(2);
    std::cout.setf(std::ios::fixed);

    int n;
    int nSigmaXY = 0;
    int nX = 0;
    int nY = 0;
    int numerator;
    int nPowX;
    int nPowY;
    int denominator;
    float r;

    cout << "Silahkan Masukkan Banyak Data : ";
    cin >> n;

    struct dataXY
    {
        int x;
        int y;
    };
    dataXY dataXYRecords[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Masukan nilai X ke- " << i + 1 << " : ";
        cin >> dataXYRecords[i].x;
        cout << "Masukan nilai Y ke- " << i + 1 << " : ";
        cin >> dataXYRecords[i].y;

        nSigmaXY = nSigmaXY + (dataXYRecords[i].x * dataXYRecords[i].y);
        nX = nX + dataXYRecords[i].x;
        nY = nY + dataXYRecords[i].y;
        nPowX = nPowX + pow(dataXYRecords[i].x, 2);
        nPowY = nPowY + pow(dataXYRecords[i].y, 2);
    }
    numerator = nSigmaXY - (nX * nY);
    denominator = (sqrt((nPowX - pow(nX, 2)))) * (sqrt((nPowY - pow(nY, 2))));
    r = float(numerator) / float(denominator);

    cout << "Hasil dari Nilai korelasi r = " << r << "\n";
    cout << "Hasil dari Nilai korelasi determinasi = " << (pow(r, 2) * 100) << "% \n";
    return 0;
}
