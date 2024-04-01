// StructurB_2_0058.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct detailalamat {
	string desa;
	string kota;
};

struct mahasiswa {
	string nim;
	string nama;
	detailalamat alamat;
	int umur;

};
int main()
{
	mahasiswa mhs;
	cout << " nomor mahasiswa :";
	cin >> mhs.nim;
	cout << " nama mahasiswa :";
	cin >> mhs.nama;

	cout << " alamat mahasiswa :";
	cout << "\t nama desa :";
	cin >> mhs.alamat.desa;
	cout << "\t nama kota :";
	cin >> mhs.alamat.kota;

	cout << " umur mahasiswa :";
	cin >> mhs.umur;
}


