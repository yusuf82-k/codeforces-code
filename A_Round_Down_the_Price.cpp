#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
    cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long a=stoll(s);
		int round_down=pow(10,s.size()-1);
		cout<<a-round_down<<endl;
	}
	return 0;
}