#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int a[3];
		for(int i=0;i<3;i++)
		cin>>a[i];
		sort(a,a+3);
		if(a[0]<a[1])
		a[0]++;
		if(a[1]>a[0])
		a[1]--;
		if(a[2]>a[1])
		a[2]--;
		
		long long int dis=(a[1]-a[0])+(a[2]-a[0])+(a[2]-a[1]);
		cout<<dis<<endl;
	}
	return 0;
}