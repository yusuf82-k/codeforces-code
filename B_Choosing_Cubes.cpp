#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,f,k;
		cin>>n>>f>>k;
		int first=-1;
		int last;
		int value;
		int a[n];
		for(int i=0;i<n;i++){
		cin>>a[i];
		if(i==f-1)
		value=a[i];
	}
	sort(a,a+n,greater<int>());
	for(int i=0;i<n;i++){
		if(a[i]==value&&first==-1)
		first=i+1;
		if(a[i]==value)
		last=i+1;
	}
	if(last<=k)
	cout<<"YES"<<endl;
	else if(k<first)
	cout<<"NO"<<endl;
	else
	cout<<"MAYBE"<<endl;
		
	}
	return 0;
}