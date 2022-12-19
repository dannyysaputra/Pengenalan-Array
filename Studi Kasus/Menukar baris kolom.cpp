#include <iostream>
using namespace std;

const string divider = "\n==================================================\n\n";

int main(){
  int i, j, nb, nk;
  
  cout << "MENUKAR NILAI BARIS DAN KOLOM\n";
  cout << "Nama: Danny Suggi Saputra\nNIM: 1227050033" << divider;

  cout << "Masukkan jumlah baris matriks: "; cin >> nb;
  cout << "Masukkan jumlah kolom matriks: "; cin >> nk;
  cout << endl;

  int num[nb][nk], temp[nb][nk];

  cout << "Masukkan elemen matriks \n";
  for (i = 1; i <= nb; i++) {
    for (j = 1; j <= nk; j++) {
      cout << "Matriks[" << i << "][" << j << "]: ";
	  cin  >> num[i][j];
    }
  }
  cout << "\n";

  cout << "Matriks Awal : \n";
  for (i = 1; i <= nb; i++){
    for (j = 1; j <= nk; j++){
      cout << num[i][j] << "\t";
    }
    cout << endl;
  }
  
  
  for (i = 1; i <= nb; i++){
    for (j = 1; j <= nk; j++){
      temp[j][i] = num[i][j];
    }
  }

  cout << "Hasil Sesudah di Tranpose Matriks: \n";
  for (i = 1; i <= nb; i++){
    for (j = 1; j <= nk; j++){
      cout << temp[i][j] << "\t";
    }
    cout << endl;
  }
}