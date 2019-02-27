/*
Author		: Bunga Azizha N
NPM			: 140810180016
Deskripsi	: Menampilkan angka dengan rentang 1 sampai 100, dengan aturan kelipatan 3 menampilkan fizz,kelipatan 5 menampilkan buzz dan kelipatan3&5 menampilkan fizzbuzz
Tahun		: 2019
*/
//nama file: exercise-01
#include <iostream>
using namespace std;

void fizzbuzz() //void untuk membuat fungsi / kondsi yang diinginkan
{
	for (int i=1 ; i<101 ; i++) {
		if (i % 3 == 0 && i % 5 ==0){		//angka kelipatan 3 dan 5
		cout<<"FizzBuzz";}					//menampilkan FizzBuzz
		else if (i % 3 == 0){				//angka kelipatan 3 
		cout<<"Fizz";}						//menampilkan Fuzz
		else if (i % 5 == 0){				//angka kelipatan 5
		cout<<"Buzz";}						//menampilkan Buzz
		else {
			cout<<i;
		}
		cout<<endl;
	}
}

int main (){
	fizzbuzz();
}
