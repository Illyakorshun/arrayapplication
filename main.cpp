#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<double, 6> profits;
    double totalProfit = 0.0;

    for (int i = 0; i < 6; ++i) {
        cout << "enter pributok  " << i + 1 << ": ";
        cin >> profits[i];
        totalProfit += profits[i];
    }

    cout << "all pributok: " << totalProfit << endl;

    return 0;
}
