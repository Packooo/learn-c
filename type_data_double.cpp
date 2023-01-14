#include <iostream>
using namespace std;

int main(){
	double jari, hasil;
	const double p=3.1428;
	
	cout <<"masukan jumlah jari-jari : "; cin >>jari;
	hasil = jari*(jari * p);
	
	cout<<"Luas dari Lingkaran adalah : " <<hasil;
}