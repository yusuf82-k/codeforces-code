#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		unordered_map<int ,int>freq;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			freq[x]++;
		}
		bool parity=false;
		for(auto &pair:freq){
			if(pair.second%2==1)
			{
				parity=true;
				break;
			}
		}
		if(parity)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}