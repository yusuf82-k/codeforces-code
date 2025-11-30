#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        vector<ll>odds;
        vector<ll>evens;
        int x;
        for(int i=0;i<n;i++){
           cin>>x;
           if(x&1)
           odds.push_back(x);
           else
           evens.push_back(x);

        }
        if(odds.size()==0||evens.size()==0)
        {
            cout<<0<<endl;
            continue;
        }
        ll max_odd=*max_element(odds.begin(),odds.end());
        sort(evens.begin(),evens.end());
        bool flag=false;
        for(int i=0;i<evens.size();i++){
            if(max_odd>evens[i]){
               max_odd+=evens[i];
            }
            else
            {
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<evens.size()+1<<endl;
        }
        else
        cout<<evens.size()<<endl;
    }
    return 0;
}