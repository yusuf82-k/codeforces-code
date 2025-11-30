#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t,n,k,bomb,i;
	cin>>t;
	while(t--){
        bomb=0;
		int flag=1;
		int sum=-1;
		cin>>n>>k;
		int a[n];
		int b[n];
		for( i=0;i<n;i++)
		cin>>a[i];
		for(i=0;i<n;i++){
			cin>>b[i];
			if(b[i]!=-1&&sum==-1)
			{
				sum=a[i]+b[i];
				
			}
			if(b[i]!=-1&&sum!=-1){
				if(sum!=a[i]+b[i]){
				bomb=0;
				flag=0;
			}
			}	
		}
		sort(a,a+n);
		if(flag==0)
		cout<<0<<endl;
		else if(sum==-1){
			int d=a[0]+k-a[n-1];
			if(d>=0)
			bomb=d+1;
			else 
			bomb=0;
		cout<<bomb<<endl;	
		}

		else if(flag)  {
			if(sum>=a[n-1]&&sum<=a[0]+k)
			bomb=1;
		cout<<bomb<<endl;
	}
	}
	return 0;
}