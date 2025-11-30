#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,flag=0;
		cin>>n;
		string s;
		cin>>s;
		unordered_map<char,int>mp;
		for(int i=0;i<n-1;i++){
			mp[s[i]]++;
			if(mp[s[i]]==2)
			{
				flag=1;
				break;
			}
		}
		if(flag)
		cout<<"YES"<<endl;
		else 
		cout<<"NO"<<endl;
	}
	return 0;
}