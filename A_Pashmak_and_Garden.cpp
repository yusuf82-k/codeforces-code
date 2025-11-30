#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t=1;
   // cin >> t;
    while (t--)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int dx = x1 - x2;
        int dy = y1 - y2;
        if (dx == 0)
        {
            cout << x1 + abs(dy) << " " << y1 << " " << x1 + abs(dy) << " " << y2 << endl;
        }
        else if (dy == 0)
        {
            cout << x1<< " " <<  y1+ abs(dx) << " " << x2 << " " << y1 + abs(dx) << endl;
        }
        else
        {   
            if(abs(dx)==abs(dy))
            cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
            else
            cout<<-1<<endl;
        }
    }
    return 0;
}