/*
Author		: Bunga Azizha N
NPM			: 140810180016
Deskripsi	: Konversi suhu dari celcius ke fahrenheit
Tahun		: 2019
*/
//nama file: exercise-02
#include <iostream>
using namespace std;

float cel2Fah(float temp) {
	return temp*9/5 +32;		//rumus menghitung celcius ke fahrenheit
}

int main() {
	int celcius = 9;
	float fahrenheit = cel2Fah(celcius);
	cout<<" temp is " << fahrenheit;
}
