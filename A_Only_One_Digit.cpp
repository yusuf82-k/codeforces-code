#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        int mini = INT_MAX;
        while (s > 0)
        {
            int rem = s % 10;
            mini = min(rem, mini);
            s /= 10;
        }

        cout << mini << endl;
    }
    return 0;
}