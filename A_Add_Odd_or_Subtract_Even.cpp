#include<bits/stdc++.h>
using namespace std;
void testcase(){
	long long int a,b,diff;
	cin>>a>>b;
	if(a==b)
	{
		cout<<0<<endl;
		return;
	}
	if(a>b){
		diff=a-b;
		if(diff%2==0)
		{
			cout<<1<<endl;
			return;
		}
		else {
			cout<<2<<endl;
			return;
		}
	}
		if(a<b){
		diff=b-a;
		if(diff%2==1)
		{
			cout<<1<<endl;
			return;
		}
		else {
			cout<<2<<endl;
			return;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		testcase();
	}
}