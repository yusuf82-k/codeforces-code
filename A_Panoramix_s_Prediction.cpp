#include<iostream>
using namespace std;
bool prime(int n){
	int i,flag=true;
	for(i=2;i<n;i++){
		if(n%i==0){
			flag=false;
			break;
		}
	}
	return flag;
}
int main(){
	int n,m;
	cin>>n>>m;
    if(!prime(m)){
        cout<<"NO"<<endl;
        return 0;
    }
	for(int i=n+1;i<=m;i++){
		if(prime(i)==1){
			if(i==m){
			cout<<"YES"<<endl;
			break;
            }
        else{
        cout<<"NO"<<endl;
        break;}

    }
	}
    return 0;
}