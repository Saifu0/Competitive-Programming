// ----- In the name of ALLAH, the Most Gracious, the Most Merciful -----

#include<bits/stdc++.h>
using namespace std;


int32_t main(){
	int q; cin >> q;
	for (int i = 0; i < q; ++i) {
		int n;
		cin >> n;
		set<int> vis;
		for (int i = 2; i * i <= n; ++i) {
			if (n % i == 0 && !vis.count(i)) {
				vis.insert(i);
				n /= i;
				break;
			}
		}
		for (int i = 2; i * i <= n; ++i) {
			if (n % i == 0 && !vis.count(i)) {
				vis.insert(i);
				n /= i;
				break;
			}
		}
		if (int(vis.size()) < 2 || vis.count(n) || n == 1) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
			vis.insert(n);
			for (auto it : vis) cout << it << " ";
			cout << endl;
		}
	}
	
	
	return 0;
}