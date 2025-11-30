#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (auto &x : a) {
            cin >> x;
        }

        bool flag = true;

        for (int i = 0; i < n; i++) {
            if(a[i]==0)
            continue;
            if (a[i] < 0) {
                flag = false;
                break;
            }
            if (i<n-2){
            a[i + 1] -= 2 * a[i];
            a[i + 2] -= a[i];
            a[i]=0;
            }
            if(i>=n-2&&a[i]!=0){
                flag=false;
                break;
            }
        }

    //   for (int x : a) cout << x << " ";
      //  cout << "\n";

        if(flag)
        cout<<"YES"<<endl;


        else
        cout<<"NO"<<endl;
    }
    return 0;
}
