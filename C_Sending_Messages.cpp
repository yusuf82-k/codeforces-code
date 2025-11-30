#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,f,a,b;
		cin>>n>>f>>a>>b;
		bool flag=true;
		int p=0;
		int x=b/a;
		long long int m[n];
		for(int i=0;i<n;i++){
			cin>>m[i];
			if(m[i]-p<=x)
			f-=((m[i]-p)*a);
			else
			f-=b;
			if(f<=0)
			{
				flag=false;
				break;
			}
			p=m[i];
		}
		if(flag)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
