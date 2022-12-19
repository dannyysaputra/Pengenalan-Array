#include <iostream>
using namespace std;
	
const string divider = "\n==================================================\n";

int main() {
	int n_baris, n_kolom, i, j, res;
	
	cout << "MENCARI NILAI YANG TIDAK HABIS DIBAGI DENGAN 3, 5, 7\n";
	cout << "Nama: Danny Suggi Saputra\nNIM: 1227050033" << divider;
	
	cout << endl << "Masukkan banyak baris: "; cin >> n_baris;
	cout << "Masukkan banyak kolom: "; cin >> n_kolom;
	cout << endl;
	
	int num[n_baris][n_kolom];
	
	// input
	cout << "Masukkan elemen matriks \n";
	for (i = 1; i <= n_baris; i++) {
		for (j = 1; j <= n_kolom; j++) {
			cout << "Num[" << i << "." << j << "]: ";
			cin >> num[i][j];
		}
	}
	cout << endl;
	
	// elemen matriks
	cout << "Matriks yang dimasukkan : \n";
  	for (i = 1; i <= n_baris; i++){
    	for (j = 1; j <= n_kolom; j++){
			cout << num[i][j] << "\t";
    	}
    	cout << endl;
  	}
	cout << endl;
	
	// proses
	cout << "Bilangan yang tidak habis dibagi 3, 5, 7: ";
	for (i = 1; i <= n_baris; i++) {
		for (j = 1; j <= n_kolom; j++) {
			if (num[i][j] % 3 != 0 && num[i][j] % 5 != 0 && num[i][j] % 7 != 0) {
				cout << num[i][j] << " ";
			} 
		}
	}
}