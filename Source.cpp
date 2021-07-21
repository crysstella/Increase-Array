#include <iostream>
#include <string>
#include <array>

using namespace std;

int *elementShifter(int arr[], int size);

int main()
{
	/*Write a function named increaseArray which takes an arrayand its size as anargument.
	The function should create a new array(on the heap) that is twiceas large as the argument array.
	The elements from the argument array shouldbe placed in the first ‘size’ indexes of the new array.The rest of the indexesof the new array should be filled with 0s.
	The function then returns a pointerto this new array.Back in main, print out all elements of the new array andthen delete it.
	*/

	int myArray[] = { 3,4,6,2,6,10 };
	int SIZE = sizeof(myArray) / sizeof(int);

	int *newArray = elementShifter(myArray, SIZE);
	int newSize = 2 * SIZE;

	for (int i = 0; i < newSize; i++)
	{
		cout << newArray[i] << " ";
	}

	delete[] newArray;

	cout << endl;
	return 0;
}

int *elementShifter(int arr[], int size)
{
	int newSize = 2 * size;
	int *newArray = new int[newSize];

	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];
	}

	for (int i = size; i < newSize; i++)
	{
		newArray[i] = 0;
	}

	return newArray;
}
