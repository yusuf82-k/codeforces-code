#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        
        bool used=true;
        int l=s.size();
        char c=(s[l-1]=='1')?0:1;
        int count=0;
        s+=c;
        for(int i=1;i<l+1;i++){
              if(s[i]!=s[i-1]){

                count++;
                if(s[i]=='1'&&used){
                    count--;
                    used=false;
                }
        
              }
        }
        cout<<count<<endl;
    }
    return 0;
}