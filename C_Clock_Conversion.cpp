#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int hh;
		string s;
		cin>>s;
		string h,m;
		h=s.substr(0,2);
		m=s.substr(3,2);
		hh=stoi(h);
		if(hh==0) {
			cout<<"12:"<<m<<" AM"<<endl;
		} else if(hh<12) {
			cout<<s<<" AM"<<endl;
		} else if(hh==12)
			cout<<s<<" PM"<<endl;
		else if(hh<22)
			cout<<0<<hh-12<<":"<<m<<" PM"<<endl;
            else 
            cout<<hh-12<<":"<<m<<" PM"<<endl;
	}
	return 0;
}