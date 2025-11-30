#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int l;
        string s;
        cin>>l>>s;
        vector<ll>a;
        ll sum=0;
        if(l==1){
            cout<<0<<endl;
            continue;
        }
        for(int i=0;i<l;i++){
            if(s[i]=='L'){
                sum+=i;
            }
            else{
                sum+=(l-i-1);
            }
            if(s[i]=='L'&&i<l/2){
                a.push_back(l-2*i-1);
            }
            else if(s[i]=='R'&& i>=l/2)
            {
                a.push_back(2*i-l+1);
            }
            else 
            a.push_back(0);
        }
        sort(a.rbegin(),a.rend());
        for(int i=1;i<a.size();i++){
            a[i]+=a[i-1];
        }
        for(auto val:a)
        cout<<val+sum<<" ";
        cout<<endl;
    }
    return 0;
}