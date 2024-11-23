#include <iostream>
#include <array>

using namespace std;

int main()
{
    const int numM = 12;
    array<double, numM> profit;
    int max = 0, min = 0;

    for (int i = 0; i < numM; ++i) {
        cout << "Enter: " << i + 1 << ": ";
        cin >> profit[i];
    }

    for (int i = 1; i < numM; ++i) {
        if (profit[i] > profit[max]) {
            max = i;
        }
        if (profit[i] < profit[min]) {
            min = i;
        }
    }

    cout << "Max: " << max + 1  << endl;
    cout << "Min: " << min + 1  << endl;

    return 0;
}

