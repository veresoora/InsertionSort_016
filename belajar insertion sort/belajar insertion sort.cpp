#include <iostream>
using namespace std;

int arr[20];			// Membuat Array dengan panjang data 20
int n;					// Membuat variable inputan n

void input() {			// Procedure Input
	while (true) 
	{	
		cout << "Masukan banyaknya elemen pada array : ";		// Membuat Inputan jumlah element Array
		cin >> n;												// memanggil variabel inputan n

		if (n <= 20) {											// Membuat kondisi n tidak lebih dari 20 
			break;
		}
		else 
		{
			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";	// Menampilkan Pesan jika data lebih dari 20
		}
	}
	cout << endl;														// Membuat jarak per baris program
	cout << "====================" << endl;								// Membuat tampilan susunan data element array
	cout << "Masukan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++)						// Menggunakan perulangan for untuk menyimpan data pada array
	{
		cout << "Data ke-" << (i + 1) << ": ";		// Memasukkan atau menginputkan nilai data a 
		cin >> arr[i];								// Menyimpan nilai data n kedalam array arr
	}
}