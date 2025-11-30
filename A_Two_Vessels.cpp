#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		int avg=(a+b+1)/2;
		int move=(avg+c-1-min(a,b))/c;
		cout<<move<<endl;
	}
	return 0;
}