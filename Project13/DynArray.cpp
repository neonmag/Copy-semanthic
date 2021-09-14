#include "DynArray.h"
#include <ctime>
#include <iostream>

using namespace std;

DynArray::DynArray() // Constructor by default
{
	if (this->arr != nullptr)
	{
		delete[]this->arr;
	}
	this->size = 0;
	this->arr = nullptr;
}

DynArray::DynArray(int size) // Constructor with entering size
{
	if (this->arr != nullptr)
	{
		delete[]this->arr;
	}
	this->size = size;
	this->arr = nullptr;
}

DynArray::DynArray(const DynArray& obj) // Copy constructor
{
	this->size = obj.size;
	this->arr = new int[this->size];
	for (int i = 0; i < this->size; i++)
	{
		this->arr[i] = obj.arr[i];
	}
}

void DynArray::Input() // Input method
{
	if (this->size == 0)
	{
		cout << "Enter amount of elements: ";
		cin >> this->size;
		cout << endl;
	}
	this->arr = new int[this->size];
	for (int i = 0; i < this->size; i++)
	{
		cout << "Enter " << i << " element: ";
		cin >> this->arr[i];
		cout << "\n";
	}
}

void DynArray::Print() // Output method
{
	for (int i = 0; i < size; i++)
	{
		cout << this->arr[i] << "\t";
	}
	cout << "\n";
}

void DynArray::Random() // Randomize
{
	srand(time(0));
	if (this->size == 0)
	{
		this->size = 1 + rand() % 11;
	}
	this->arr = new int[this->size];
	for (int i = 0; i < this->size; i++)
	{
		this->arr[i] = rand() % 101;
	}
}

void DynArray::AddLast(int digit) // Adding num in the end of array
{
	int* ptrArray = new int[this->size + 1];
	for (int i = 0; i < this->size; i++)
	{
		ptrArray[i] = this->arr[i];
	}
	ptrArray[this->size] = digit;
	for (int i = 0; i < this->size + 1; i++)
	{
		cout << ptrArray[i] << "\t";
	}
	cout << "Adding last";
	cout << "\n";
	delete[]ptrArray;
	ptrArray = nullptr;
}

void DynArray::AddFirst(int digit) // Adding num in the start of array
{
	int* ptrArray = new int[this->size + 1];
	for (int i = 1; i < this->size + 1; i++)
	{
		ptrArray[i] = this->arr[i - 1];
	}
	ptrArray[0] = digit;
	for (int i = 0; i < this->size + 1; i++)
	{
		cout << ptrArray[i] << "\t";
	}
	cout << "Adding first";
	cout << "\n";
	delete[]ptrArray;
	ptrArray = nullptr;
}

void DynArray::AddIndex(int digit, int index) // Adding num by index
{
	int* ptrArray = new int[this->size + 1];
	for (int i = 0; i < this->size + 1; i++)
	{
		if (i == index)
		{
			ptrArray[i] = digit;
		}
		else if (i > index)
		{
			ptrArray[i] = this->arr[i - 1];
		}
		else
		{
			ptrArray[i] = this->arr[i];
		}
	}
	for (int i = 0; i < this->size + 1; i++)
	{
		cout << ptrArray[i] << "\t";
	}
	cout << "Adding index " << index;
	cout << "\n";
	delete[]ptrArray;
	ptrArray = nullptr;
}

void DynArray::DeleteLast() // Delete num from the end of array
{
	int* ptrArray = new int[this->size - 1];
	for (int i = 1; i < this->size; i++)
	{
		ptrArray[i - 1] = this->arr[i];
	}
	for (int i = 0; i < this->size - 1; i++)
	{
		cout << ptrArray[i] << "\t";
	}
	cout << "Deleting first";
	cout << "\n";
	delete[]ptrArray;
	ptrArray = nullptr;
}

void DynArray::DeleteFirst() // Delete num from the start of array
{
	int* ptrArray = new int[this->size - 1];
	for (int i = 0; i < this->size - 1; i++)
	{
		ptrArray[i] = this->arr[i];
	}
	for (int i = 0; i < this->size - 1; i++)
	{
		cout << ptrArray[i] << "\t";
	}
	cout << "Deleting last";
	cout << "\n";
	delete[]ptrArray;
	ptrArray = nullptr;
}

void DynArray::DeleteIndex(int index) // Delete num by index
{
	int* ptrArray = new int[this->size - 1];
	for (int i = 0; i < this->size - 1; i++)
	{
		if (i >= index)
		{
			ptrArray[i] = this->arr[i + 1];
		}
		else
		{
			ptrArray[i] = this->arr[i];
		}
	}
	for (int i = 0; i < this->size - 1; i++)
	{
		cout << ptrArray[i] << "\t";
	}
	cout << "Deleting index " << index;
	cout << "\n";
	delete[]ptrArray;
	ptrArray = nullptr;
}

void DynArray::FindFirst(int digit) // Find num by first index
{
	cout << "This is finding first index of number\n";
	for (int i = 0; i < this->size; i++)
	{
		if (this->arr[i] == digit)
		{
			cout << "Our number is in index: " << i << endl;
			break;
		}
		if (this->arr[i] != digit && i == this->size - 1)
		{
			cout << "We have not the same number in array\n";
		}

	}
}

void DynArray::FindLast(int digit) // Find num by last index
{
	cout << "This is the finding last index of number\n";
	int temp = -1;
	for (int i = 0; i < this->size; i++)
	{
		if (this->arr[i] == digit)
		{
			temp = i;
		}
	}
	if (temp != -1)
	{
		cout << "Our number is in index " << temp << endl;
	}
	else
	{
		cout << "We have not the same number in array\n";
	}
}

void DynArray::Reverse() // Reverse array
{
	cout << "This is reverse\n";
	int* ptrArray = new int[this->size];
	for (int i = 0; i < this->size; i++)
	{
		ptrArray[i] = this->arr[this->size - 1 - i]; // Reverse method
		cout << ptrArray[i] << "\t";
	}
	delete[]ptrArray;
	ptrArray = nullptr;
}

DynArray::~DynArray() // Destructor
{
	delete[]this->arr;
	this->arr = nullptr;
}

