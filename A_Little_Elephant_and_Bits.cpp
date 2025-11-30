#include <bits/stdc++.h>
using namespace std;

int main() {
    int t=1;
   // cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool found = false;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0') {
                s.erase(i, 1); 
                found = true;
                break;
            }
        }

       
        if (!found) {
            s.erase(s.length() - 1); 
        }

        cout << s << endl;
    }
    return 0;
}
