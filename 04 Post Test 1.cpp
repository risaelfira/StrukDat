#include <iostream>
using namespace std;
int array1[5]= {1200, 200, 2300, 1230, 1543};
int array2[5] = {12, 14, 16, 18, 20};
int temp, hasil = 0;
int main(){
	for(temp = 0; temp< 5; temp++){
		hasil += array1[temp];
	}
	for(temp = 0; temp<4; temp++){
		hasil += array2[temp];
	}
	cout<<hasil;
	
	return 0;
}
