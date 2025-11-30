#include<bits/stdc++.h>
using namespace std;
void testcase(){
	int a,b;
	cin>>a>>b;
	if(a%2==1)
	{
		cout<<"NO"<<endl;
		return;
	}
	if(b%2==1&&a==0)
	{
		cout<<"NO"<<endl;
		return;
	}
	cout<<"YES"<<endl;
	return;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		testcase();
	}
	return 0;
}