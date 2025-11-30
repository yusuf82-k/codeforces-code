#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int x=s[i]-'0';
            sum+=x;
        }
        if((s[n-1]-'0')%2==0){
            for(int i=n-1;i>=1;i--){
                if((s[i]-'0')%2==1){
                break;
                }
                else
                {
                      sum-=(s[i]-'0');
                      s.pop_back();
                }
            }
    

    }     if(s.size()==1){
          cout<<-1<<endl;
                continue;
            }
        
        if(sum%2==1){
            for(int i=0;i<s.size();i++)
            {
                int x=s[i]-'0';
                if(x%2==1){
                    s.erase(i,1);
                    break;
                }
            }
        }
       // cout<<sum<<endl;
        cout<<s<<endl;
    }


}