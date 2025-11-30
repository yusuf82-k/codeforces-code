#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long a,b;
        unordered_map<long long ,long long>mp;
        for(int i=0;i<k;i++){
            cin>>a>>b;
            mp[a]+=b;
        }
        vector<long long >vec;
        for(auto pair:mp){
            vec.push_back(pair.second);
        }
        sort(vec.begin(),vec.end(),greater<long long>());

        long long total=0;
        int m=min(n,(int)vec.size());
       /* for(auto x:vec){
            cout<<x<<" ";
        }
        cout<<endl;*/
        for(int i=0;i<m;i++){
            total+=vec[i];
        }
        cout<<total<<endl;
        
    }
}