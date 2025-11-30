#include<bits/stdc++.h>
using namespace std;
void testcase(){
        int n;
        long long extra=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
              cin>>a[i];
              if(a[i]>=(i))
              extra+=(a[i]-i);
              else 
              extra-=(i-a[i]);
              if(extra<0){
                cout<<"NO"<<endl;
                return;
              }

        }
        cout<<"YES"<<endl;
        return;
}
int main(){
    int t;
    cin>>t;
    while(t--){

     testcase();

    }
}