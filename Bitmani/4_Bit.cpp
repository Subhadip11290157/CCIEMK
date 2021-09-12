#include <iostream>
using namespace std;

void swappy(int &x, int &y)
{
    if (x != y)
    {
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;
    }
}

int main()
{
    int x = 3, y = 4;
    cout << "Before swap: x = " << x << " and y = " << y;
    swappy(x, y);
    cout << "\nAfter swap: x = " << x << " and y = " << y;

    return 0;
}