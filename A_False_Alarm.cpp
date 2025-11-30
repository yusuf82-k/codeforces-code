#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,x;
		cin>>n>>x;
		int a[n];
		int first=-1;
		int last=-1;

		for(int i=0; i<n; i++) {

			cin>>a[i];
			if(a[i]==1) {

				if(first==-1)
				{
					first=i;
				}
				last=i;
				}

		}
		int d=last-first+1;
		if(d<=x)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}