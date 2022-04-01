#include <iostream>
using namespace std;

void print_range(int lo, int hi)
{
    if (lo > hi)
    {
        print_range(hi, lo);
        return; // 检查
    }
    while (lo < hi)
        cout << lo++ << " ";
}

int main()
{
    int low = 0, high = 0;
    cout << "Enter your numbers:" << endl;
    cin >> low >> high;
    print_range(low, high);
    return 0;
}
