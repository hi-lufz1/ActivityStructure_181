#include <iostream>
using namespace std;

struct AlamatDetail {
	string desa;
	string kota;
 };

struct Mahasiswa {
	string nim;
	string nama;
	AlamatDetail alamat;
	int umur;
};

int main() {

	Mahasiswa mhs;
	cout << "\nMasukkan nim :";
	cin >> mhs.nim;
	cout << "\nMasukkan nama :";
	cin >> mhs.nama;
	cout << "Alamat :" << endl;
	cout << "\t Desa : ";
	cin >> mhs.alamat.desa;
	cout << "\t Kota : ";
	cin >> mhs.alamat.kota;
	cout << "\nMasukkan umur :";
	cin >> mhs.umur;


	cout << "\n Nim :" << mhs.nim;
	cout << "\n nama :" << mhs.nama;
	cout << "\n desa :" << mhs.alamat.desa;
	cout << "\n kota :" << mhs.alamat.kota;
	cout << "\n umur :" << mhs.umur;








}