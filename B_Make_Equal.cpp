#include<bits/stdc++.h>
using namespace std;
void test(){
		int n;
		cin>>n;
		long long sum=0;
		long long a[n];
		for(int i=0;i<n;i++) {
			cin>>a[i];
			sum+=a[i];

		}
		long long avg=sum/n;
		long long extra=avg-a[0];
		if((a[0]<avg)||(a[n-1]>avg)) {
			cout<<"NO"<<endl;
			return;
		}
		 else {
			for(int i=1; i<n-1; i++) {
                if(a[i]==avg)
                {
                    continue;
                }
				if(a[i]>avg){
				
					extra+=(avg-a[i]);
				}
				if(a[i]<avg) {
					if((avg-a[i])<=extra){
					
						extra-=(avg-a[i]);
					}
					else {
				
						cout<<"NO"<<endl;
						return;

					}
				}


			}
			cout<<"YES"<<endl;
			return;
		
	}
		
}
int main() {
	int t;
	cin>>t;
	while(t--) {

			test();
		
	}
	return 0;
}