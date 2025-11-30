#include<bits/stdc++.h>
using namespace std;

void testcase(){
    long long x, n;
    cin >> x >> n;

    long long position = x;
    long long extra= n % 4;

    if (x % 2 == 0) {
        if (extra== 1) 
		position -= n;
        else if (extra== 2) 
		position += 1;
        else if (extra == 3)  
		position += n + 1;
        
    } else {
        if (extra == 1) 
		position += n;
        else if (extra == 2)
		 position -= 1;
        else if (extra == 3) 
		position -= n + 1;
        
    }

    cout << position<< endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        testcase();
    }
    return 0;
}
