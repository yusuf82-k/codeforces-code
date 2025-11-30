#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }
        if ((a % b != 0) && (b % a != 0))
        {
            cout << -1 << endl;
            continue;
        }

        ll x = (a % b == 0) ? (a / b) : (b / a);
        int count = 0;
        int m=x&(x-1);
        if (m!=0)
        {
            cout << -1 << endl;
            continue;
        }
        while (x > 1)
        {
            count++;
            x /= 2;
        }
        int op=count/3;
        if(count%3!=0)
        op++;
        cout<<op<<endl;
        
    }
    return 0;
}