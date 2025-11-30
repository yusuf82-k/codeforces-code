#include<bits\stdc++.h>
using namespace std;
int dsum(int a){
   int sum=0;
   while(a>0){
     sum+=(a%10);
     a/=10;
   }
   return sum;
}
int main(){
     int t=1;
    // cin>>t;
     while(t--){
        string s;
        cin>>s;
        int sum=0;
        int zero=0;
        for(int i=0;i<s.length();i++){
         sum+=(s[i]-'0');
         if(s[i]=='0')
         zero++;
        }
        if(s.length()==zero||s.length()==1)
        {
         cout<<0<<endl;
         continue;
        }
        if(sum<10){
            cout<<1<<endl;
            continue;
        }
        int count=1;
        while(sum>9){
         sum=dsum(sum);
         count++;
        }
        cout<<count<<endl;

     }
     return 0;
}