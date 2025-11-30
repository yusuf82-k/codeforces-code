#include<bits/stdc++.h>
using namespace std;


int main()
{
    
	int t;
	cin>>t;
	
	
	while(t--)
	{
	
	 int n,flag=1,sum=0;
	 cin>>n;
     int arr[n];
    
     for(int i=0;i<n;i++)
     {
     	cin>>arr[i];
        sum=sum+arr[i];
	 }
     for(int i=0;i<n-1;i++)
     {
     	if(arr[i]==0 && arr[i+1]==0)
     	{
     		flag=0;
     		break;
		 }
     	
     	
	 }
     if(n==2 && arr[0]==1 && arr[1]==1)
     {
	   cout<<"YES"<<endl;
     }
     else if(flag==0)
     {
     	cout<<"YES"<<endl;
		 
	 }
     else if(sum==0 || sum==n)
     {
     	cout<<"YES"<<endl;
	 }
     else
     cout<<"NO"<<endl;
     
 
 }
     return 0; 
	
}
 