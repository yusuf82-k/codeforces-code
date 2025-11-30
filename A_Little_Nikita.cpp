#include<bits/stdc++.h>
using namespace std;
void testcase(){
	int m,n;
	cin>>n>>m;
	if(n<m)
	{
		cout<<"NO"<<endl;
		return;
	}
	if((n-m)%2==0)
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
		testcase();
	}
	return 0;
}