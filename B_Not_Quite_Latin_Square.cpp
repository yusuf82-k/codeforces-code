#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x=0;
        char a;
        for(int i=0;i<9;i++){
             cin>>a;
             if(a!='?')
             x^=(a-'A');

        }
        if(x==1)
        cout<<"C"<<endl;
        else if(x==2)
        cout<<"B"<<endl;
        else
        cout<<"A"<<endl;
    }
    return 0;
}