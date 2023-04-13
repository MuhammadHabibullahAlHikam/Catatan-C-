/*
#include <iostream>
using namespace std;

//deklarasi function dengan parameter
int tambah(int a, int b){
	return a + b;
}

int main() {
	int x = 5, y = 7, hasil;
	
	// memanggil function tambah dan menyimpan hasilnya ke dalam variabel hasil
	hasil = tambah(x,y);
	
	// menampilkan hasil
	cout << "hasil penjumlahan" << x << " dan " << y << " adalah " << hasil << endl;
	
	return 0
}
//Pada contoh di atas, kita membuat sebuah function bernama `tambah` yang menerima
//dua parameter bertipe `int` dan mengembalikan hasil penjumlahannya. Kemudian, di
//dalam fungsi `main`, kita memanggil function `tambah` dan menyimpan hasilnya ke
//dalam variabel `hasil`. Hasil ini kemudian ditampilkan ke layar menggunakan perintah
//`cout`.
*/

/*
//lingkaran
#include<iostream>
#include<cmath>
using namespace std;

double luasLingkaran(double r){
	double pi = M_PI
	return pi*r*r;
}

int main(){
	double r;
	
	cin >> r;
	
	cout << "Luas Lingkaran: " << luasLingkaran(r);
	
	return 0;
}
*/



//absen
#include<iostream>
using namespace std;

void absen(string name, int npm){
	cout << name << "_" << npm;
}

int main(){
	string name;
	int npm;
	
	getline(cin, name);
	cin >> npm;
	
	absen(name, npm);
	
	return 0;
}
