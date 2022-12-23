//Muhammad Muqtada Alhaddad 
//22/500341/TK/54841
#include <iostream>
using namespace std;

int Angka;

// Memunculkan array
void array(int* arr, int size) {
  cout << "Masukkan " << size << " angkanya: ";
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  cout << "Angka"<<"["<<Angka<<"]:";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

//Memunculkan bilangan yang ganjil
void angkaGanjil(int* arr, int size) {
  cout << "Bilangan ganjilnya: ";
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 1) {
      cout << arr[i] << " ";
    }
  }
  cout << endl;
}

int main() {
cout << "Jumlah angka: ";
cin >> Angka;
int arr [Angka];
array(arr, Angka);
angkaGanjil(arr, Angka);
  return 0;
}