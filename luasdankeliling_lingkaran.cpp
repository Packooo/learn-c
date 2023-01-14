#include <iostream>
using namespace std;

int main(){
	float jari,luas,keliling;
	const float phi=3.14;
	
	cout << "masukan nilai jari : "; cin >> jari;
	luas = phi*jari*jari;
	keliling = 2*phi*jari;
	cout << "Luas lingkaran adalah : " <<luas <<endl;
	cout << "Keliling lingkaran adalah : " <<keliling;
}