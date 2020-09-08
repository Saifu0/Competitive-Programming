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

string s;
ll res[49];
bool vis[7][7];

ll w = 0, step=0;

void solve(ll r, ll c){
	if(r==6 && c==0){
		if(step==48) w++;
		return;
	}

	bool t = vis[r][c] || (
            (
                    c > 0 && c < 6 && !vis[r][c + 1] && !vis[r][c - 1] &&
                    ((r == 0 && vis[r + 1][c]) || (r == 6 && vis[r - 1][c]))) || (
                    r > 0 && r < 6 && !vis[r + 1][c] && !vis[r - 1][c] &&
                    ((c == 0 && vis[r][c + 1]) || (c == 6 && vis[r][c - 1]))))
             || (r > 0 && r < 6 && c > 0 && c < 6 && vis[r - 1][c] && vis[r + 1][c] && !vis[r][c - 1] && !vis[r][c + 1])
             || (r > 0 && r < 6 && c > 0 && c < 6 && vis[r][c - 1] && vis[r][c + 1] && !vis[r - 1][c] && !vis[r + 1][c]);
	
     if(t) return;

	vis[r][c] = true;

	if(res[step]!=-1){
		switch(res[step]){
			case 0: 
				if(r>0 && !vis[r-1][c]){
					step++;
					solve(r-1,c);
					step--;
				}
				break;
			 case 2:
                if (r < 6 && !vis[r + 1][c]) {
                    step++;
                    solve(r + 1, c);
                    step--;
                }
                break;
            case 3:
                if (c > 0 && !vis[r][c - 1]) {
                    step++;
                    solve(r, c - 1);
                    step--;
                }
                break;
            case 1:
                if (c < 6 && !vis[r][c + 1]) {
                    step++;
                    solve(r, c + 1);
                    step--;
                }
                break;
		}
		vis[r][c] = false;
		return;
	}

	if(r>0 && !vis[r-1][c]) {
		step++;
		solve(r-1,c);
		step--;
	}

	if(r<6 && !vis[r+1][c]) {
		step++;
		solve(r+1,c);
		step--;
	}

	if(c>0 && !vis[r][c-1]) {
		step++;
		solve(r,c-1);
		step--;
	}

	if(c<6 && !vis[r][c+1]) {
		step++;
		solve(r,c+1);
		step--;
	}

	vis[r][c] = false;
}

int main(){
	NINJA;

	cin >> s;

	fo(i,sz(s)){
		if(s[i]=='?') res[i] = -1;
		else if(s[i]=='U') res[i] = 0;
		else if(s[i]=='R') res[i] = 1;
		else if(s[i]=='D') res[i] = 2;
		else if(s[i]=='L') res[i] = 3;
	}

	solve(0,0);

	cout << w << endl;

	return 0;
}