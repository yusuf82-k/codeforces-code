#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int one_even=0;
        int one_odd=0;
        int zero_even=0;
        int zero_odd=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='1'){
                if(i%2==0)
                one_even++;
                else
                one_odd++;
            }
            if(b[i]=='0')
            {
                if(i%2==0)
                zero_even++;
                else
                zero_odd++;
            }
        }
        if((one_odd<=zero_even)&&(one_even<=zero_odd)){
            cout<<"YES"<<endl;
            continue;
        }
        else
        cout<<"NO"<<endl;
        

    }
}