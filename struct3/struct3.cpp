
#include <iostream>
#include <string>

using namespace std;

struct AlamatDetail {
	char desa[20];				
	char kota[20];
};

struct Mahasiswa {
	char nim[12];
	char nama[20];
	AlamatDetail alamat;
	int umur;
};
int main() {

	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "Masukkan nim :";
		cin.getline(mhs[i].nama, 20);
		cout << "Masukkan nama :";
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
}
