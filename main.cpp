#include <iostream>
#include <ctime>

using namespace std;


int main() 
{
	srand(time(NULL));
	const size_t allocated_memory = 100;
	int array_[allocated_memory];
	size_t size;
	do
	{
		cout << "Enter the size of the array: ";
		cin >> size;
		if (size <= allocated_memory)
		{
			break;
		}
		cout << "The size of the array is too big. Try again.\n";
	} 
	while (true);
	for (size_t i = 0; i < size; i++)
	{
		array_[i] = rand() % 100;
	}
	cout << "Array: ";
	for (size_t i = 0; i < size; i++)
	{
		cout << array_[i] << " ";
	}
	cout << endl;
	cout << sizeof(array_) << endl;

	return 0;
}