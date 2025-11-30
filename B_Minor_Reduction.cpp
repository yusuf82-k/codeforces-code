#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
         string s;
         cin>>s;
         if(s.length()==2){
             int var=(s[0]-'0')+(s[1]-'0');
             cout<<var<<endl;
             continue;
         }
        ll maxi=-1;
        ll ind=-1;
        ll value;
        ll ind_max=-1;
        bool flag=false;
        for(int i=0;i+1<s.length();i++){
            ll value1=(s[i]-'0')+(s[i+1]-'0');
            if((value1>s[i]-'0')&&ind==-1){
                ind=i;
                value=value1;
            }
            if(value1>=10){
                value=value1;
                ind_max=i;
                flag=true;
                break;
            }
            
        }

        if(flag){
            string str=to_string(value);
            s.replace(ind_max,2,str);
        }
        else
        {
            string str=to_string(value);
            s.replace(ind,1,str);
        }
        cout<<s<<endl;
    }
    return 0;
}