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
    std::cout << "Hello World!\n";
}


