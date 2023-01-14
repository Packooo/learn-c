#include <iostream>
using namespace std;

int main(){
	//deklarasi tipe data variable
	string nama;
	int umur;
	char jenis_kelamin;
	
	// ---- proses input ---
	cout<<"Siapakah namamu?" <<endl;
	cout<<"Jawab: ";
	//menyimpan data ke variable
	getline(cin,nama);
	
	cout<<"Berapakah umurmu?" <<endl;
	cout<<"Jawab: ";
	//menyimpan data ke variable
	cin>>umur;
	
	cout<<"Jenis kelamin [L/P]: ";
	//menyimpang data ke variable
	cin>>jenis_kelamin;
	
	//---proses output---
	cout <<"Salam kenal, " <<nama <<" Sekarang anda berusia: ";
	cout <<umur <<" dan anda berjenis kelamin: " <<jenis_kelamin;
}