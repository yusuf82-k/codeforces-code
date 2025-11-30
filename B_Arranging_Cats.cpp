#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s1,s2;
        cin>>n>>s1>>s2;
        int zero1=0,zero2=0;
        int p=0;
        for(int i=0;i<n;i++){
            if(s1[i]=='0')
            zero1++;
            if(s2[i]=='0')
            zero2++;
           /* if(s1[i]=='1')
            one1++;
            if(s2[i]=='1')
            one2++;
            */
            if(s1[i]==s2[i])
            p++;

        }
        int x=abs(zero1-zero2);
        int y=(n-x-p)/2;
        cout<<x+y<<endl;
    }
    return 0;
}