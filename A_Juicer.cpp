#include<bits/stdc++.h>
using namespace std;
int main(){
		int n,b,d,count=0;
		cin>>n>>b>>d;
		int a[n];
		long long waste=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>b)
			continue;
			if(waste>d)
			{
				waste=0;
				count++;
			}
				waste+=a[i];
			
		}
		if(waste>d)
		count++;
		cout<<count<<endl;

	return 0;
}