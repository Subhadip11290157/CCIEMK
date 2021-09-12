#include <bits/stdc++.h>
using namespace std;

bool pow2(int x)
{
    if (x < 1)
        return false;
    //else if:-
    if ((x & (x - 1)) == 0)
        return true;
    //else:-
    return false;
}

int main()
{
    int x = 16;
    if (pow2(x))
        cout << x << " is a power of 2";
    else
        cout << x << " is NOT a power of 2";
    return 0;
}