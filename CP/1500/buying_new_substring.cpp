#include<bits/stdc++.h>
using namespace std;

#define NINJA ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define iii tuple<int,int,int>
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define int long long
#define pb push_back
#define endl "\n"
#define setbits __builtin_popcountll
#define mp map<int,int>
#define F first
#define S second
#define sz(v) (int)v.size()
#define mod 1000000007
#define inf (int)1e18

// void computer_lps(string pat, int m, int lps[]){
// 	int len = 0;
// 	int i = 1;
// 	lps[0] = 0;

// 	while(i<m){
// 		if(pat[i]==pat[len]){
// 			len++;
// 			lps[i] = len;
// 			i++;
// 		}else{
// 			if(len!=0){
// 				len = lps[len-1];
// 			}else{
// 				lps[i] = 0;
// 				i++;
// 			}
// 		}
// 	}
// }


// int kmp(string pat, string txt){
// 	int m = pat.length();
// 	int n = txt.length();
// 	int *lps = new int[m];
// 	fo(i,m) lps[i] = 0;	
// 	int j=0;
// 	computer_lps(pat,m,lps);

// 	int i =0;
// 	int res = 0;
// 	int nxt=0;

// 	while(i<n){
// 		if(pat[j]==txt[i]){
// 			j++;i++;
// 		}
// 		if(j==m){
// 			j = lps[j-1];
// 			res++;
			
// 		}else if(i<n && pat[j] != txt[i]){
// 			if(j!=0) j = lps[j-1];
// 			else i+=1;
// 		}
// 	}
// 	return res;
// }




vector<string> find(string&a){
	vector<string> res;
	int n = sz(a);
	fo(i,n){
		for(int len=1;len<=n-i;len++) res.pb(a.substr(i,len));
	}
	return res;
}

int32_t main(){
	NINJA;

	int t; cin >> t;
	while(t--){
		int n;
		string a,b;
		cin >> a >> b;
		cin >> n;
		string x = a, y = b;
		vector<string> s1 = find(x);
		vector<string> s2 = find(y);

		// for(auto it : s1){
		// 	cout << it << " ";
		// }
		// cout << endl;
		// for(auto it : s2){
		// 	cout << it << " ";
		// }
		// cout << endl;

		unordered_map<string,int> m;

		fo(i,n){
			string s;
			int w;
			cin >> s >> w;
			m[s] = w;
		}

		int mx = -inf;

		//cout << kmp("eche","techechef") << endl;	

		for(int i=0;i<sz(s1);i++){
			for(int j=0;j<sz(s2);j++){
				string res = s1[i] + s2[j];
				int ans = 0;

				for(auto it : m){
					int found = res.find(it.F);
					int cnt=0;
					while(found!=string::npos){
						cnt++;
						found = res.find(it.F,found+1);
					}
					ans = (ans+it.S*cnt);
				}
				if(ans > mx){
					mx = ans;
				}
			}
		}

		fo(i,sz(s1)){
			string res = s1[i];
			int ans = 0;

			for(auto it : m){
				int found = res.find(it.F);
				int cnt=0;
				while(found!=string::npos){
					cnt++;
					found = res.find(it.F,found+1);
				}
				ans = (ans+it.S*cnt);
			}
			if(ans > mx){
				mx = ans;
			}
		}

		fo(i,sz(s2)){
			string res =s2[i];
			int ans = 0;

			for(auto it : m){
				int found = res.find(it.F);
				int cnt=0;
				while(found!=string::npos){
					cnt++;
					found = res.find(it.F,found+1);
				}
				ans = (ans+it.S*cnt);
			}
			if(ans > mx){
				mx = ans;
			}
		}

		cout << mx << endl;
	}
	
	return 0;
}