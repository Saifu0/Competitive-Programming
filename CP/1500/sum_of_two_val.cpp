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

const int mxn = 2e5+500;
ll n,k;

int main(){
	NINJA;

	cin >> n >> k;

	vector<pair<ll,int>> a;

	fo(i,n){
		ll f; cin >> f;
		a.pb({f,i});
	}

	sort(a.begin(), a.end());

	int i=0, j=n-1;

	bool flag  = false;

	while(i<j){
		if(a[i].F+a[j].F==k){
			flag = true;
			cout << a[i].S+1 << " " << a[j].S+1 << endl;
			break;
		}else if(a[i].F+a[j].F<k){
			i++;
		}else{
			j--;
		}
	}

	if(!flag) cout << "IMPOSSIBLE" << endl;

	return 0;
}