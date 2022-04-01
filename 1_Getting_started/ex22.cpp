#include <iostream>
#include "include/Sales_item.h"
using namespace std;

int main()
{
    Sales_item total;
    if (cin >> total) // 判断输入是否为item，若是，开始统计
    {
        Sales_item trans;
        while (cin >> trans)
        {
            if (trans.isbn() == total.isbn())
                total += trans;
            else
            {
                cout << total << endl;
                total = trans; // 将下一item值赋给total，开始新item统计
            }
        }
        cout << total << endl; // 最后一条ISBN统计的total
    }
    else // 若第一次输入不是item，报错
    {
        cerr << "No data?!" << endl;
        return -1;
    }

    return 0;
}
