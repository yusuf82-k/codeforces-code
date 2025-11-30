#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)cin >> arr[i];
	int curr = arr[0];
	int part = 1;
	for(int i = 0; i < n; i++){
		curr &= arr[i];
		if(curr == 0){
			if(i == n-1)break;
			part++;
			curr = arr[i + 1];
		}
	}
	if(curr!= 0)part--;
	part = max(part,1);
	cout << part << endl;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
	int t;
    cin >> t;
    while(t--){
	solve();
    }
	return 0;
}