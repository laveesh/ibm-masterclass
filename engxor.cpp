#include <bits/stdc++.h>
using namespace std;

bool isEven(long n)
{
    long c = 0;
    while (n)
    {
        n &= (n - 1);
        c++;
    }

    return c % 2 == 0;
}

int main()
{
    int t;
    cin >> t;
    for (; t > 0; t--)
    {
        long n, q;
        int a[n];
        for (long i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (long i = 0; i < q; i++)
        {
            long p, ev = 0, odd = 0;
            cin >> p;
            for (long j = 0; j < n; j++)
            {
                isEven(a[j] ^ p) ? ev++ : odd++;
            }
            cout << ev << " " << odd << endl;
        }
    }
    return 0;
}