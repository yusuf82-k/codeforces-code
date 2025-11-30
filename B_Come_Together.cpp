#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int xa,xb,xc,ya,yb,yc;
		cin>>xa>>ya>>xb>>yb>>xc>>yc;
		int x=0,y=0;
		if((xa<=xb)&&(xa<=xc)||(xa>=xb)&&(xa>=xc)) {
			x=min(abs(xc-xa),abs(xb-xa));
		}
		if((ya<=yb)&&(ya<=yc)||(ya>=yb)&&(ya>=yc)) {
			y=min(abs(yc-ya),abs(yb-ya));
		}
		ll dis;
		if(x==0&&y==0)
		dis=1;
		else 
		dis=x+y+1;
		cout<<dis<<endl;
		
	}
	return 0;
}