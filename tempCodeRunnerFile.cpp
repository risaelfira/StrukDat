#include <iostream>
using namespace std;

/* struct : data yang dibentuk oleh beberapa data */
struct buah{
    string nama;
    string warna;
    float berat; 
    int harga;
    string rasa;

    // pointer untuk menghubungkan node
    buah *next;
}; buah *head, *tail, *nodeSekarang, *nodeBaru, *temporaryNode;


/*
 *  Fungsi Utama
 */
int main(){ 
    
    return 0;
} // akhir int main