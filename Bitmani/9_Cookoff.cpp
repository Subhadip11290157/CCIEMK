#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, x, ans;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        x = -1; //11111
        for (int y : vec)
            x &= y;
        //optimal x
        ans = 0;
        for (int y : vec)
        {
            ans = ans | (x ^ y);
        }
        cout << x << " " << ans << '\n';
    }
    return 0;
}
