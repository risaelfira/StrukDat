#include<iostream>
using namespace std;

const int MAX = 5;
string data[MAX];
int dataCount = 0;

bool is_stack_empty() {
    return dataCount == 0;
}

bool is_stack_full() {
    return dataCount > MAX-1 ;
}

void push() {
    if (!is_stack_full()) {
        cout << "<< Masukkan Nilai : " << endl; 
        cin >> data[dataCount]; 
        dataCount++;
    } else { cout << "!!> stack sudah maksimum" << endl; }
}

void pop() {
    if (!is_stack_empty()) {
        // minus satu karena dataCount sekarang berada di lokasi yang kosong
        // misal sudah diisi 3, maka dataCount == 3
        // [3], [6], [4], [ ], [ ]
        //                 ^
        //                 | lokasi dataCount saat ini
        cout << ">> Pop stack ke-" << dataCount << " :" << data[dataCount-1] << endl; 
        dataCount--;
    } else { cout << "!!> stack masih kosong" << endl; }
}

void peek() {
    if (!is_stack_empty()) {
        cout << ">> Peek stack teratas (ke-" << dataCount << ") :" << data[dataCount-1] << endl; 
    } else { cout << "!!> stack masih kosong" << endl; }
}

void get_size() {
    cout << ">> Size stack saat ini: " << dataCount << endl; 
}

void display_stack() {
    if (is_stack_empty()) {
        cout << "!!> stack masih kosong" << endl; 
    } else {
        if (is_stack_full()) {
            cout << "!!> stack sudah maksimum" << endl; 
        }
        cout << ">> Isi stack: \n>> [ "; 
        for (int i = 0; i < sizeof(data)/sizeof(data[0]); i++) {
            cout << i << ":" << data[i] << " ";
        }
        cout << "]" << endl;
    }
}

void quit(){
	cout << "Program Selesai :)" << endl;
	exit(0);
}

int main()
{
    int pil; string isi;
    
menu:
    cout << "<< Menu:\t\t(1:Push 2:Pop 3:Peek 4:DisplayStack 5:CurrentSize 6.Exit)\n<< Pilih : ";
	cin >> pil;
    	
    switch (pil) {
        case 1:
            push();
            goto menu;
        case 2:
            pop();
            goto menu;
        case 3:
            peek();
            goto menu;
        case 4:
            display_stack();
            goto menu;
        case 5:
            get_size();
            goto menu;
        case 6:
            quit();
        default:
            cout << "!!> Pilihan tidak valid!" << endl;
            goto menu;
    }
    
    return 0;
}

