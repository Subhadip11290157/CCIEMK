#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = -6, j = 4;
    cout << i << " & " << j << " = " << bitset<5>(i & j) << '\n'; //AND
    cout << i << " | " << j << " = " << bitset<5>(i | j) << '\n'; //OR
    cout << i << " ^ " << j << " = " << bitset<5>(i ^ j) << '\n'; //XOR
    cout << "~i = " << bitset<5>(~i);                             //NOT
    cout << '\n'
         << bitset<5>(i >> 1) << '\n';
    cout << bitset<5>(i << 1) << '\n';
    return 0;
}