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

map<int,int> cnt;
const int N = 100005;
int a[N];

int main(){
	NINJA;

	int n,k; cin >> n >> k;
	fo(i,n) cin >> a[i];

	int l=0,r=0;

	fo(i,n){
		cnt[a[i]]++;
		if(cnt.size()>=k){
			r = i; break;
		}
	}

	if(cnt.size()<k){
		printf("-1 -1\n");
		return 0;
	}

	fo(i,n){
		if(cnt[a[i]]==1) {l=i; break;}
		--cnt[a[i]];
	}

	printf("%d %d\n",l+1,r+1);

	return 0;
}