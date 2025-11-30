#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,x;
	cin>>t;
	while(t--){
		cin>>n>>x;
        int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		int dis,maxi;
		maxi=0;
		for(int i=1;i<n;i++){
			dis=a[i]-a[i-1];
			maxi=max(maxi,dis);
		}
		int vol=max(a[0],max(maxi,2*(x-a[n-1])));
		cout<<vol<<endl;
}
return 0;
}