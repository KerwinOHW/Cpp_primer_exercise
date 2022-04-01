#include <iostream>
using namespace std;

void print_range(int small, int big)
{
    if (small > big)
        print_range(big, small);
    for (int i = small; i <= big; ++i)
        cout << i << " ";
}

int main()
{
    int low = 0, high = 0;
    cout << "Enter your numbers:" << endl;
    cin >> low >> high;
    print_range(low, high);
    return 0;
}
