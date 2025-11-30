#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	bool flag=false;
	
	for(int i=0;i<n*m;i++)
	{
		char c;
		cin>>c;
		if(c=='C'||c=='M'||c=='Y')
		{
			flag=true;
		}
	}
	if(flag)
	cout<<"#Color"<<endl;
	else
	cout<<"#Black&White"<<endl;
	return 0;
}