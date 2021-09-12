#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = -6, j = 4;
    cout << i << " & " << j << " = " << (i & j) << '\n'; //AND
    cout << i << " | " << j << " = " << (i | j) << '\n'; //OR
    cout << i << " ^ " << j << " = " << (i ^ j) << '\n'; //XOR
    cout << "~i = " << ~i;                               //NOT
    cout << '\n'
         << (i >> 1) << '\n';
    cout << (i << 1) << '\n';
    cout << i << 1 << '\n'; //be careful!
    return 0;
}