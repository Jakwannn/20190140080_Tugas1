#include <iostream>
using namespace std;

class Mahasiswa {
public:
    string nim;
    string nama;

public: void cetak() {
    cout << "NIM = " << nim;
    cout << "\nNama = " << nama;
}
};

class Matakuliha {
private:
    string kode;
    string namaM;
    int sks;
public:
    void input() {
        cout << "Masukkan Kode Matakuliah : ";

    }
};

int main()
{
    std::cout << "Hello World!\n";
}


