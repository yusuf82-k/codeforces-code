#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        vector<int>a(26,0);
        vector<int>b(26,0);
        for(int i=0;i<n;i++)
      {    a[s[i]-'a']++;
           b[t[i]-'a']++;
      }
      if(a==b){
        cout<<"YES"<<endl;
      }
      else
      cout<<"NO"<<endl;
    }
    return 0;
}