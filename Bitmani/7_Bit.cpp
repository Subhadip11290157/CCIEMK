#include <bits/stdc++.h>
using namespace std;

int setbits(int n) //also see: built_in alternative
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    int x = 15;
    cout << x << " has " << setbits(x) << " setbit(s).";
    return 0;
}