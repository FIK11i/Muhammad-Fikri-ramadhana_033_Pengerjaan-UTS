//Membuat Progam dengan Output yang diminta
#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int umur;
	string umr;
	
	cout<<"Kategori Umur Seseorang"<<endl;
	cout<<"\n";
	
	cout<<"Masukkan Umur Anda (dalam Tahun): "<<endl;
	cin>>umur;
	cout<<"\n";
	
	switch(umur){
		case 0 ... 1: umr="Bayi";
		break;
		case 2 ... 3: umr="Batita";
		break;
		case 4 ... 5: umr="Balita";
		break;
		case 6 ... 12: umr="Anak-anak";
		break;
		case 13 ... 17: umr="Remaja";
		break;
		case 18 ... 30: umr="Pemuda";
		break;
		case 31 ... 60: umr="Dewasa";
		break;
		case 61 ... 100: umr="Lansia";
		break;
		
		deafault: cout<<"Tidak Ditemukan Data"<<endl;
		cout<<"\n";
	}
		
	cout<<"============================="<<endl;
	cout<<"     KATEGORI       UMUR     "<<endl;
	cout<<"       Bayi         0-1      "<<endl;
	cout<<"      Batita        1-3      "<<endl;
	cout<<"      Balita        3-5      "<<endl;
	cout<<"     Anak-anak      5-12     "<<endl;
	cout<<"      Remaja        12-17    "<<endl;
	cout<<"      Pemuda        17-30    "<<endl;
	cout<<"      Dewasa        30-60    "<<endl;
	cout<<"      Lansia        60-100   "<<endl;
	cout<<"============================="<<endl;
	cout<<"\n";
	
	cout<<"Kategori Umur Anda : "<<umr;
}
