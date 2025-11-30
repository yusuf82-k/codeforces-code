#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        string s;
        cin>>s;
        int ones=0;
        int zeros=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1')
            ones++;
            else
            zeros++;
        }
        if(ones==zeros){
            cout<<"0"<<endl;
            continue;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                zeros--;
            }
            else
            {
                ones--;
            }
            if(ones==-1||zeros==-1){
                x=i;
                break;
            }
        }
        cout<<s.length()-x<<endl;
    }
    return 0;
}