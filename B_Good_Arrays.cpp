#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,count=0;
		cin>>n;

		long long a[n],sum=0;
		for(int i=0;i<n;i++)
		{    cin>>a[i];
		    if(a[i]>1){
		    	sum+=(a[i]-1);
		    	
			}
			else
			count++;
		}
        if(n==1){
            cout<<"NO"<<endl;
        }
        else{
		if(sum>=count)
		cout<<"YES"<<endl;
		else 
		cout<<"NO"<<endl;
        }
	}
	return 0;
}