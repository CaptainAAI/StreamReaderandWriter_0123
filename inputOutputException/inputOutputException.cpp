using namespace std;
#include<iostream>
#include<fstream>
#include<string>

int main() {
	string baris;
	
	//membuka file dalam mode menulis
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open("FatanKayang.txt");

	cout << ">=Menulis file,\'q\untuk keluar" << endl;

	while (true) {
		cout << "-";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
	}


	
}