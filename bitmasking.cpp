https://codeforces.com/contest/1097/problem/B


// Author: Bekh @ https://codeforces.com/profile/Bekh



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
//    freopen("facebook.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    bool ok = false;
    for (int msk = 0; msk < (1<<n); ++msk)
    {
        int tempSum = 0;
        for (int j = 0; j < n; ++j)
        {
            // 1 negative
            if ( (1<<j)&msk )
            {
                tempSum -= a[j];
            }
            else
            {
                tempSum += a[j];
            }
        }
        if (tempSum%360 == 0)
        {
            ok = true;
            break;
        }
    }

    if (ok)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
