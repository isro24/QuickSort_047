#include <iostream>
using namespace std;

// Array of integers to hold values
int arr[20];
int cmp_count = 0;	// number of comparsion
int mov_count = 0;	// number of data movements
int n;

void inpur() {
	while (true)
	{
		cout << "Masukkan panjang elemen array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksium panjang array adalah 20" << endl;
	}

	cout << "\n------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}
// Swaps the elemnt at index x with the element at index y
void swap(int x, int y)
{
	int temp;

	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}


