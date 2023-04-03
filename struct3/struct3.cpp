#include <iostream>
#include <string>
using namespace std;

struct AlamatDetail {
	string desa[20];
	string kota[20];
};

struct Mahasiswa {
	string nim[12];
	string nama[20];
	AlamatDetail alamat;
	int umur;
};

int main() {

	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "Masukkan nim :";
		cin.getline(mhs[i].nim, 12);
		cout << "Masukkan nama :" ;
		cin.getline(mhs[i].nama, 20);
		cout << "Alamat :" << endl;
		cout << "\t Desa : ";
		cin.getline(mhs[i].alamat.desa, 20);
		cout << "\t Kota : ";
		cin.getline(mhs[i].alamat.kota, 20);
		cout << "Masukkan umur :";
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "\n Nim :" << mhs[i].nim;
		cout << "\n nama :" << mhs[i].nama;
		cout << "\n desa :" << mhs[i].alamat.desa;
		cout << "\n kota :" << mhs[i].alamat.kota;
		cout << "\n umur :" << mhs[i].umur;

	}
