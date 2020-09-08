#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000001;
int aa[MAX];

struct Query {
  int l, r, idx;
};
bool cmp(Query x, Query y) { return x.r < y.r; }
void update(int idx, int val, int bit[], int n) {
  for (; idx <= n; idx += idx & -idx) bit[idx] += val;
}
int query(int idx, int bit[], int n) {
  int sum = 0;
  for (; idx > 0; idx -= idx & -idx) sum += bit[idx];
  return sum;
}

vector<int> answeringQueries(int n, Query queries[], int q) {
  int bit[n + 1];
  memset(bit, 0, sizeof(bit));
  int last_visit[MAX];
  memset(last_visit, -1, sizeof(last_visit));
  vector<int> ans(q);
  int query_counter = 0;
  for (int i = 0; i < n; i++) {
    if (last_visit[aa[i]] != -1) update(last_visit[aa[i]] + 1, -1, bit, n);
    last_visit[aa[i]] = i;
    update(i + 1, 1, bit, n);
    while (query_counter < q && queries[query_counter].r == i) {
      ans[queries[query_counter].idx] =
          query(queries[query_counter].r + 1, bit, n) -
          query(queries[query_counter].l, bit, n);
      query_counter++;
    }
  }
  return ans;
}

int32_t main() {
  int n, qr;
  scanf("%d%d", &n, &qr);
  for (int i = 0; i < n; i++) cin >> aa[i];
  Query queries[MAX];
  for (int i = 0; i < qr; i++) {
    int ly, ry;
    cin >> ly >> ry;
    --ly, --ry;
    queries[i].l = ly;
    queries[i].r = ry;
    queries[i].idx = i;
  }

  int q = sizeof(queries) / sizeof(queries[0]);
  sort(queries, queries + q, cmp);
  vector<int> ans = answeringQueries(n, queries, q);
  for (int each : ans) cout << each << endl;

  return 0;
}
