#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[5][5]={0};
	for(int i=1;i<4;i++)
	for(int j=1;j<4;j++)
	{
		cin>>a[i][j];
    }
    /*for(int i=0;i<5;i++){
	for(int j=0;j<5;j++)
	{
		cout<<a[i][j];
    }
    cout<<endl;
}*/
    

	for(int i=1;i<4;i++){
	
	for(int j=1;j<4;j++)
	{
		int x=a[i+1][j]+a[i-1][j]+a[i][j+1]+a[i][j-1]+1;
		cout<<x%2<<" ";
	}
	cout<<"\n";
}

return 0;

	
}