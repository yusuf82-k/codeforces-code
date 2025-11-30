#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		set<int>s;
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			s.insert(a);
		}
		if((n-s.size())%2==1)
		cout<<s.size()-1<<endl;
		else
		cout<<s.size()<<endl;
	}
	return 0;
}