#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs1, mhs2;

	mhs1.nim = "20220140181";
	mhs1.nama = "Latif";
	mhs1.alamat = "yogyakarta";
	mhs1.umur = 19;


	cout << "\nMasukkan nim :";
	cin >> mhs2.nim;
	cout << "\nMasukkan nama :";
	cin >> mhs2.nama;
	cout << "\nMasukkan alamat :";
	cin >> mhs2.alamat;
	cout << "\nMasukkan umur :";
	cin >> mhs2.umur;


	cout << "\n Nim :" << mhs1.nim;
	cout << "\n nama :" << mhs1.nama;
	cout << "\n alamat :" << mhs1.alamat;
	cout << "\n umur :" << mhs1.umur;


	cout << "\n Nim :" << mhs2.nim;
	cout << "\n nama :" << mhs2.nama;
	cout << "\n alamat :" << mhs2.alamat;
	cout << "\n umur :" << mhs2.umur;




}