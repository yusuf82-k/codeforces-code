#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,j;
		int flag=1;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		int prev=0,next=0;
		for(i=1;i<n-1;i++){
			for(j=0;j<i;j++){
				if(a[j]<a[i])
				{
					prev=j+1;
					break;
				}
			}
				for(j=i+1;j<n;j++){
				if(a[j]<a[i])
				{
					next=j+1;
					break;
				}
			}
			if(prev!=0&&next!=0){
				cout<<"YES"<<endl;
				cout<<prev<<" "<<i+1<<next<<endl;
				flag=0;
				break;
			}
			
		}
		if(flag)
		cout<<"NO"<<endl;
		
	}
	return 0;
}