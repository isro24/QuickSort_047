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

void q_short(int low, int high)
{
	int pivot, i, j;
	if (low > high)												// Langkah 1
		return;

	//Partition the list  intotwo parts:
	//One containing elements less that or equal to pivot
	//Outher containing elements grather than pivot

	pivot = arr[low];											// Langkah 2			

	i - low + 1;												// Langkah 3
	j = high;													// Langkah 4


	while (i <= j)												// Langkah 10
	{
		//Search for an element greater than pivot
		while ((arr[i] <= pivot) && (i <= high))				// Langkah 5
		{
			i++;												// Langkah 6
			cmp_count++;
		}
		cmp_count++;
		//Search for an element less than or equal to pivot
		while ((arr[j] > pivot) && (j >= low))					// Langkah 7
		{
			j--;												// Langkah 8
			cmp_count++;
		}
		cmp_count++;

																// Langkah 9
		if (i < j) // if the greater element is on the left on the element
		{
			//swap the element at index i whit the element at index j
			swap(i, j);
			mov_count;
		}
	}
	//j now containt the index of the element in the sorted list
	if (low < j)												// Langkah 11
	{
		//move the pivot to its correct position in the list
		swap(low, j);
		mov_count++;
	}
	//sort the list on the left of pivot using quick sort
	q_short(low, j - 1);										// Langkah 12	

	//Sort the list on the right of pivot using quick sort
	q_short(j + 1, high);										// Langkah 13


}

