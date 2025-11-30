#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
int n;
        string s;
        cin >> n >> s;

        vector<int> f(26);
        for (char c : s) f[c - 'a']++;

        bool y = false;
        for (int i = 1; i < n - 1; ++i) {
            if (f[s[i] - 'a'] >= 2) {
                y = true;
                break;
            }
        }

        cout << (y ? "Yes\n" : "No\n");
	}
	return 0;
}