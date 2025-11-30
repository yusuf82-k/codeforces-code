#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b(n);
        int am = 0;
        int mm = 0;
        int ap = 0;
        int mp = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];

            if (a[i] == b[i] && b[i] == 1)
            {
                am++;
                mm++;
            }
            else if (i & 1)
            {
                if (a[i] != b[i])
                    mp++;
            }
            else if((i%2==0)&&(a[i]!=b[i]))
            {
                   ap++;
            }

        }
        if(ap>mp){
            int x=am+ap;
            int y=mm+mp;
            if(x%2!=y%2)
            cout<<"Ajisai"<<endl;
            else
            cout<<"Tie"<<endl;
        }
        else if(mp>ap){
                  int x=am+ap;
            int y=mm+mp;
            if(x%2!=y%2)
            cout<<"Mai"<<endl;
            else
            cout<<"Tie"<<endl;
        }
        else{
            ap+=am;
            mp+=am;
            if(ap%2==mp%2)
            cout<<"Tie"<<endl;
            else if(ap%2==0)
            cout<<"Mai"<<endl;
            else
            cout<<"Ajisai"<<endl;
        }

    }
    return 0;
}