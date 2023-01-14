#include <iostream>
using namespace std;

int main(){
	float p,l,luas,keliling;
	
	cout << "Masukan nilai panjang : "; cin >> p;
	cout << "Masukan nilai lebar : "; cin >> l;
	luas = p*l;
	keliling = 2*(p+l);
	cout << "Luas Persegi Panjang adalah : " << luas <<endl;
	cout << "Keliling persegi Panjang adalah : " << keliling;