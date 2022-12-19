#include <iostream>
using namespace std;

const string divider = "\n==================================================\n\n";

int main(){
  int i, j, n;
  int num[20][20], temp[20][20];
  
  cout << "MENUKAR NILAI BARIS DAN KOLOM\n";
cout << "Nama: Danny Suggi Saputra\nNIM: 1227050033" << divider;

  cout << "Masukkan jumlah baris dan kolom matriks: "; cin >> n;
  cout << endl;

  cout << "Masukkan elemen matriks \n";
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      cout << "Matriks[" << i+1 << "][" << j+1 << "]: ";
	  cin  >> num[i][j];
    }
  }
  cout << "\n";

  cout << "Matriks Awal : \n";
  for (i = 0; i < n; i++){
    for (j = 0; j < n; j++){
      cout << num[i][j] << "\t";
    }
    cout << endl;
  }
  
  
  for (i = 0; i < n; i++){
    for (j = 0; j < n; j++){
      temp[j][i] = num[i][j];
    }
  }

  cout << "Hasil Sesudah di Tranpose Matriks: \n";
  for (i = 0; i < n; i++){
    for (j = 0; j < n; j++){
      cout << temp[i][j] << "\t";
    }
    cout << endl;
  }
}