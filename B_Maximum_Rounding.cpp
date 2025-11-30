#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int index(string &str, int k)
{
    for (int i = k - 1; i >= 0; i--)
    {
        if (str[i] - '0' < 9)
            return i;
        else
        str[i]='0';

    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == '9')
        {
            cout << 1;
            for (int i = 0; i < s.length(); i++)
                cout << 0;
            cout << endl;
            continue;
        }
        
        int j=s.length();
        for (int i = s.length() - 2; i >= 0; i--)
        {
            if (s[i + 1] - '0' >= 5)
            {
                if (s[i] - '0' < 9)
                {
                    s[i] = ((s[i] - '0') + 1) + '0';
                   s[i + 1] = '0';
                    j=i+1;
                }
                else if (s[i] - '0' == 9)
                {
                    i = index(s, i) + 1;
                     s[i-1] = ((s[i-1] - '0') + 1) + '0';
                   // s[i] = 'x';
                   s[i]='0';
                    j=i;
                }
                
            }
        }
        if (s[0] - '0' > 4)
        {
            cout << 1;
            for (int i = 0; i < s.length(); i++)
                cout << 0;
            cout << endl;
            continue;
        }
         cout<<s<<endl;
    }
    return 0;
}