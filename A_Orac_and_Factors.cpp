#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		if(n%2==0)
		{
			cout << n+2*k << endl;
			continue;
		}
		int p;
		for(int i = 2; i<=n; i++)
			if(n%i==0){
		    	p = i;
                break;
            }
		cout << n+p+2*(k-1) << endl;
	}
	return 0;
}