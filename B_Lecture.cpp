#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    string w1,w2;
    cin>>n>>m;
    unordered_map<string,string>mp;
    for(int i=0;i<m;i++){
        cin>>w1>>w2;
        
        int l1=w1.length();
        int l2=w2.length();
        if(l1>l2)
        mp[w1]=w2;
        else
        mp[w1]=w1;
    }
    for(int i=0;i<n;i++){
        cin>>w1;
        cout<<mp[w1]<<" ";
    }
    cout<<endl;
    return 0;
}