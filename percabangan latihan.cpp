#include <iostream>
using namespace std;
int main(){
	string penjumlahan, pembagian, perkalian, pengurangan, a;
	int x,y,nilai;
	cout<< "masukkan angka pertama! : ";
	cin >> x;
	cout<<"Masukkan angka kedua! : ";
	cin >> y;
	cout <<"======= Pilihan Operasi ======="<<endl;
	cout <<"- penjumlahan"<<endl;
	cout <<"- pengurangan"<<endl;
	cout <<"- perkalian"<<endl;
	cout <<"- pembagian"<<endl;
	cout <<"Masukkan pilihan operasi diinginkan! :";
	cin >> a;
	
	if (a == "penjumlahan"){
		nilai= x+y;
		cout<<"Hasil ="<< nilai<<endl;
	} else if (a == "perkalian"){
		nilai= x*y;
		cout<<"Hasil ="<< nilai<<endl;
	} else if(a == "pembagian"){
		nilai= x/y;
		cout<<"Hasil ="<< nilai<<endl;
	} else if(a == "pengurangan"){
		nilai= x-y;
		cout<<"Hasil ="<< nilai<<endl;
	} else {
		cout<<"Anda tidak memilih atau salah mengetikkan kata"<<endl;
}
	cout<<"program ini adalah program kalkulator sederhana";
	return 0;
}
