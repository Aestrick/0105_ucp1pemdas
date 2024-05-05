#include <iostream>
#include <string>

using namespace std;

// Deklarasi struct untuk menyimpan data lokasi dan status kualitas udara
struct Lokasi {
    string nama;
    string status;
};

// Prosedur untuk menampilkan pesan sambutan
void sambutPengguna() {
    cout << "Halo! Selamat datang di program pemantauan kualitas udara." << endl;
}

// Fungsi untuk menghitung rata-rata dari tiga nilai
int hitungRataRata(int x, int y, int z) {
    return (x + y + z) / 3;
}

int main() {
    // Sensor di setiap lokasi kota
    int sensor1, sensor2, sensor3;

    // Input nilai sensor untuk setiap lokasi
    cout << "Masukkan tingkat polusi untuk sensor 1: ";
    cin >> sensor1;
    cout << "Masukkan tingkat polusi untuk sensor 2: ";
    cin >> sensor2;
    cout << "Masukkan tingkat polusi untuk sensor 3: ";
    cin >> sensor3;

    // Cek kondisi kualitas udara untuk setiap lokasi
    if (sensor1 > 75 || sensor2 > 75 || sensor3 > 75 || sensor1 == 45 || sensor2 == 45 || sensor3 == 45) {
        lokasi.push_back({ "Tangerang", "Tidak Sehat" });
    }
    else {
        lokasi.push_back({ "Tangerang", "Sehat" });
    }

    // Menampilkan status kualitas udara untuk setiap lokasi
    cout << "Daftar lokasi dan status kualitas udaranya:" << endl;
    for (const auto& loc : lokasi) {
        cout << loc.nama << ": " << loc.status << endl;
    }

    // Menghitung total lokasi yang memiliki kualitas udara "Sehat" dan "Tidak Sehat"
    int totalSehat = 0, totalTidakSehat = 0;
    for (const auto& loc : lokasi) {
        if (loc.status == "Sehat") {
            totalSehat++;
        }
        else {
            totalTidakSehat++;
        }
    }

    // Menampilkan total lokasi dengan kualitas udara "Sehat" dan "Tidak Sehat"
    cout << "Total lokasi dengan kualitas udara Sehat: " << totalSehat << endl;
    cout << "Total lokasi dengan kualitas udara Tidak Sehat: " << totalTidakSehat << endl;

    return 0;
}





1.Deklarasi Variabel Tunggal
Deklarasi Variabel Bersama Inisialisasi
Deklarasi Variabel dalam Array

2.Greetings

3.For Loop

4.If Statement