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

int stoi(string &s){
    stringstream ss(s);
    int x;
    ss>>x;
    return x;
}

int ALL_PERSON;
ll dp[1025][102];
vector<vector<int> > v;

int calc(int mask, int id){
	if(mask == ALL_PERSON) return 1;

	if(id==101) return 0;

	if(dp[mask][id]!=-1) return dp[mask][id];

	ll ans = 0;

	ans = calc(mask,id+1);

	for(int p: v[id]){
		if((mask&(1<<p))==0)
			ans += calc(mask|(1<<p),id+1);
	}
	dp[mask][id] = ans;
	return ans;

}

int main(){
	NINJA;

	v.reserve(110);
    int t;
    cin>>t;

    while(t--){
        memset(dp,-1,sizeof(dp));
        int n;
        cin>>n;

        ALL_PERSON = (1<<n) - 1;

        string s;
        for(int i=0;i<=100;i++){
            v[i].clear();
        }

        cin.get();
        ///Created the Reverse Mapping from the input
        for(int i=0;i<n;i++){
            getline(cin,s);
            stringstream ss(s);
            string temp;
            while(ss>>temp){
                v[stoi(temp)].push_back(i);
            }

        }
        cout<<calc(0,1)<<endl;
    }

	return 0;
}