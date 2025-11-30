#include<bits\stdc++.h>
using namespace std;
int main(){
	long long int t,n,k,i,j,sum;
	cin>>t;
	while(t--){
        sum=0;
		cin>>n>>k;
		int s=n*k;
		vector<long long int>vec(s);
		for(i=0;i<s;i++)
		cin>>vec[i];
		j=n/2+1;
		for(i=1;i<=k;i++){
			sum+=vec[s-j];
			j+=(n/2)+1;
		}
		cout<<sum<<endl;
	}
	return 0;
}