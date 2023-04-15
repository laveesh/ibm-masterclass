#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* code */
    int t;
    cin >> t;
    for (; t > 0; t--)
    {
        map<int, int> type;
        int n, m, min = INT_MAX, t = -1;
        cin >> n >> m;
        int f[n];
        for (int i = 0; i < n; i++)
        {
            cin >> f[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            type[f[i]] += x;
        }
        map<int, int>::iterator i;
        for (i = type.begin(); i != type.end(); i++)
        {
            if (min > i->second)
            {
                min = i->second;
            }
        }
        cout << min;
    }
    return 0;
}
