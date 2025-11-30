#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int x : arr) {
        currentSum += x;
        maxSum = max(maxSum, currentSum);
        if (currentSum < 0)
            currentSum = 0;
    }

    cout << "Maximum Subarray Sum = " << maxSum << endl;
}
    return 0;
}
