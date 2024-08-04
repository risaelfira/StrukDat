#include <iostream>
#include <queue>
#include <string>

using namespace std;

// Fungsi untuk menambahkan wisudawan ke antrian
void tambahWisudawan(queue<string>& wisudawanQueue, const string& namaWisudawan) {
    wisudawanQueue.push(namaWisudawan);
    cout << "Wisudawan " << namaWisudawan << " telah ditambahkan ke antrian." << endl;
}

// Fungsi untuk memanggil wisudawan dari antrian
void panggilWisudawan(queue<string>& wisudawanQueue) {
    if (!wisudawanQueue.empty()) {
        string namaWisudawan = wisudawanQueue.front();
        wisudawanQueue.pop();
        cout << "Memanggil wisudawan: " << namaWisudawan << endl;
    } else {
        cout << "Tidak ada wisudawan dalam antrian." << endl;
    }
}

// Simulasi proses pemindaian undangan dan pemanggilan wisudawan
void prosesPemanggilanWisudawan(const vector<string>& listWisudawan) {
    // Membuat antrian kosong
    queue<string> wisudawanQueue;
    
    // Menambahkan wisudawan ke antrian sesuai urutan pemindaian
    for (const string& nama : listWisudawan) {
        tambahWisudawan(wisudawanQueue, nama);
    }
    
    cout << "\nProses pemanggilan wisudawan dimulai...\n" << endl;
    
    // Memanggil wisudawan sesuai urutan dalam antrian
    while (!wisudawanQueue.empty()) {
        panggilWisudawan(wisudawanQueue);
    }
}

int main() {
    // Daftar wisudawan yang di-scan undangannya
    vector<string> daftarWisudawan = {"Andi", "Budi", "Cici", "Dodi", "Eka"};
    
    // Menjalankan simulasi pemanggilan wisudawan
    prosesPemanggilanWisudawan(daftarWisudawan);
    
    return 0;
}