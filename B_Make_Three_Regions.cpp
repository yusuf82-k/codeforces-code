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
        string row1, row2;
        cin >> row1 >> row2;
        int count = 0;
        for (int i = 1; i < n-1; i++)
        {    
            
            if(row1[i]=='.'&&row2[i]=='.'){
                  if(row1[i-1]=='.'&& row1[i+1]=='.'&&row2[i-1]=='x'&&row2[i+1]=='x'){
                       count++;
                  }
                  if(row2[i-1]=='.'&& row2[i+1]=='.'&&row1[i-1]=='x'&&row1[i+1]=='x'){
                       count++;
                  }
        }
    }
        cout<<count<<endl;
        
    }
    return 0;
}