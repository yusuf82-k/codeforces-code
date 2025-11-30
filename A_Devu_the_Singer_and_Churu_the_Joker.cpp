#include<bits/stdc++.h>
using namespace std;
void testcase(){
    int n,d,sum=0;
    cin>>n>>d;
    vector<int>vec(n);
    for(int &x:vec)
    {
        cin>>x;
        sum+=x;
    }
    int devu=sum+(n-1)*10;
    if(devu>d){
        cout<<-1<<endl;
        return;
    }
    int churu=(n-1)*2+(d-devu)/5;
    cout<<churu<<endl;
    return;

}
int main(){
	testcase();
	return 0;
}