#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m;
        cin >> n >> m >> k;
        vector<int> a(n);
        vector<int> b(m);
        vector<int> p(k + 1, 0);
        int count1 = 0;
        int count2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= k && p[a[i]] != 1)
            {
                p[a[i]] = 1;
                count1++;
            }
        }

        int cmn = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            if (b[i] <= k && p[b[i]] == 0)
            {
                p[b[i]] = 1;
                count2++;
            }
            else if (b[i] <= k && p[b[i]] == 1)
            {
                cmn++;
                p[b[i]] = 2;
            }
        }

        if (count1 < k / 2)
        {
            cout << "NO" << endl;
            continue;
        }

        // if (count2 == k / 2)
        // {
        //     cout << "YES" << endl;
        //     continue;
        // }
        
        bool flag = false;
        for (int i = 1; i <= k; i++)
        {
            if (p[i] == 0)
            {
                cout << "NO" << endl;
                flag = true;
                break;
            }
        }
        if (flag)
            continue;

        if(count2<(k/2)){
            if((count2+cmn)>=(k/2)){
                if(count1-((k/2)-count2)>=(k/2)){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO\n";
                }
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"YES\n";
        }

    }
    return 0;
}