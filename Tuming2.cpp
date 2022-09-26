#include <iostream>
using namespace std;
int main (){
	string Nama, NPM, Kelas, Jurusan;
	cout << "Nama :";
	getline(cin, Nama);
	cout << "NPM :";
	getline(cin, NPM);
	cout << "Kelas :";
	getline(cin, Kelas);
	cout << "Jurusan :";
	getline(cin, Jurusan);

	cout << "\nNama Kamu Adalah \t :"<<Nama;
	cout << "\nNPM Kamu Adalah \t :"<<NPM;
	cout << "\nKelas Kamu Adalah \t :"<<Kelas;
	cout << "\nJurusan Kamu Adalah \t :"<<Jurusan;

return 0;
}