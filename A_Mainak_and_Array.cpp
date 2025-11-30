#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a[n];
		int maxi=0;
		cin>>a[0];
		for(int i=1; i<n; i++) {
			cin>>a[i];
			maxi=max(maxi,a[i-1]-a[i]);
		}
        if(n==1)
        {
            cout<<0<<endl;
        }
        else{
		
		

			int x1,x2,x3;
			int maxel=*max_element(a+1,a+n);
			int minel=*min_element(a,a+n-1);
			x1=a[n-1]-a[0];
			x2=maxel-a[0];
			x3=a[n-1]-minel;
			int maxi1=max(max(x1,x2),max(x3,maxi));
			cout<<maxi1<<endl;
		
        }
	

	}
	return 0;
}