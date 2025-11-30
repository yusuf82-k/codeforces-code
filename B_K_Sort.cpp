#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>a(n);
        vector<ll>b;
        b.push_back(0);
        ll p;
        cin>>a[0];
        p=a[0];
        for(int i=1;i<n;i++){
            cin>>a[i];
            if(p>a[i]){
                b.push_back(p-a[i]);
            }
            else{
                p=a[i];
            }
        }
        sort(b.begin(),b.end());
       int l=b.size();
        int j=l;
        ll sum=0;
        for(int i=1;i<l;i++){
            sum+=(b[i]-b[i-1])*j;
            j--;
        }
        cout<<sum<<endl;


    }
    return 0;
}