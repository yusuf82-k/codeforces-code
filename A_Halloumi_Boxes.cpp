#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		long long a[n];
		bool flag=false;
		for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<a[i-1])
		flag=true;
		
	}
	if(k==1&&flag)
	cout<<"NO"<<endl;
	else 
	cout<<"YES"<<endl;
		
	}
	return 0;
}