#include<bits/stdc++.h>
using namespace std;
void testcase(){
    	int n,count=0,x;
		cin>>n;
		long long a[n+1];
		a[0]=0;
		for(int i=0;i<n;i++){
		cin>>a[i+1];
        }
        
        for(int i=0;i<n;i++){
        	if(a[i]==0&&a[i+1]!=0){
        		count++;
			}
		}
		if(count==0)
		{
			cout<<0<<endl;
			return;
		}
		else if(count==1)
		{
			cout<<1<<endl;
			return;
		}
		else
		{
			cout<<2<<endl;
			return;
		}
		
		


}
int main(){
	int t;
	cin>>t;
	while(t--){
       testcase();
	}
	return 0;
}