#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t=1;
    //cin >> t;
    while (t--) {
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]-'0'>4){
                s[i]=(9-(s[i]-'0'))+'0';
            }
        }
        cout<<s<<endl;

    }
    return 0;
}