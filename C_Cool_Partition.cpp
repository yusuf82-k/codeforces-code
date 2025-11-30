#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int count=0;
		int n;
		cin>>n;
		int a[n];
		int p;
		cin>>p;
		for(int i=1;i<n;i++){
		cin>>a[i];
		if(a[i]==p)
		count++;
	}
	cout<<count<<endl;
		
	}
	return 0;
	
}