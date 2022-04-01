#include <iostream>
using namespace std;

auto sum(int lo, int hi)
{
    int sum = 0;
    while (lo <= hi)
        sum += lo++; // 效率
    // {
    //     sum += val;
    //     ++val;
    // }
    return sum;
}

int main()
{
    cout << "Sum of 50 to 100 inclusive is " << sum(50, 100) << endl;
    return 0;
}
