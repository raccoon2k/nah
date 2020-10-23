#include <iostream>
#include <unordered_set>

using namespace std;
int main()
{
    int n = 0, k = 0;
    int p = -1, q = -1;
    cin >> n >> k;
    int a[n];
    unordered_set<int> u;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        if (u.find(k + a[i]) != u.end())
        {
            p = *u.find(k + a[i]);
            q = a[i];
            break;
        }
        if (u.find(a[i] - k) != u.end())
        {
            p = a[i];
            q = *u.find(a[i] - k);
            break;
        }
        u.insert(a[i]);
    }
    if (p == -1)
        cout << 0;
    else
    {
        for (int i = n - 1; i >= 0; i--)
            if (a[i] == p)
            {
                cout << i + 1 << " ";
                break;
            }
        for (int i = n - 1; i >= 0; i--)
            if (a[i] == q)
            {
                cout << i + 1;
                break;
            }
    }
    return 0;
}
