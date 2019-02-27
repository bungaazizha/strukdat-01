/*
Author		: Bunga Azizha N
NPM			: 140810180016
Deskripsi	: Membuat angka di swap
Tahun		: 2019
*/
//nama file: exercise-03
#include <iostream>
using namespace std;

void swap(int &x, int &y) {			//fungsi swap
	int temp = x;
	x = y;
	y = temp;
}

int main () {
	int x = 5;
	int y = 4;
	cout<< "x is "<<x<<endl;
	cout<< "y is "<<y<<endl;
	swap(x,y);
	cout<<"After Swap "<<endl;
	cout<<"x is "<<x<<endl;
	cout<<"y is "<<y<<endl;
}
