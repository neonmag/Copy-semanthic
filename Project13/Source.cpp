#include <iostream>
#include "DynArray.h"

using namespace std;

int main()
{
	DynArray obj1(5); // Initializating of class object
	obj1.Random();
	obj1.Print();
	
	DynArray obj2 = obj1; // Using of copy semantic
	obj2.Print();
	obj2.Input(); // I added this method for normal work finding methods
	obj2.AddLast(10);
	obj2.AddFirst(18);
	obj2.AddIndex(19, 2);
	obj2.DeleteLast();
	obj2.DeleteFirst();
	obj2.DeleteIndex(2);
	obj2.FindFirst(18);
	obj2.FindLast(18);
	obj2.Reverse();
}