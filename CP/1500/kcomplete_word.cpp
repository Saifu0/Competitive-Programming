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


int main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		string s; cin >> s;

		int ans = 0;

		for (int i = 0; i < k/2; ++i)
		{
			int cnt[26] = {};
			for(int j=0;j+k-1<n;j+=k){
				int i1 = j+i;
				int i2 = j+k-1-i;

				cnt[s[i1]-'a']++;
				cnt[s[i2]-'a']++;
			}

			int req = 2*(n/k);
			int mx = *max_element(cnt,cnt+26);

			ans += req-mx;
		}

		if(k&1){
			int cnt[26] = {};
			for(int i=k/2;i<n;i+=k){
				cnt[s[i]-'a']++;
			}
			int req = n/k;
			int mx = *max_element(cnt,cnt+26);
			ans += req-mx;
		}

		cout << ans << endl;
	}

	return 0;
}