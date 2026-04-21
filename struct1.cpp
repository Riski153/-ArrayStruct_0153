#include <iostream>
using namespace std;


struct Mahasiswa {
    string NIM;
    string nama;
    string alamat;
    int umur;
};

int main() {
    Mahasiswa mhs;

    cout << "Nomor Mahasiswa : ";
    cin >> mhs.NIM;

    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama;

    cout << "Alamat Mahasiswa (Desa) : ";
    cin >> mhs.alamat;

    cout << "Alamat Mahasiswa (Kota) : ";
    cin >> mhs.alamat;

    cout << "Umur Mahasiswa : ";
    cin >> mhs.umur;

}