#include <iostream>
#include <array>

using namespace std;

int main()
{
    const int numM = 12;
    array<double, numM> profits;
    int max = 0, min = 0;

    for (int i = 0; i < numM; ++i) {
        cout << "Enter the profit for month " << i + 1 << ": ";
        cin >> profits[i];
    }

    for (int i = 1; i < numM; ++i) {
        if (profits[i] > profits[max]) {
            max = i;
        }
        if (profits[i] < profits[min]) {
            min = i;
        }
    }

    cout << "Max: " << max + 1  << endl;
    cout << "Min: " << min + 1  << endl;

    return 0;
}

