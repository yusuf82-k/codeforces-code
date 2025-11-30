#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int l=s.length();
        if(l<4){
            cout<<"NO"<<endl;
            continue;
        }
        bool flag=false;
        unordered_map<string,int>mp(n);
        for(int i=0;i<l-1;i+=2){
             string str=s.substr(i,2);
             mp[str]++;
             if(mp[str]==2){
                flag=true;
                break;
             }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;


    }
    return 0;
}