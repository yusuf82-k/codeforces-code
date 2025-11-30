#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        if((x==0&&y==0)||(x!=0&&y!=0)){
            cout<<-1<<endl;
            continue;
        }
        int maxi=(x!=0)?x:y;
        if((n-1)%maxi!=0){
            cout<<-1<<endl;
            continue;
        }
        int s=(n-1)/maxi;
        for(int i=0;i<maxi;i++){
            
            cout<<1<<" ";
        }
        int p=maxi+2;
        for(int i=1;i<s;i++){
            for(int i=0;i<maxi;i++){
                cout<<p<<" ";
            }
            p+=maxi;
        }
        cout<<endl;

    }
    return 0;
}