// StrukturC_0058.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct mahasiswa {
	string nim;
	string nama;
	string alamat;
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
	cin >> mhs.alamat;
	cout << " umur mahasiswa :";
	cin >> mhs.umur;
}
}


