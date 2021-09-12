#include <bits/stdc++.h>
using namespace std;

string toggle(string s)
{
    for (int i = 0; s[i] != '\0'; i++)
        s[i] ^= 32;
    return s;
}

int main()
{
    string str = "KitE";
    cout << "Original string: " << str << '\n';
    cout << "Toggled string: " << toggle(str) << '\n';
    return 0;
}