#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define deb(x) cout << #x << " " << x << endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define ll long long
#define pb push_back
#define endl "\n"
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007

const int mxn = 16;
int a[1<<mxn],b[1<<mxn];
int ans[mxn];

int main(){
	NINJA;
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		n = 1<<n;
		fo(i,n) cin >> a[i];

		sort(a,a+n);

		multiset<int> s;
		int p =0,pp = 0;

		for(int i=1;i<n;i++){
			int expec = -1;
			if(!s.empty()) expec = *s.begin();
			if(expec==a[i]) s.erase(expec);
			else{
				ans[p] = a[i];
				int ppp = pp;
				fo(j,ppp){
					b[pp] = ans[p] + b[j];
					s.insert(b[pp]);
					pp++;
				}
				b[pp++] = ans[p];
				p++;
			}
		}

		fo(i,p) cout << ans[i] << " ";
		cout << endl;

	}

	return 0;
}