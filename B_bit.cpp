#include <bits/stdc++.h>
using namespace std;
int unique(vector<int> v)
{
    int ans = 0;
    for (int i : v)
        ans ^= i; //ans = ans ^ i;
    return ans;
}
int main()
{
    vector<int> vec;
    int n, tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        vec.push_back(tmp);
    }
    //cout << "Unique element in array is " << unique(vec);
    cout << unique(vec);
    return 0;
}