#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long int a[3],steps=0;
	for(int i=0;i<3;i++)
	cin>>a[i];
/*	if(a[0]==a[1]&&a[1]==a[2])
	{
		cout<<"YES"<<endl;
		return;
	}*/
	sort(a,a+3);
	
	for(int i=1;i<3;i++)
	{
		if(a[i]%a[0]!=0)
		{
			cout<<"NO"<<endl;
			return;
		}
		else
		steps+=(a[i]/a[0])-1;
	}
	if(steps<=3)
	{
		cout<<"YES"<<endl;
		return;
	}
	else
	{
		cout<<"NO"<<endl;
		return;
	}
	
   
   
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
