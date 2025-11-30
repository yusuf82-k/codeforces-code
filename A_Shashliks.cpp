#include<bits/stdc++.h>
using namespace std;
int main() {
   long long int t;
     cin >> t;
    while (t--) {
       long long int n,k,b,s;
        cin>>n>>k>>b>>s;
        //int maxi=s/k;
       // int mini=(s-(n-1)*(k-1))/k;
           if(s==0&&b==0){
            for(long long int i=0;i<n;i++)
            cout<<0<<" ";
            cout<<endl;
            continue;
           }
            if(s==0&&b!=0)
           {
            cout<<-1<<endl;
            continue;
           }
          long long  int mini=b*k;
          long long int maxi=mini+n*(k-1);
           if(s<mini||s>maxi)
           cout<<-1<<endl;
           else
           {
            
               long long int extra=min((k-1)*(n-1),s-mini);
               long long int last=s-extra;
                for(long long int i=0;i<n-1;i++){
                    cout<<min(extra,k-1)<<" ";
                    extra-=(min(extra,k-1));
                }
                cout<<last<<endl;
            }
           
    }

    return 0;
}