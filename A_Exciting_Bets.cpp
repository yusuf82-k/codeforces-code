#include<bits/stdc++.h>
using namespace std;
void testcase(){
	long long a,b;
	cin>>a>>b;
	if(a==b){
		cout<<0<<" "<<0<<endl;
		return;
	}
	else
	{
		long long maxi=abs(a-b);
		long long mini=min(b%maxi,maxi-b%maxi);
		cout<<maxi<<" "<<mini<<endl;
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