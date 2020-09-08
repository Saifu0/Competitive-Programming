#include<bits/stdc++.h>
using namespace std;

#define mod 998244353
#define int long long

map<string,int> mp;
string s;
int w[50];

int power(int a, int n){
	int res = 1;
	while(n){
		if(n&1) res=  (res*a)%mod;
		n >>= 1;
		a = (a*a)%mod;
	}
	return res;
}

int solve(string a){
	string s_ = "";
	int tot = 0;
	vector<string> p1;

	int n = a.size();
	for(char c : a){
		s_ += c;
		p1.push_back(s_);
	}

	for(string c : p1){
		int len = a.size()/c.size();
		string st = c;
		for(int i=0;i<len-1;i++) st += c;
		if(st.size()==a.size()){
			if(st==a) for(char ch : c) tot += w[ch-'a'];
		}else{
			int rem = a.size()%st.size();
			st += p1[rem-1];
			if(st==a) for(char ch : c) tot += w[ch-'a'];
		}
	}
	return tot;
}

int32_t main(){

	int  _;
	cin >> _;
	while(_--){
		s.clear();
		cin >> s;
		int n = s.size();
		for(int i=0;i<26;i++)
			cin >> w[i];

		mp.clear();
		for(int i=0;i<n;i++){
			for(int j=1;j<=n-i;j++){
				string subs = s.substr(i,j);
				mp[subs]++;
			}
		}
		int cnt = 0;
		for(auto it : mp){
			cnt += solve(it.first)*(it.second);
		}

		// cout << cnt << endl;

		int tot = (n*(n+1))/2;

		// cout << tot << endl;
		// cout << (cnt*power(tot,mod-2))%mod << endl;

		int c = __gcd(tot,cnt);
		cnt /= c;
		tot /= c;
		int deno = power(tot,mod-2);

		cout << ((cnt%mod)*(deno%mod))%mod << endl;
	}


	
	return 0;
}

