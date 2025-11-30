#include<bits/stdc++.h>
using namespace std;
int main(){

      int n;
    cin >> n;
    while (n--) {
        int a, x, y;
        cin >> a >> x >> y;
 
        bool found = false;
 
        for (int bob = 1; bob <= 100; ++bob) {
            if (bob == a) continue;  
 
            int d1 = abs(bob - x);
            int d2 = abs(bob - y);
            int da1 = abs(a - x);
            int da2 = abs(a - y);
 
            if (d1 < da1 && d2 < da2) {
                found = true;
                break;
            }
        }
 
        cout << (found ? "YES" : "NO") << '\n';
    }
 
    return 0;
}