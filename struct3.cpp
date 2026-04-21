#include <iostream>
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
    Mahasiswa mhs;

    cout << "Nomor Mahasiswa : ";
    cin >> mhs.NIM;

    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama;

       cout << "Alamat Mahasiswa (Desa) : ";
    cin >> mhs.alamat.desa;

    cout << "Alamat Mahasiswa (Kota) : ";
    cin >> mhs.alamat.kota;

    cout << "Umur Mahasiswa : ";
    cin >> mhs.umur;
    
   cout << endl;
    cout << "\n NIM : " << mhs.NIM;
    cout << "\n Nama : " << mhs.nama;
    cout << "\n Alamat : " << mhs.alamat.desa << ", " << mhs.alamat.kota;
    cout << "\n Umur : " << mhs.umur;
}