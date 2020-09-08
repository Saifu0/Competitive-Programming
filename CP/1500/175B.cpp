#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
 
int main() {
  int n;
  cin >> n;
  vector<int> l(n);
  rep(i,n) cin >> l[i];
  int ans = 0;
  rep(i,n)rep(j,n)rep(k,n) {
    if (i < j && j < k) {
      if (l[i] == l[j]) continue;
      if (l[i] == l[k]) continue;
      if (l[k] == l[j]) continue;
      if ((ll)l[i]+l[j]+l[k] <= max({l[i],l[j],l[k]})*2) continue;
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}