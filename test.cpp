#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin. tie(0);
    cout.tie(0);
                                            
    int n, q;
    cin >> n >> q;
    ll A[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];
    sort(A, A + n);
    for (int i = 1; i < n; i++)
        A[i] += A[i - 1];

    pair<int, int> query[q];
    for (int i = 0; i < q; i++)
    {
        cin >> query[i].first;
        query[i].second = i;
    }
    sort(query, query + q);

    int ans[q];
    int ptr = -1;

    for (int i = 0; i < q; i++)
    {
        int m = query[i].first;
        while (ptr + 1 < n && A[ptr + 1] <= m)
        {
            ptr++;
        }
        ans[query[i].second] = ptr + 1;
    }

    for (int i = 0; i < q; i++)
        cout << ans[i] << "\n";
    return 0;
}