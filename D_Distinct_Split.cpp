#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int a[26]={0};
        int forward[n];
        forward[0]=1;
        a[s[0]-'a']=1;
        for(int i=1;i<n;i++)
        {
            if(a[s[i]-'a']==0){
                forward[i]=forward[i-1]+1;
                a[s[i]-'a']++;
            }
            else{
            forward[i]=forward[i-1];
            }
        }
        int b[26]={0};
        int backward[n];
        backward[n-1]=1;
        b[s[n-1]-'a']=1;
        for(int i=n-2;i>=0;i--){
            if(b[s[i]-'a']==0){
                backward[i]=backward[i+1]+1;
                b[s[i]-'a']++;
            }
            else
            {
                backward[i]=backward[i+1];
            }
        }

         int maxi=-1;
        for(int i=0;i<n-1;i++){
            maxi=max(forward[i]+backward[i+1],maxi);
        }
        cout<<maxi<<endl;
    


    }
    return 0;
}