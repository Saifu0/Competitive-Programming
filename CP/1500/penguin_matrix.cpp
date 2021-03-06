#include <iostream>
#include <algorithm>

using namespace std;

int n, m, d, a[10010];

int main(){
    cin >> n >> m >> d;
    n *= m;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for (int i = 1; i < n; i++) a[i] -= a[0];
    a[0] = 0;

    for (int i = 0; i < n; i++)
    if (a[i] % d){
        cout << -1; return 0;
    } else a[i] /= d;

    long long k = a[n / 2], r = 0;
    for (int i = 0; i < n; i++) r += abs(k - a[i]);

    cout << r;
}

