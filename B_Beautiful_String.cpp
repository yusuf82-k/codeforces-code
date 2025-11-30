#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n;
        string s;
        cin>>n>>s;
        vector<int>a;

           for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                a.push_back(i+1);
            }
           }
           if(a.size()==s.length()||a.size()==0){
            cout<<0<<endl;
           }
           else{
            cout<<a.size()<<endl;
            for(auto x:a){
                cout<<x<<" ";
            }
            cout<<endl;
           }
        
    }
    return 0;
}