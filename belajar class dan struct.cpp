#include <iostream>
using namespace std;

/*Structure (struktur) adalah kumpulan elemen data yang digabungkan menjadi satu
kesatuan. Dengan kata lain, structure merupakan bentuk struktur data yang dapat
menyimpan variabel-variabel dalam satu nama. */


//struct mahasiswa{
//	string nama, npm;
//};
//class mahasiswa{
//	private:
//		string nama;
//	public:
//		void setnama(string nama){
//			this->nama = nama;
//		}
//		string getnama(){
//			return nama;
//		}
//};
//
//int main(){
//	mahasiswa mhs;
//	cin>>mhs.nama;
//	cin>>mhs.npm;
//	cout<<mhs.nama<<" "<<mhs.npm;
//	mhs.setnama("habib");
//	cout<<mhs.getnama();
//}

/*Class adalah salah satu dari konsep OOP yang digunakan untuk membungkus data
abstraksi prosedural sebagai deskripsi tergeneralisir atau rancangan dari sebuah
object untuk mendefinisikan atau menggambarkan isi dan tingkah laku sebagai
entitas dari object.*/


/*
class nama_class{
	akses_specifier :
		data_member;
		..
	akses_specifier2 :
		data_member;
		..
}nama_object;

1.nama_class : tempat dimana anda dapat memberikan nama pada class
tersebut.
2. akses_specifier : tempat dimana anda dapat mendefinisikan hak akses
kepada anggota yang ada dibawahnya. Ada 3 macam access specifier yaitu
publik, private dan juga protected. Berbeda dengan struct, pada class default
access specifier nya bersifat private
3. Data_member / Atribut : tempat dimana anda dapat mendirikan sebuah
variabel atau function sebagai anggota dari class.
4. nama_object : tempat dimana anda dapat mendirikan object-object dengan
menggunakan class tersebut, hal ini merupakan opsional tapi jika class tidak
diberi nama class maka diwajibkan mendirikan object, karena kita tidak akan
bisa membuat object dengan class di luar dari deklarasi class tersebut.
*/

/*1. Private: data member atau atribut tidak dapat di akses atau dilihat dari luar kelas
itu sendiri.
2. Public: data member atau atribut dapat diakses atau dilihat dari luar kelas itu
sendiri
3. Protected: data member atau Atribut tidak dapat diakses dari luar class, namun
mereka dapat diakses pada class turunannya atau inherited class nya.*/


class luaslingkaran{
	private://untuk menyimpan tipe data
		float phi=3.14;
		float r;
	public://untuk menyimpan fungsi
	//seter untuk memasukan nilai
		void setphi(float phi=3.14){
			this->phi=3.14;
		}
		void setr(float r){
			this->r=r;
		}
		//geter untuk mengembalikan nilai
		float getphi(){
			return phi;
		}
		float getr(){
			return r;
		}
		float getluas(){
			return phi*r*r;
		}
};
int main(){
	luaslingkaran l;//memeanggil class
	float a;//tipe data baru untuk memasukan r
	cin>>a;
	l.setr(a);//masukan nilai r
	cout<<"phi : "<<l.getphi()<<endl;//memanggil geter phi
	cout<<"r : "<<l.getr()<<endl;//memanggil geter r
	cout<<l.getluas();//memanggil geter luas
}

