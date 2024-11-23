#include <iostream>
#include <array>

using namespace std;

int main()
{
    double num = 5;
	array <double, 5> arr;
	double per = 0;

	for (int i = 0; i < num; i++) {
		cout << "Enter a number: ";
		cin >> arr[i];
		per += arr[i];
	}

	cout << "The average of the numbers is: " << per << endl;
		

    return 0;
}
