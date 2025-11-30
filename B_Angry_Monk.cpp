#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,k,count=0;
		cin>>n>>k;
		long long  a[k];
		for(int i=0;i<k;i++){
		cin>>a[i];	
	}
	sort(a,a+k);
	for(int i=0;i<k-1;i++){
		if(a[i]>1)
		{
			count+=(a[i]-1);
		}
	}
	count+=(n-a[k-1]);
    cout<<count<<endl;
	}
	return 0;
}