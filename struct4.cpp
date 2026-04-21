#include <iostream>
#include <string>

using namespace std;

struct DetailAlamat { // addressDetail
    string desa; // village
    string kota; // city
};

struct Mahasiswa {
    string NIM;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main() {
    Mahasiswa mhs[3];
    for (int i = 0; i < 3;  i++)
    {
         cout << "Data Mahasiswa ke-" << i + 1 << endl;

    cout << "Nomor Mahasiswa : ";
  getline(cin, mhs[i].NIM);

    cout << "Nama Mahasiswa : ";
    cin >> mhs[i].nama;

       cout << "Alamat Mahasiswa (Desa) : ";
    cin >> mhs[i].alamat.desa;

    cout << "Alamat Mahasiswa (Kota) : ";
    cin >> mhs[i].alamat.kota;

    cout << "Umur Mahasiswa : ";
    cin >> mhs[i].umur;
    }
    
    for (int i = 0; i < 3;  i++)
    {
   cout << endl;
    cout << "\n NIM : " << mhs[i].NIM;
    cout << "\n Nama : " << mhs[i].nama;
    cout << "\n Alamat : " << mhs[i].alamat.desa << ", " << mhs[i].alamat.kota;
    cout << "\n Umur : " << mhs[i].umur;

    return 0;
    
}