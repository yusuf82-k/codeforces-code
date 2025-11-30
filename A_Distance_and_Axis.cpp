#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
        int move;
		int n,k;
		cin>>n>>k;
		if(k<=n){
			if(k%2==n%2)
			move=0;
			else
			move=1;
		}
		else
		move=k-n;
        cout<<move<<endl;
	}
	return 0;
}