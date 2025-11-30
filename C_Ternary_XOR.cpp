#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        string s;
        cin>>n>>s;
        int first_one=n;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
            first_one=i;
            break;
            }

        }
         string f,sec;
         for(int i=0;i<n;i++){
            if(i<first_one){
                int dig=(s[i]-'0')/2;
                f+=(dig+'0');
                sec+=(dig+'0');
            }
           else if(i==first_one){
            f+='1';
            sec+='0';
           }
            else{
             f+='0';
             sec+=s[i];
            }
         }
         cout<<f<<endl<<sec<<endl;

    }
    return 0;
}