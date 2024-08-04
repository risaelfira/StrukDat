#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int maxStack = 100;
int currentTop = -1;
string stack[100];
 
void push(string data);
void pop();
void top();
void down();
void display();
int size();
bool isEmpty();
 
int main() {
	while(true) {
		system("cls");
		int choosenMenu;
		string data;
		cout << "=== Program stack ===\n\n";
		cout << "Menu :\n";
		cout << "1. push\n";
		cout << "2. pop\n";
		cout << "3. peek top\n";
		cout << "4. peek down\n";
		cout << "5. size\n";
		cout << "6. isEmpty\n";
		cout << "7. Display\n\n";
		cout << "Silakan masukkan nomor menu yang ingin dipilih : ";
		cin >> choosenMenu;
		switch(choosenMenu) {
			case 1:
				{
//					system("cls");
					cout << "Masukkan data : ";
					cin >> data;
					push(data);	
					cout << "\n";
					system("pause");
					break;
				}
			case 2:
//				system("cls");
				pop();
				cout << "\n";
				system("pause");
				break;
			case 3:
//				system("cls");
				top();
				cout << "\n";
				system("pause");
				break;
			case 4: 
//				system("cls");
				down();
				cout << "\n";
				system("pause");
				break;
			case 5:
//				system("cls");
				cout << size();
				cout << "\n";
				system("pause");
				break;
			case 6:
//				system("cls");
				if (isEmpty() == true) {
					cout << "Stack Kosong";
				} else {
					cout << "Stack Tidak kosong";
				}
				cout << "\n";
				system("pause");
				break;
			case 7:
//				system("cls");
				if (isEmpty() == true) {
					cout << "Stack Kosong";
				} else {
					display();
					cout << "\n";
				}
				system("pause");
				break;
		}
	}
}
 
// menambahkan data 
void push(string data) {
	if (currentTop == maxStack - 1) {
		cout << "Stack sudah penuh!";
		return;
	}
	currentTop++;
	stack[currentTop] = data;
	cout << "Berhasil menambahkan data ke stack paling atas!";
}
 
// menghapus data paling atas
void pop() {
	if (isEmpty() == true) {
		cout << "Stack masih kosong!";
		return;
	}
	stack[currentTop] = "";
	currentTop--;
	cout << "Berhasil menghapus data stack paling atas";
}
 
void top() {
	if (isEmpty() == true) {
		cout << "Stack masih kosong!";
		return;
	}
	cout << stack[currentTop];
}
 
void down() {
	if (isEmpty() == true) {
		cout << "Stack masih kosong!";
		return;
	}
	cout << stack[currentTop - currentTop];
}
 
void display(){
	cout << "Data Stack : " << endl;
	for (int i = maxStack; i>= 0; i--){
		if(stack[i] != ""){
			cout << stack[i] << endl;
		}
	}
}
 
bool isEmpty() {
	if (currentTop < 0) {
		return true;
	} else {
		return false;
	}
}
 
int size() {
	if (isEmpty() == true) {
		return 0;
	}
	int size = 0;
	for (int a = 0; a < maxStack; a++) {
		if (stack[a].length() > 0) {
			size++;
		} else {
			break;
		}
	}
	return size;
}
