#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
   ll t;
   cin>>t;
   while(t--){
    ll n,h;
    cin>>n>>h;
    ll  count=0;
    vector<pair<ll,ll>>vec(n);
    for(ll i=0;i<n;i++){
        cin>>vec[i].second;
    }

    for(ll i=0;i<n;i++){
          cin>> vec[i].first;
          if(vec[i].first<h){
            count++;
          }
    }
    n--;
    sort(vec.begin(),vec.end());
   /* for(auto p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
        */
    long long total=h;
    for(ll i=0;i<count;i++){
        pair<ll,ll>p=vec[i];
        total+=(min(n,p.second))*p.first;
        n-=(min(n,p.second));
        if(n==0)
        break;
    }
    total+=n*h;
    cout<<total<<endl;

   }
   return 0;
}