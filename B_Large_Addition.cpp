#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        if(s.length()==1){
            int x=stoi(s);
            if(x>4){
                cout<<"YES"<<endl;
                continue;
            }
            else
            {
                cout<<"NO"<<endl;
                continue;
            }
        }
 
        if(s.back()=='9'||s[0]!='1'){
            cout<<"NO"<<endl;
            continue;
        }
        bool ok=true;
        for(int i=1;i<s.length()-1;i++){
            if(s[i]=='0'){
                ok=false;
                break;
            }
        }
        if(ok)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}