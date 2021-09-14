#pragma once
class DynArray
{
	int* arr; // Dynamic line
	int size; // Static line
public:
	DynArray(); // Constructor by default
	DynArray(int size); // Constructor with entering size
	DynArray(const DynArray& obj); // Copy constructor
	void Input(); // Input method
	void Print(); // Output method
	void Random(); // Randomize
	void AddLast(int digit); // Adding num in the end of array
	void AddFirst(int digit); // Adding num in the start of array
	void AddIndex(int digit, int index); // Adding num by index
	void DeleteLast(); // Delete num from the end of array
	void DeleteFirst(); // Delete num from the start of array
	void DeleteIndex(int index); // Delete num by index
	void FindFirst(int digit); // Find num by first index
	void FindLast(int digit); // Find num by last index
	void Reverse(); // Reverse array
	~DynArray(); // Destructor
};