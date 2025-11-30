#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		string s;
		cin>>n>>s;
		int count=0,count1=0;
		if(s[0]=='1')
		count1=1;
		if(s[n-1]=='0')
		count=1;
		for(int i=1;i<n;i++){
			if(s[i]=='1')
			count1++;
			if(s[i-1]=='0'&&s[i]=='1')
			count++;
			
		}
	//	cout<<count<<endl;
	//	cout<<count1<<endl;
		if(count1>count)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}